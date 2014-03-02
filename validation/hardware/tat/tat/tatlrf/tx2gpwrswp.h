/*****************************************************************************/
/**
*  © ST-Ericsson, 2011 - All rights reserved
*  Reproduction and Communication of this document is strictly prohibited
*  unless specifically authorized in writing by ST-Ericsson
*
* \file	   tx2gpwrswp.h
* \brief   routines to manage WCDMA TX power sweep
* \author  ST-Ericsson
*/
/*****************************************************************************/

#ifndef TX2GPOWERSWEEP_H_
#define TX2GPOWERSWEEP_H_

/**
 * Get one of the param.
 * @param[in] elem specifies the DTH element.
 * @param[out] value specifies location to store output.
 * @retval 0 if success.
 * @retval an errno code if an error occured while processing.
 */
int tatl21_05Tx2G_PowerSweep_Get(struct dth_element *elem, void *Value);

/**
 * Set one of the param.
 * @param[in] elem specifies the DTH element.
 * @param[in] value specifies the input value
 * @retval 0 if success.
 * @retval an errno code if an error occured while processing.
 */
int tatl21_06Tx2G_PowerSweep_Set(struct dth_element *elem, void *Value);

/**
 * Perform the power sweep action.
 * The operation behaviour depends of the inputs set before exec is called.
 * @param[in] elem not used.
 * @retval 0 success.
 * @retval errno if an error occured while processing.
 */
int tatl21_07Tx2G_PowerSweep_Exec(struct dth_element *elem);

/**
 * Build and send an ISI message to start or stop WCDMA TX power sweep.
 * The operation done depends of an input set before exec is called.
 * @param[in] elem not used.
 * @retval 0 success.
 * @retval an errno code if an error occured while processing.
 */
int tatl21_08Tx2G_PowerSweep_Action();

#endif /* TX2GPOWERSWEEP_H_ */
