LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

ARCH:=arm

LOCAL_SRC_FILES:=kickdogd.c

srcdir := $(LOCAL_PATH)

LOCAL_MODULE_PATH := $(TARGET_OUT_OPTIONAL_EXECUTABLES)
LOCAL_MODULE_TAGS := eng

LOCAL_MODULE := watchdog-kicker

LOCAL_REQUIRED_MODULES := liblog

LOCAL_SHARED_LIBRARIES := liblog

LOCAL_CFLAGS = -O2 -Wall

include $(BUILD_EXECUTABLE)