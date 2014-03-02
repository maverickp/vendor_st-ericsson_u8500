/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */

#include "tuning_iqset.h"
#include "tuning_osal.h"
#include "tuning_types.h"
#include "tuning_macros.h"
#include <string.h>

/** structure holding a pair of IQSET identifier and relevant enumerate name */
typedef struct
{
    e_iqset_id id;
    char name[64];
} t_iqset_entry_hash;


 /** macro generating an entry in the hash table from the enumarated value */
#define IQSET_HASH(value) {value,#value}

/** List of all possible entries in the xml file and associated enumerate on sw side*/
static const t_iqset_entry_hash KIqSetList[] =
{

    IQSET_HASH(IQSET_OPMODE_SETUP),
    IQSET_HASH(IQSET_PICTURE_SETTINGS_MAPPING),
    IQSET_HASH(IQSET_NOISE_MODEL_SETUP),

    IQSET_HASH(IQSET_WHITEBALANCE_AUTO),
    IQSET_HASH(IQSET_WHITEBALANCE_CLOUDY),
    IQSET_HASH(IQSET_WHITEBALANCE_DAYLIGHT),
    IQSET_HASH(IQSET_WHITEBALANCE_FLASH),
    IQSET_HASH(IQSET_WHITEBALANCE_HORIZON),
    IQSET_HASH(IQSET_WHITEBALANCE_OFF),
    IQSET_HASH(IQSET_WHITEBALANCE_SHADE),
    IQSET_HASH(IQSET_WHITEBALANCE_TUNGSTEN),
    IQSET_HASH(IQSET_WHITEBALANCE_FLUORESCENT),
    IQSET_HASH(IQSET_WHITEBALANCE_INCANDESCENT),

    IQSET_HASH(IQSET_EXPOSURECONTROL_OFF),
    IQSET_HASH(IQSET_EXPOSURECONTROL_AUTO),
    IQSET_HASH(IQSET_EXPOSURECONTROL_NIGHT),
    IQSET_HASH(IQSET_EXPOSURECONTROL_BACKLIGHT),
    IQSET_HASH(IQSET_EXPOSURECONTROL_SPOTLIGHT),
    IQSET_HASH(IQSET_EXPOSURECONTROL_SPORTS),
    IQSET_HASH(IQSET_EXPOSURECONTROL_SNOW),
    IQSET_HASH(IQSET_EXPOSURECONTROL_BEACH),
    IQSET_HASH(IQSET_EXPOSURECONTROL_LARGEAPERTURE),
    IQSET_HASH(IQSET_EXPOSURECONTROL_SMALLAPERTURE),
    IQSET_HASH(IQSET_EXPOSURECONTROL_CENTER),
    IQSET_HASH(IQSET_EXPOSURECONTROL_VERYLONG),

    IQSET_HASH(IQSET_IMAGEFILTER_NONE),
    IQSET_HASH(IQSET_IMAGEFILTER_NOISE),
    IQSET_HASH(IQSET_IMAGEFILTER_EMBOSS),
    IQSET_HASH(IQSET_IMAGEFILTER_NEGATIVE),
    IQSET_HASH(IQSET_IMAGEFILTER_SKETCH),
    IQSET_HASH(IQSET_IMAGEFILTER_OILPAINT),
    IQSET_HASH(IQSET_IMAGEFILTER_HATCH),
    IQSET_HASH(IQSET_IMAGEFILTER_GPEN),
    IQSET_HASH(IQSET_IMAGEFILTER_ANTIALIAS),
    IQSET_HASH(IQSET_IMAGEFILTER_DERING),
    IQSET_HASH(IQSET_IMAGEFILTER_SOLARIZE),

    IQSET_HASH(IQSET_SYMBIAN_SCENEAUTO),
    IQSET_HASH(IQSET_SYMBIAN_SCENEPORTRAIT),
    IQSET_HASH(IQSET_SYMBIAN_SCENELANDSCAPE), 
    IQSET_HASH(IQSET_SYMBIAN_SCENENIGHT),
    IQSET_HASH(IQSET_SYMBIAN_SCENENIGHTPORTRAIT),
    IQSET_HASH(IQSET_SYMBIAN_SCENESPORT),
    IQSET_HASH(IQSET_SYMBIAN_SCENEMACRO), 
    IQSET_HASH(IQSET_STE_SCENEDOCUMENT),
    IQSET_HASH(IQSET_STE_SCENEBEACH),
    IQSET_HASH(IQSET_STE_SCENESNOW),
    IQSET_HASH(IQSET_STE_SCENEPARTY),
    IQSET_HASH(IQSET_STE_SCENEAQUA),
    IQSET_HASH(IQSET_STE_SCENECANDLELIGHT),
    IQSET_HASH(IQSET_STE_SCENEBACKLIGHT),
    IQSET_HASH(IQSET_STE_SCENESUNSET),

    IQSET_HASH(IQSET_FLICKERREJECTION_OFF),
    IQSET_HASH(IQSET_FLICKERREJECTION_50),
    IQSET_HASH(IQSET_FLICKERREJECTION_60),

    IQSET_HASH(IQSET_EXPOSUREVALUE_COMPENSATION),
    IQSET_HASH(IQSET_AECMETERING_AVERAGE),
    IQSET_HASH(IQSET_AECMETERING_SPOT),
    IQSET_HASH(IQSET_AECMETERING_BEACH_SNOW),
    IQSET_HASH(IQSET_AECMETERING_PORTRAIT),
    IQSET_HASH(IQSET_AECMETERING_LANDSCAPE),

    IQSET_HASH(IQSET_SHUTTERSPEED_TIME),
    IQSET_HASH(IQSET_ISO_AUTO),
    IQSET_HASH(IQSET_ISO_100),
    IQSET_HASH(IQSET_ISO_200),
    IQSET_HASH(IQSET_ISO_400),
    IQSET_HASH(IQSET_ISO_800),
    IQSET_HASH(IQSET_ISO_1600),
    IQSET_HASH(IQSET_ISO_3200),
    IQSET_HASH(IQSET_IMAGEFILTER_SEPIA),
    IQSET_HASH(IQSET_IMAGEFILTER_GRAYSCALE),
    IQSET_HASH(IQSET_IMAGEFILTER_NATURAL),
    IQSET_HASH(IQSET_IMAGEFILTER_VIVID),
    IQSET_HASH(IQSET_IMAGEFILTER_WATERCOLOR),
    IQSET_HASH(IQSET_IMAGEFILTER_PASTEL),
    IQSET_HASH(IQSET_IMAGEFILTER_GRAYSCALENEGATIVE),
    IQSET_HASH(IQSET_IMAGEFILTER_SNOW),
    IQSET_HASH(IQSET_IMAGEFILTER_BEACH),
    IQSET_HASH(IQSET_FOCUS_ON),
    IQSET_HASH(IQSET_FOCUS_AUTO),
    IQSET_HASH(IQSET_FOCUSRANGE_AUTO),
    IQSET_HASH(IQSET_IMAGEFILTER_FILM),

    IQSET_HASH(IQSET_FOCUSRANGE_NORMAL),
    IQSET_HASH(IQSET_FOCUSRANGE_SUPERMACRO),
    IQSET_HASH(IQSET_FOCUSRANGE_MACRO),
    IQSET_HASH(IQSET_FOCUSRANGE_HYPERFOCAL),
    IQSET_HASH(IQSET_FOCUSRANGE_INFINITY),
    IQSET_HASH(IQSET_FOCUSREGION_AUTO),
    IQSET_HASH(IQSET_FOCUSREGION_MANUAL),
    IQSET_HASH(IQSET_AECMETERING_MATRIX),
    IQSET_HASH(IQSET_AECMETERING_CENTERWEIGHTED),
    IQSET_HASH(IQSET_FOCUSREGION_CENTER),
    IQSET_HASH(IQSET_YUVPRIMARIES_FULL),
    IQSET_HASH(IQSET_YUVPRIMARIES_BT601),
    IQSET_HASH(IQSET_YUVPRIMARIES_BT709),

    IQSET_HASH(IQSET_SOFTWARE_CHROMA_NOISE_REDUCTION),
    IQSET_HASH(IQSET_SHAKE_DETECTION),
    IQSET_HASH(IQSET_FLASH),
    IQSET_HASH(IQSET_IMAGEFILTER_POSTERIZE),
    IQSET_HASH(IQSET_ANALOG_GAIN_MODEL),
    IQSET_HASH(IQSET_SOFTWARE_SCENE_DETECTOR),
    IQSET_HASH(IQSET_EXPOSURE_TIME_INIT_MODEL)
};

static const t_sint32 KIqSetCount = sizeof(KIqSetList)/(sizeof(KIqSetList[0]));

// Prevent export of symbols
#ifdef __SYMBIAN32__
NONSHARABLE_CLASS(CTuningIQSet);
#endif

/****************************************************************************/
/**
 * \brief
 * \author
 * \in
 * \return
 *
 **/
/****************************************************************************/
e_iqset_id CTuningIQSet::FindIQSetIdFromName(const char* aName)
{
    t_sint32 cnt = 0;
    e_iqset_id id = IQSET_UNKNOWN;

    while (cnt < KIqSetCount)
    {
        if (!strncmp( aName, KIqSetList[cnt].name, sizeof(KIqSetList[0].name)))
        {
            id = KIqSetList[cnt].id;
            break;
        }
        cnt++;
    }
    return id;
}

/****************************************************************************/
/**
 * \brief
 * \author
 * \in
 * \return
 *
 **/
/****************************************************************************/
const char* CTuningIQSet::FindIQSetNameFromId(const e_iqset_id aIqSetId)
{
    t_sint32 cnt = 0;
    const char* iqSetName = NULL;

    while (cnt < KIqSetCount)
    {
        if (KIqSetList[cnt].id == aIqSetId)
        {
            iqSetName = KIqSetList[cnt].name;
            break;
        }
        cnt++;
    }
    return iqSetName;
}
