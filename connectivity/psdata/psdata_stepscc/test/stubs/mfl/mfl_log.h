/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 *
 * \brief   Simple redirect to printf in Linux and to Android standard log in
 *         Android
 */

#ifndef MFL_LOG_H
#define MFL_LOG_H

#ifdef MFL_IN_ANDROID

#define MFL_LOG_I(...) ((void)ALOGI(__VA_ARGS__))
#define MFL_LOG_E(...) ((void)ALOGE(__VA_ARGS__))

/* In Android use there logging*/
#include <utils/Log.h>

#else

#define MFL_LOG_I(...) ((void)printf(__VA_ARGS__))
#define MFL_LOG_E(...) ((void)printf(__VA_ARGS__))


#ifdef __cplusplus
}
#endif

#endif /* MFL_IN_ANDROID */

#endif /* MFL_LOG_H */
