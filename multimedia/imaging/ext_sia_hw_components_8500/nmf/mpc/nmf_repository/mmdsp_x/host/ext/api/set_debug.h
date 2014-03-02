/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */

/*****************************************************************************/
/**
 * This is a Nomadik Multiprocessing Framework generated file, please do not modify it.
 */

/* 'ext.api.set_debug' interface */
#if !defined(ext_api_set_debug_IDL)
#define ext_api_set_debug_IDL

#include <cm/inc/cm_type.h>


typedef struct sIext_api_set_debug {
  void* THIS;
  t_cm_error (*setDebug)(void* THIS, t_uint16 debug_mode, t_uint16 param1, t_uint16 param2);
  t_cm_error (*readRegister)(void* THIS, t_uint16 reg_adress);
} Iext_api_set_debug;

typedef struct {
  void* THIS;
  void (*setDebug)(void* THIS, t_uint16 debug_mode, t_uint16 param1, t_uint16 param2);
  void (*readRegister)(void* THIS, t_uint16 reg_adress);
} CBext_api_set_debug;

#endif
