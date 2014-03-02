/*                               -*- Mode: C -*-
 * Copyright (C) 2010, ST-Ericsson
 *
 * File name       : pc_poll_interval.c
 * Description     : Handler function for proactive command poll interval.
 *
 * Author          : Leif Simmons <leif.simmons@stericsson.com>
 *                   Haiyuan Bu <haiyuan.bu@stericsson.com>
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <fcntl.h>

#include "pc_utilities.h"
#include "sim_internal.h"
#include "catd.h"
#include "catd_msg.h"
#include "apdu.h"
#include "sim_unused.h"
#include "func_trace.h"

#include "simd.h"

/*
 * A simple struct to hold pointers to the raw and the parsed APDU to use as a client tag in asynchronous calls.
 */
typedef struct {
    ste_apdu_t*        raw_p;
    ste_parsed_apdu_t* parsed_p;
} apdu_touple_t;

/*
 * Handle the "set poll interval" response from the modem.
 */
static int pc_set_poll_interval_response_handler(ste_msg_t* ste_msg)
{
    apdu_touple_t*                               apdu_p;
    catd_msg_modem_set_poll_interval_response_t* msg_p;
    ste_sim_ctrl_block_t*                        ctrl_p;
    ste_sat_apdu_error_t                         rc;
    ste_apdu_t*                                  response_p = NULL;

    assert(ste_msg);

    /*
     *  The message is actually a set poll interval response message, so it is safe to cast it...
     */
    msg_p = (catd_msg_modem_set_poll_interval_response_t*)ste_msg;

    /*
     * The client tag is actually a pointer to the control block we created when we set up the request.
     *
     * TODO: We should use a table to translate between transaction id and a data pointer instead of
     *       using the client tag as a pointer.
     */
    ctrl_p = (ste_sim_ctrl_block_t*)(msg_p->client_tag);
    assert(ctrl_p);

    /*
     *  The transaction data pointer is actually the pointer to the apdu touple that we created
     *  when we set up the request.
     */
    apdu_p = (apdu_touple_t*)(ctrl_p->transaction_data_p);
    assert(apdu_p);
    assert(apdu_p->raw_p);
    assert(apdu_p->parsed_p);

    // TODO: Maybe we need a better mapping between modem status and sat error...
    rc = (msg_p->status) ? STE_SAT_APDU_ERROR_INTERNAL_IMPLEMENTATION : STE_SAT_APDU_ERROR_NONE;

    if (rc == STE_SAT_APDU_ERROR_NONE) {
        ste_command_result_t result;
        result.general_result = SAT_RES_CMD_PERFORMED_SUCCESSFULLY;
        result.command_status = STE_SAT_PC_CMD_STATUS_COMPLETED;
        result.additional_info_size = 0;
        result.additional_info_p = NULL;
        result.other_data_type = STE_CMD_RESULT_POLL_INTERVAL;
        result.other_data.duration = msg_p->interval;
        rc = ste_apdu_terminal_response(apdu_p->parsed_p, &result, &response_p);
    }

    if (rc == STE_SAT_APDU_ERROR_NONE) {
        catd_sig_tr(CATD_FD, response_p, CATD_CLIENT_TAG);
    } else {
        pc_send_terminal_response_error(rc, apdu_p->raw_p);
    }

    ste_apdu_delete(response_p);
    ste_apdu_delete(apdu_p->raw_p);
    ste_parsed_apdu_delete(apdu_p->parsed_p);
    free(apdu_p);
    return 0;
}

/*************************************************************************
 * @brief:    Handle the POLL_INTERVAL pro-active command internally
 * @params:
 *            msg: The original message with APDU data, client_tag, etc.
 *
 * @return:   void
 *
 * Notes:     
 *************************************************************************/
static void pc_main_handle_poll_interval(catd_msg_apdu_t* msg)
{
    apdu_touple_t*       apdu_p;
    ste_sat_apdu_error_t rc;

    assert(msg->apdu);

    rc = STE_SAT_APDU_ERROR_MEMORY_ALLOCATION_FAILURE;

    apdu_p = malloc(sizeof(*apdu_p));
    if (apdu_p) {
        apdu_p->raw_p = msg->apdu;
        apdu_p->parsed_p = NULL; // Make sure parsed_p is either NULL or a valid parsed APDU pointer.
        rc = ste_apdu_parse(apdu_p->raw_p, &apdu_p->parsed_p);
    }

    if (rc == STE_SAT_APDU_ERROR_NONE) {
        ste_apdu_pc_poll_interval_t* interval_p = NULL;
        rc = ste_parsed_apdu_get(apdu_p->parsed_p, (void**)&interval_p, STE_APDU_CMD_TYPE_POLL_INTERVAL); // Doesn't allocate memory
        if (rc == STE_SAT_APDU_ERROR_NONE) {
            ste_modem_t* modem_p  = catd_get_modem();
            rc = STE_SAT_APDU_ERROR_UNKNOWN;
            if (apdu_p->raw_p && interval_p && modem_p) {
                if (interval_p->bit_mask & PC_POLL_INTERVAL_Duration_present) {
                    /*
                     * The control block is used to "divert" the modem response to the handler function
                     * as well as to hold data we need when handling the response from the modem
                     */
                    ste_sim_ctrl_block_t* ctrl_p = ste_sim_create_ctrl_block(CATD_CLIENT_TAG, CATD_FD, CATD_MSG_NONE,
                                                                             pc_set_poll_interval_response_handler, apdu_p);
                    if (ctrl_p) {
                        if (ste_catd_modem_set_poll_intervall(modem_p, (uintptr_t)ctrl_p, interval_p->duration) == 0) {
                            /*
                             *  Set the pointer to the raw APDU in the message to NULL in order to prevent the
                             *  framework from deleting the raw APDU when it deletes the message. We will delete
                             *  the raw APDU ourselves later on.
                             */
                            msg->apdu = NULL;
                            return; // Request sent ok, now we wait for the response!
                        }
                    } else {
                        rc = STE_SAT_APDU_ERROR_MEMORY_ALLOCATION_FAILURE;
                    }
                    free(ctrl_p);
                }
            }
        }
    }
    pc_send_terminal_response_error(rc, msg->apdu);
    if (apdu_p) {
        /*
         * No need to free apdu_p->raw_p, i.e. no need to call ste_apdu_delete().
         * If apdu_p->raw_p is set, then at this point it is an alias for msg->apdu
         * which will be taken care of when the framework deletes the msg.
         *
         * However, we need to free apdu_p->parsed_p...
         */
        ste_parsed_apdu_delete(apdu_p->parsed_p);
    }
    free(apdu_p);
}

/*************************************************************************
 * @brief:    Handler function for the POLL_INTERVALL pro-active command
 * @params:
 *            msg:         the original message with APDU data, and client_tag, etc. 
 *
 * @return:   void
 *
 * Notes:     
 *************************************************************************/
void catd_handle_pc_poll_interval(catd_msg_apdu_t* msg)
{
    assert(msg);
    pc_main_handle_poll_interval(msg);
}