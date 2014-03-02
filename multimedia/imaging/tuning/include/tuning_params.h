/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */

#ifndef _TUNING_PARAMS_H_
#define _TUNING_PARAMS_H_

// Base addresses
#define ISP_PARAMS_BASE_ADDR                        0x00000000
#define DRIVER_PARAMS_BASE_ADDR                     0x00010000
#define RSO_DAMPER_PARAMS_BASE_ADDR                 0x00020000
#define NOISE_FILTER_DAMPER_PARAMS_BASE_ADDR        0x00030000
#define DEFCOR_DAMPER_PARAMS_BASE_ADDR              0x00040000
#define SHARPENING_DAMPER_PARAMS_BASE_ADDR          0x00050000
#define NOISE_MODEL_DAMPER_PARAMS_BASE_ADDR         0x00060000
#define SCORPIO_DAMPER_PARAMS_BASE_ADDR             0x00070000
#define NORCOS_DAMPER_PARAMS_BASE_ADDR              0x00080000
#define SCYTHE_DAMPER_PARAMS_BASE_ADDR              0x00090000
#define SW3A_AEC_PARAMS_BASE_ADDR                   0x00100000
#define SW3A_AWB_PARAMS_BASE_ADDR                   0x00110000
#define SW3A_AFC_PARAMS_BASE_ADDR                   0x00120000
#define SW3A_ART_PARAMS_BASE_ADDR                   0x00130000
#define SCENE_DETECTOR_PARAMS_BASE_ADDR             0x00140000

// Macros for checking whether a parameter is in the correct range
#define IS_ISP_PARAM(a)             (((a)&0xFFFF0000)==ISP_PARAMS_BASE_ADDR)
#define IS_DRIVER_PARAM(a)          (((a)&0xFFFF0000)==DRIVER_PARAMS_BASE_ADDR)
#define IS_SW3A_AEC_PARAM(a)        (((a)&0xFFFF0000)==SW3A_AEC_PARAMS_BASE_ADDR)
#define IS_SW3A_AWB_DAMPER_PARAM(a) (((a)&0xFFFF0000)==SW3A_AWB_DAMPER_PARAMS_BASE_ADDR)
#define IS_SW3A_AFC_PARAM(a)        (((a)&0xFFFF0000)==SW3A_AFC_PARAMS_BASE_ADDR)
#define IS_SW3A_ART_PARAM(a)        (((a)&0xFFFF0000)==SW3A_ART_PARAMS_BASE_ADDR)

// Driver parameters
#define f_BrightnessGain                 (DRIVER_PARAMS_BASE_ADDR+0x0000)
#define f_BrightnessOffset               (DRIVER_PARAMS_BASE_ADDR+0x0001)
#define f_SharpnessGain                  (DRIVER_PARAMS_BASE_ADDR+0x0010)
#define f_SharpnessOffset                (DRIVER_PARAMS_BASE_ADDR+0x0011)
#define f_ContrastGain                   (DRIVER_PARAMS_BASE_ADDR+0x0050)
#define f_ContrastOffset                 (DRIVER_PARAMS_BASE_ADDR+0x0051)
#define f_SaturationGain                 (DRIVER_PARAMS_BASE_ADDR+0x0060)
#define f_SaturationOffset               (DRIVER_PARAMS_BASE_ADDR+0x0061)
#define f_EVcompensation                 (DRIVER_PARAMS_BASE_ADDR+0x0074)
#define u8_ShutterSpeedMin               (DRIVER_PARAMS_BASE_ADDR+0x0080)
#define u8_ShutterSpeedMax               (DRIVER_PARAMS_BASE_ADDR+0x0081)
#define f_FocusRegionManual_GainX        (DRIVER_PARAMS_BASE_ADDR+0x0084)
#define f_FocusRegionManual_OffsetX      (DRIVER_PARAMS_BASE_ADDR+0x0085)
#define f_FocusRegionManual_GainY        (DRIVER_PARAMS_BASE_ADDR+0x0086)
#define f_FocusRegionManual_OffsetY      (DRIVER_PARAMS_BASE_ADDR+0x0087)
#define f_ShadingCorrectionGain          (DRIVER_PARAMS_BASE_ADDR+0x0090)
                                                                         
#define f_NoiseFilterGain                (DRIVER_PARAMS_BASE_ADDR+0x00A0)
#define f_NoiseFilterOffset              (DRIVER_PARAMS_BASE_ADDR+0x00A1)
#define u8_ShortTimeThreshold            (DRIVER_PARAMS_BASE_ADDR+0x00B0)
#define u8_LongTimeThreshold             (DRIVER_PARAMS_BASE_ADDR+0x00B1)
#define f_WhiteBalanceOffGain            (DRIVER_PARAMS_BASE_ADDR+0x00C0)
#define f_WhiteBalanceOffMatrix          (DRIVER_PARAMS_BASE_ADDR+0x00C1)
#define u8_FlashPowerMode                (DRIVER_PARAMS_BASE_ADDR+0x00D0)
#define u16_FlashMaxPower                (DRIVER_PARAMS_BASE_ADDR+0x00D1)
#define u16_FlashMaxPreflashes           (DRIVER_PARAMS_BASE_ADDR+0x00D2)
#define u8_SmiaModel                     (DRIVER_PARAMS_BASE_ADDR+0x00E0) 
#define f_SmiaM0                         (DRIVER_PARAMS_BASE_ADDR+0x00E1) 
#define f_SmiaC0                         (DRIVER_PARAMS_BASE_ADDR+0x00E2) 
#define f_SmiaM1                         (DRIVER_PARAMS_BASE_ADDR+0x00E3) 
#define f_SmiaC1                         (DRIVER_PARAMS_BASE_ADDR+0x00E4) 
#define s16_SmiaMinCode                  (DRIVER_PARAMS_BASE_ADDR+0x00E5) 
#define s16_SmiaMaxCode                  (DRIVER_PARAMS_BASE_ADDR+0x00E6) 
#define f_LinearMin                      (DRIVER_PARAMS_BASE_ADDR+0x00E7) 
#define f_LinearMax                      (DRIVER_PARAMS_BASE_ADDR+0x00E8) 
#define f_LinearBase                     (DRIVER_PARAMS_BASE_ADDR+0x00E9) 
#define f_LinearStep                     (DRIVER_PARAMS_BASE_ADDR+0x00EA) 
#define u32_MinExpTime                   (DRIVER_PARAMS_BASE_ADDR+0x00F0)
#define u32_MaxExpTime                   (DRIVER_PARAMS_BASE_ADDR+0x00F1)
#define u32_BaseExpTime                  (DRIVER_PARAMS_BASE_ADDR+0x00F2)
#define u32_StepExpTime                  (DRIVER_PARAMS_BASE_ADDR+0x00F3)

// RSO dampers
#define RSO_DAMPER_BASE_A                 (RSO_DAMPER_PARAMS_BASE_ADDR+0x0000)
#define RSO_DAMPER_BASE_A_CONTROL_POINTS  (RSO_DAMPER_PARAMS_BASE_ADDR+0x0001)
#define RSO_DAMPER_BASE_B                 (RSO_DAMPER_PARAMS_BASE_ADDR+0x0002)
#define RSO_DAMPER_BASE_B_CONTROL_POINTS  (RSO_DAMPER_PARAMS_BASE_ADDR+0x0003)
#define RSO_DAMPER_DCTERM_OFFSET_RR       (RSO_DAMPER_PARAMS_BASE_ADDR+0x0010)
#define RSO_DAMPER_DCTERM_OFFSET_GR       (RSO_DAMPER_PARAMS_BASE_ADDR+0x0011)
#define RSO_DAMPER_DCTERM_OFFSET_GB       (RSO_DAMPER_PARAMS_BASE_ADDR+0x0012)
#define RSO_DAMPER_DCTERM_OFFSET_BB       (RSO_DAMPER_PARAMS_BASE_ADDR+0x0013)
#define RSO_DAMPER_SLANT_X_RR             (RSO_DAMPER_PARAMS_BASE_ADDR+0x0020)
#define RSO_DAMPER_SLANT_X_GR             (RSO_DAMPER_PARAMS_BASE_ADDR+0x0021)
#define RSO_DAMPER_SLANT_X_GB             (RSO_DAMPER_PARAMS_BASE_ADDR+0x0022)
#define RSO_DAMPER_SLANT_X_BB             (RSO_DAMPER_PARAMS_BASE_ADDR+0x0023)
#define RSO_DAMPER_SLANT_Y_RR             (RSO_DAMPER_PARAMS_BASE_ADDR+0x0030)
#define RSO_DAMPER_SLANT_Y_GR             (RSO_DAMPER_PARAMS_BASE_ADDR+0x0031)
#define RSO_DAMPER_SLANT_Y_GB             (RSO_DAMPER_PARAMS_BASE_ADDR+0x0032)
#define RSO_DAMPER_SLANT_Y_BB             (RSO_DAMPER_PARAMS_BASE_ADDR+0x0033)

// Noise filter dampers
#define NOISE_FILTER_DAMPER_BASE_A                 (NOISE_FILTER_DAMPER_PARAMS_BASE_ADDR+0x0000)
#define NOISE_FILTER_DAMPER_BASE_A_CONTROL_POINTS  (NOISE_FILTER_DAMPER_PARAMS_BASE_ADDR+0x0001)
#define NOISE_FILTER_DAMPER_BASE_B                 (NOISE_FILTER_DAMPER_PARAMS_BASE_ADDR+0x0002)
#define NOISE_FILTER_DAMPER_BASE_B_CONTROL_POINTS  (NOISE_FILTER_DAMPER_PARAMS_BASE_ADDR+0x0003)
#define NOISE_FILTER_DAMPER_DUSTER_GAUSSIAN_WEIGHT (NOISE_FILTER_DAMPER_PARAMS_BASE_ADDR+0x0004)

// Defect Correction Dampers
#define DEFCOR_DAMPER_BASE_A                 (DEFCOR_DAMPER_PARAMS_BASE_ADDR+0x0000)
#define DEFCOR_DAMPER_BASE_A_CONTROL_POINTS  (DEFCOR_DAMPER_PARAMS_BASE_ADDR+0x0001)
#define DEFCOR_DAMPER_BASE_B                 (DEFCOR_DAMPER_PARAMS_BASE_ADDR+0x0002)
#define DEFCOR_DAMPER_BASE_B_CONTROL_POINTS  (DEFCOR_DAMPER_PARAMS_BASE_ADDR+0x0003)
#define DEFCOR_DAMPER_DUSTER_RC_THRESHOLD    (DEFCOR_DAMPER_PARAMS_BASE_ADDR+0x0004)
#define DEFCOR_DAMPER_DUSTER_CC_SIGMA_FACTOR (DEFCOR_DAMPER_PARAMS_BASE_ADDR+0x0005)

// Sharpening Dampers
#define SHARPENING_DAMPER_BASE_A                 (SHARPENING_DAMPER_PARAMS_BASE_ADDR+0x0000)
#define SHARPENING_DAMPER_BASE_A_CONTROL_POINTS  (SHARPENING_DAMPER_PARAMS_BASE_ADDR+0x0001)
#define SHARPENING_DAMPER_BASE_B                 (SHARPENING_DAMPER_PARAMS_BASE_ADDR+0x0002)
#define SHARPENING_DAMPER_BASE_B_CONTROL_POINTS  (SHARPENING_DAMPER_PARAMS_BASE_ADDR+0x0003)
#define SHARPENING_DAMPER_ADSOC_GAIN_LR          (SHARPENING_DAMPER_PARAMS_BASE_ADDR+0x0004)
#define SHARPENING_DAMPER_ADSOC_CORING_LR        (SHARPENING_DAMPER_PARAMS_BASE_ADDR+0x0005)
#define SHARPENING_DAMPER_ADSOC_GAIN_HR          (SHARPENING_DAMPER_PARAMS_BASE_ADDR+0x0006)
#define SHARPENING_DAMPER_ADSOC_CORING_HR        (SHARPENING_DAMPER_PARAMS_BASE_ADDR+0x0007)

// Noide Model Dampers
#define NOISE_MODEL_DAMPER_BASE_A                 (NOISE_MODEL_DAMPER_PARAMS_BASE_ADDR+0x0000)
#define NOISE_MODEL_DAMPER_BASE_A_CONTROL_POINTS  (NOISE_MODEL_DAMPER_PARAMS_BASE_ADDR+0x0001)
#define NOISE_MODEL_DAMPER_BASE_B                 (NOISE_MODEL_DAMPER_PARAMS_BASE_ADDR+0x0002)
#define NOISE_MODEL_DAMPER_BASE_B_CONTROL_POINTS  (NOISE_MODEL_DAMPER_PARAMS_BASE_ADDR+0x0003)
#define NOISE_MODEL_DAMPER_PIXEL_SIGMA            (NOISE_MODEL_DAMPER_PARAMS_BASE_ADDR+0x0004)

// Scorpio Dampers
#define SCORPIO_DAMPER_BASE_A                 (SCORPIO_DAMPER_PARAMS_BASE_ADDR+0x0000)
#define SCORPIO_DAMPER_BASE_A_CONTROL_POINTS  (SCORPIO_DAMPER_PARAMS_BASE_ADDR+0x0001)
#define SCORPIO_DAMPER_BASE_B                 (SCORPIO_DAMPER_PARAMS_BASE_ADDR+0x0002)
#define SCORPIO_DAMPER_BASE_B_CONTROL_POINTS  (SCORPIO_DAMPER_PARAMS_BASE_ADDR+0x0003)
#define SCORPIO_DAMPER_CORING_LEVEL           (SCORPIO_DAMPER_PARAMS_BASE_ADDR+0x0004)

// Norcos Dampers
#define NORCOS_DAMPER_FLAT_DETECT_GRADE_BASE_A                 (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0000)
#define NORCOS_DAMPER_FLAT_DETECT_GRADE_BASE_A_CONTROL_POINTS  (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0001)
#define NORCOS_DAMPER_FLAT_DETECT_GRADE_BASE_B                 (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0002)
#define NORCOS_DAMPER_FLAT_DETECT_GRADE_BASE_B_CONTROL_POINTS  (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0003)
#define NORCOS_DAMPER_FLAT_DETECT_GRADE                        (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0004)
#define NORCOS_DAMPER_FLAT_PARAM_BASE_A                        (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0010)
#define NORCOS_DAMPER_FLAT_PARAM_BASE_A_CONTROL_POINTS         (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0011)
#define NORCOS_DAMPER_FLAT_PARAM_BASE_B                        (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0012)
#define NORCOS_DAMPER_FLAT_PARAM_BASE_B_CONTROL_POINTS         (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0013)
#define NORCOS_DAMPER_FLAT_PARAM                               (NORCOS_DAMPER_PARAMS_BASE_ADDR+0x0014)

// Scythe Dampers
#define SCYTHE_DAMPER_BASE_A                    (SCYTHE_DAMPER_PARAMS_BASE_ADDR+0x0000)
#define SCYTHE_DAMPER_BASE_A_CONTROL_POINTS     (SCYTHE_DAMPER_PARAMS_BASE_ADDR+0x0001)
#define SCYTHE_DAMPER_BASE_B                    (SCYTHE_DAMPER_PARAMS_BASE_ADDR+0x0002)
#define SCYTHE_DAMPER_BASE_B_CONTROL_POINTS     (SCYTHE_DAMPER_PARAMS_BASE_ADDR+0x0003)
#define SCYTHE_DAMPER_DUSTER_SCYTHE_CONTROL_LO  (SCYTHE_DAMPER_PARAMS_BASE_ADDR+0x0004)
#define SCYTHE_DAMPER_DUSTER_SCYTHE_CONTROL_HI  (SCYTHE_DAMPER_PARAMS_BASE_ADDR+0x0005)

// SW3A AEC parameters
#define SW3A_AEC_METERING_MODE   (SW3A_AEC_PARAMS_BASE_ADDR+0x0000)
#define SW3A_AEC_CL_TARGET       (SW3A_AEC_PARAMS_BASE_ADDR+0x0004)

//Scene Detector parameters
#define SCENE_DETECTOR_THRESHOLD_LUX_AMBIENT      (SCENE_DETECTOR_PARAMS_BASE_ADDR+0x0000)
#define SCENE_DETECTOR_THRESHOLD_FOCUS_DISTANCE   (SCENE_DETECTOR_PARAMS_BASE_ADDR+0x0001)
#define SCENE_DETECTOR_THRESHOLD_TEMPORAL_WINDOW  (SCENE_DETECTOR_PARAMS_BASE_ADDR+0x0002)
#define SCENE_DETECTOR_THRESHOLD_OCCUR            (SCENE_DETECTOR_PARAMS_BASE_ADDR+0x0003)

#endif // _TUNING_PARAMS_H_
