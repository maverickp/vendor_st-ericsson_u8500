/*
 * Copyright (C) 2007 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 *
 * Code adapted to the requirements of the ST-Ericsson U8500 product.
 *
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */


/* firmware upload

 mloader_fw is the devcice used to upload a firmware to the modem

 mloader_fw generates an uevent after a blocking ioctl
    the ioctl exits when the firmware upload completes or after a timeout
    the return code contains an error code (!=0) in case of error

 init_firmware_upload_handler() setups a thread to handle uevents generated by mloader_fw device
      this thread get the firmware to upload and writes it to the device

 firmware_upload() calls the mloader_fw to start upload
      it checks the result of the ioctl, and FwUploadCounter
      it returns ZERO for success and anything else for error

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <linux/netlink.h>
#include <sys/time.h>
#include <assert.h>
#include <poll.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <signal.h>
#define fwhandler_c
#include "fwhandler.h"

#include "toc_parser.h"
#include "modem-sup.h"
#include <linux/mloader.h>


#define BINNAME "FWHDL"

#ifdef HAVE_ANDROID_OS
#define LOG_TAG BINNAME
#include <cutils/log.h>
#define OPENLOG(facility) ((void)0)
#else
#define OPENLOG(facility) openlog(BINNAME, LOG_PID | LOG_CONS, facility)
#define LOG(priority, format, ...) syslog(priority, format, ##__VA_ARGS__)
#define ALOGV(format, ...)   LOG(LOG_INFO, format, ##__VA_ARGS__)
#define ALOGD(format, ...)   LOG(LOG_DEBUG, format, ##__VA_ARGS__)
#define ALOGI(format, ...)   LOG(LOG_INFO, format, ##__VA_ARGS__)
#define ALOGW(format, ...)   LOG(LOG_WARNING, format, ##__VA_ARGS__)
#define ALOGE(format, ...)   LOG(LOG_ERR, format, ##__VA_ARGS__)
#endif

#define SYSFS_PREFIX    "/sys"

/* Got from ./bionic/libc/kernel/arch-arm/asm/page.h */
#define PAGE_SHIFT 12
#define PAGE_SIZE (1UL << PAGE_SHIFT)
#define PAGE_MASK (~(PAGE_SIZE-1))

#define DEBUG_HANDLER 1



#ifdef DEBUG_HANDLER
#define DEBUG_LINE printf("%s:%d\n",__FUNCTION__,__LINE__);
void setup_debug_sighandler(void);
#endif /* #ifdef DEBUG_HANDLER */

struct uevent {
    const char *action;
    const char *path;
    const char *subsystem;
    const char *firmware;
    const char *country;
    int major;
    int minor;
};


/* handle of toc to get firmware from lib toc parser */
tocparser_handle_t * toc_handle;



/* file descriptor of mloader_fw device */
int device_fd = -1;

/* Fw uplad counter */
int FwUploadCounter = 0;

pthread_t       Thread;
pthread_attr_t  ThreadAttr;
pthread_mutex_t mutex;

static void reset_fw_upload_counter(void)
{
    pthread_mutex_lock(&mutex);
    FwUploadCounter = 0;
    pthread_mutex_unlock(&mutex);
}

static int get_fw_upload_counter(void)
{
    int result;
    pthread_mutex_lock(&mutex);
    result = FwUploadCounter;
    pthread_mutex_unlock(&mutex);
    return result;
}

/* read firmware related information from the uevent */
static void process_firmware_event(struct uevent *uevent)
{
    char *root, *loading, *data;
    int l, loading_fd, data_fd;
    ssize_t nw;
    int dw;

    char * toc_id = NULL;
    char * fw_buffer;
    /*    ssize_t offset=0;*/
    /*    ssize_t fw_size;*/
    uint32_t offset = 0;
    uint32_t fw_size;
    uint32_t loadaddr = 0;

    int status = -1;

    ALOGI("firmware event { '%s', '%s' }\n",
         uevent->path, uevent->firmware);

    l = asprintf(&root, SYSFS_PREFIX"%s/", uevent->path);

    if (l == -1)
        return;

    l = asprintf(&loading, "%sloading", root);

    if (l == -1)
        goto root_free_out;

    /* open loading control device  */
    /* write 1 to start, 0 to stop, -1 to abort */
    loading_fd = open(loading, O_WRONLY);

    if (loading_fd < 0)
        goto loading_free_out;

    l = asprintf(&data, "%sdata", root);

    if (l == -1)
        goto loading_close_out;

    /*    printf("dump path = %s\n",modem_path[i]);*/
    /* open data device : write data in to upload the firmware */
    data_fd = open(data, O_WRONLY);

    if (data_fd < 0) {
        goto data_free_out;
    }

    ALOGI("tocparser_get_toc_entry : |%s| \n", uevent->firmware);

    if (tocparser_get_toc_entry(toc_handle, uevent->firmware, &offset, &fw_size,
                                &loadaddr)) {
        ALOGI("unable to get TOC ID information\n");
        goto data_close_out;
    }

    /* allocate buffer for FW uploading */
    fw_buffer = malloc(PAGE_SIZE);

    if (fw_buffer == NULL) {
        ALOGI("FW upload buffer allocation failed\n");
        goto data_close_out;
    }

    ALOGI("tocparser_load_toc_entry\n");

    /* start transfer */
    write(loading_fd, "1", 1);

    /* write buffer by packets of 4096 bytes */
    offset = 0;

    while (offset < fw_size) {
        dw = ((offset + PAGE_SIZE) > fw_size ? fw_size - offset : PAGE_SIZE);

        if (tocparser_load_toc_entry(toc_handle,  uevent->firmware, offset, dw,
                                (uint32_t)fw_buffer) != 0) {
            ALOGI("unable to get toc_id entry: %s, offset = 0x%x, size = 0x%x\n",
                                 toc_id, offset, dw);
            goto fw_free_out;
        }

        nw = write(data_fd, (char*)(fw_buffer), dw);

        if (nw != dw) {
            ALOGI("firmware copy failure { '%s', '%s' }\n", root, uevent->firmware);
            goto fw_free_out;
        }
        offset += dw;
    }

    /* transfert success */
    status = 0;
    ALOGI("firmware copy success { '%s', '%s' }\n", root, uevent->firmware);
    pthread_mutex_lock(&mutex);
    /* update firmware upload counter */
    FwUploadCounter++;
    pthread_mutex_unlock(&mutex);

fw_free_out:
    free(fw_buffer);

data_close_out:
    close(data_fd);

data_free_out:
    free(data);

loading_close_out:

    if (status == 0) {
        write(loading_fd, "0", 1);  /* successful end of transfer */
    } else {
        write(loading_fd, "-1", 2); /* abort transfer */
    }

    close(loading_fd);

loading_free_out:
    free(loading);
root_free_out:
    free(root);
}


/* parse uevent to check firmware event */
static void handle_firmware_event(struct uevent *uevent)
{

    if (strcmp(uevent->subsystem, "firmware"))
        return;

    if (strcmp(uevent->action, "add"))
        return;

    /* handle only mloader_fw device */
    if (strstr(uevent->path, "mloader_fw") == NULL)
        return;

    process_firmware_event(uevent);
}

/* open uevent socket */
static int open_uevent_socket(void)
{
    struct sockaddr_nl addr;
    int sz = 64 * 1024; // XXX larger? udev uses 16MB!
    int s;

    memset(&addr, 0, sizeof(addr));
    addr.nl_family = AF_NETLINK;
    addr.nl_pid = getpid();
    addr.nl_groups = 0xffffffff;

    s = socket(PF_NETLINK, SOCK_DGRAM, NETLINK_KOBJECT_UEVENT);

    if (s < 0)
        return -1;

    setsockopt(s, SOL_SOCKET, SO_RCVBUFFORCE, &sz, sizeof(sz));

    if (bind(s, (struct sockaddr *) &addr, sizeof(addr)) < 0) {
        close(s);
        return -1;
    }

    return s;
}

/* open uevent socket */
int device_init(void)
{
    int fd;

    fd = open_uevent_socket();

    if (fd < 0)
        return -1;

    fcntl(fd, F_SETFD, FD_CLOEXEC);
    fcntl(fd, F_SETFL, O_NONBLOCK);
    return fd;
}


static void parse_event(const char *msg, struct uevent *uevent)
{
    uevent->action = "";
    uevent->path = "";
    uevent->subsystem = "";
    uevent->firmware = "";
    uevent->country = "";
    uevent->major = -1;
    uevent->minor = -1;

    /* currently ignoring SEQNUM */
    while (*msg) {
        if (!strncmp(msg, "ACTION=", 7)) {
            msg += 7;
            uevent->action = msg;
        } else if (!strncmp(msg, "DEVPATH=", 8)) {
            msg += 8;
            uevent->path = msg;
        } else if (!strncmp(msg, "SUBSYSTEM=", 10)) {
            msg += 10;
            uevent->subsystem = msg;
        } else if (!strncmp(msg, "FIRMWARE=", 9)) {
            msg += 9;
            uevent->firmware = msg;
        } else if (!strncmp(msg, "COUNTRY=", 8)) {
            msg += 8;
            uevent->country = msg;
        } else if (!strncmp(msg, "MAJOR=", 6)) {
            msg += 6;
            uevent->major = atoi(msg);
        } else if (!strncmp(msg, "MINOR=", 6)) {
            msg += 6;
            uevent->minor = atoi(msg);
        }

        /* advance to after the next \0 */
        while (*msg++)
            ;
    }
}



#define UEVENT_MSG_LEN  1024
static void handle_device_fd(int fd)
{
    char msg[UEVENT_MSG_LEN+2];
    int n;
    int status;

    struct pollfd sfds[1];
    sfds[0].fd = fd;
    sfds[0].events = POLLIN;

    /* wait for some event  timeout 1H */
    status = poll(sfds, 1, 3600 * 1000);

    if (status == 0) {
        /*   printf("timeout\n");*/
        return;
    }


    if (status < 0) {
        ALOGI("poll error %d:%s", errno, strerror(errno));
        return;
    }

    while ((n = recv(fd, msg, UEVENT_MSG_LEN, 0)) > 0) {
        struct uevent uevent;

        if (n == UEVENT_MSG_LEN)  /* overflow -- discard */
            continue;

        msg[n] = '\0';
        msg[n+1] = '\0';
        parse_event(msg, &uevent);
        handle_firmware_event(&uevent);
    }
}


/* thread infinite loop */
static void * uevent_handler_thread_loop(void)
{

    while (1) {
        handle_device_fd(device_fd);
    }

    return NULL;
}

/* start fimware upload thread */
/* returns 0 for success */
int init_firmware_upload_handler(void)
{

    int status = SUCCESS;

    pthread_mutex_init(&mutex, NULL);

    OPENLOG(LOG_DAEMON);

    device_fd = device_init();

    if (!device_fd) {
        ALOGI("Unable to open netlink socket\n");
        status = FAILED;
    }

    if (pthread_attr_init(&ThreadAttr) != 0) {
        ALOGI("pthread_attr_init error");
        status = FAILED;
    }

    if (pthread_attr_setdetachstate(&ThreadAttr, PTHREAD_CREATE_DETACHED) != 0) {
        ALOGI("pthread_attr_setdetachstate error");
        status = FAILED;
    }

    if (pthread_create(&Thread, &ThreadAttr, (void *)uevent_handler_thread_loop, NULL) < 0) {
        ALOGI("pthread_create error\n");
        status = FAILED;
    }

    return status;
}


/* start fimware upload */
/* returns 0 for success */
int firmware_upload(char *mloader_path)
{
    int status, tmp;
    int fd;
    char *dev = "/dev/block/mmcblk0";

    ALOGI("tocparser init  \n");
    /* int status;*/
    status = tocparser_init(dev, TOCPARSER_READONLY, &toc_handle);

    if (status != TOCPARSER_OK) {
        ALOGI("tocparser init failed:status %d \n", status);
        return -1;
    }

    ALOGI("tocparser init OK \n");

    reset_fw_upload_counter();

    if ((fd = open(mloader_path, O_RDWR)) < 0) {
        ALOGI("could not open %s\n", mloader_path);
        assert(0);
    }

    status = ioctl(fd, ML_UPLOAD, NULL);  /* FIXME !! */
    ALOGI("IOCTL request :%d  \n", status);
    close(fd);

    if (tocparser_uninit(toc_handle) != 0) {
        ALOGI("tocparser uinit failed\n");
        return -1;
    }

    if (((tmp = get_fw_upload_counter()) != 2) || (status != 0)) {
        ALOGI("Failed to upload firmware status :%d  counter :%d \n", status, tmp);
        return -1;
    } else {
        ALOGI("Firmware upload Success\n");
    }

    return 0;
}
