/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */

#include <config.h>

static struct config config = {
	.avs_enable		= true,
	.avs_type		= AVS_TYPE_8500,
	.memtest_method		= MEMTEST_METHOD_OLD,
	.memtest_disable_cache	= false,
	.overclock		= OVERCLOCK_1000MHZ,
	.log_level		= LOG_INFO,
	.uart_enable		= true,
	.uart_str		= UART_STRING,
	.uart_base		= UART2_BASE,
	.uart_gpiopins		= UART_GPIOPINS_29_30,
	.uart_baud		= UART_BAUD115200,
	.modem_stm_gpiopins	= MODEM_STM_GPIOPINS_DISABLE,
	.modem_uart_gpiopins	= MODEM_UART_GPIOPINS_DISABLE,
	.prcmu_stm_gpiopins	= PRCMU_STM_GPIOPINS_DISABLE,
	.board_version		= BOARD_VERSION_500_V5X,
	.modem_start		= false,
	.process_detection	= true,
};

struct config * get_config(void)
{
	return &config;
}