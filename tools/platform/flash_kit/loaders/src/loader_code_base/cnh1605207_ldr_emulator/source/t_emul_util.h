#ifndef INCLUSION_GUARD_T_EMUL_UTIL_H_
#define INCLUSION_GUARD_T_EMUL_UTIL_H_
/**
 * \addtogroup ldr_emulator
 * @{
 */
#include "c_pd_nand.h"

/** Number of supported manufacturer IDs*/
#define EMUL_NUMBER_OF_MAN_ID     4
/** Number of supported Device IDs*/
#define EMUL_NUMBER_OF_DEV_ID     21
/** The maximum size of the buffer for storing data from A01 file*/
#define MAX_SIZE_OF_A01_BUFFER    1048576

/** This enumerated type contains state constants for the NAND state machine*/
typedef enum {
    SMALL_PAGE_FILE,
    LARGE_PAGE_FILE,
    MAN_ID_FILE,
    DEV_ID_FILE
} EMUL_ConfigNandState_t;

/** This structure is used for converting from Man/Dev argument to ID*/
typedef struct {
    /** Name of the argument */
    sint8 *Name_p;
    /** ID of the argument */
    uint8 ID;
} EMUL_ArgToID;

/** Array of supported Manufacturer IDs*/
static EMUL_ArgToID EMUL_MapManID[EMUL_NUMBER_OF_MAN_ID] = {
    "T_PD_NAND_CONF_MAN_ID_SAMSUNG" , T_PD_NAND_CONF_MAN_ID_SAMSUNG,
    "T_PD_NAND_CONF_MAN_ID_ST"      , T_PD_NAND_CONF_MAN_ID_ST,
    "T_PD_NAND_CONF_MAN_ID_TOSHIBA" , T_PD_NAND_CONF_MAN_ID_TOSHIBA,
    "T_PD_NAND_CONF_MAN_ID_AMD"     , T_PD_NAND_CONF_MAN_ID_AMD
};

/** Array of supported Device IDs*/
static EMUL_ArgToID EMUL_MapDevID[EMUL_NUMBER_OF_DEV_ID] = {
    "T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F5608D0D"    , T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F5608D0D,
    "T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F5608R0D"    , T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F5608R0D,
    "T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F1208B0B"    , T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F1208B0B,
    "T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F1208R0B"    , T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F1208R0B,
    "T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9K1G08R0B"    , T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9K1G08R0B,
    "T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9K1G08B0B"    , T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9K1G08B0B,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND128W3A"         , T_PD_NAND_CONF_DEV_ID_ST_NAND128W3A,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND256R3A"         , T_PD_NAND_CONF_DEV_ID_ST_NAND256R3A,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND256W3A"         , T_PD_NAND_CONF_DEV_ID_ST_NAND256W3A,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND512R3A"         , T_PD_NAND_CONF_DEV_ID_ST_NAND512R3A,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND512W3A"         , T_PD_NAND_CONF_DEV_ID_ST_NAND512W3A,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND01GR3A"         , T_PD_NAND_CONF_DEV_ID_ST_NAND01GR3A,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND01GW3A"         , T_PD_NAND_CONF_DEV_ID_ST_NAND01GW3A,
    "T_PD_NAND_CONF_DEV_ID_SAMSUNG_K5D1G12ACA"    , T_PD_NAND_CONF_DEV_ID_SAMSUNG_K5D1G12ACA,
    "T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F2G08R0A"    , T_PD_NAND_CONF_DEV_ID_SAMSUNG_K9F2G08R0A,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND01GR3B2B"       , T_PD_NAND_CONF_DEV_ID_ST_NAND01GR3B2B,
    "T_PD_NAND_CONF_DEV_ID_ST_NAND02GR3B2B"       , T_PD_NAND_CONF_DEV_ID_ST_NAND02GR3B2B,
    "T_PD_NAND_CONF_DEV_ID_AMD_NAND512MS"         , T_PD_NAND_CONF_DEV_ID_AMD_NAND512MS,
    "T_PD_NAND_CONF_DEV_ID_AMD_NAND512MW"         , T_PD_NAND_CONF_DEV_ID_AMD_NAND512MW,
    "T_PD_NAND_CONF_DEV_ID_AMD_NAND001GS"         , T_PD_NAND_CONF_DEV_ID_AMD_NAND001GS,
    "T_PD_NAND_CONF_DEV_ID_AMD_NAND001GW"         , T_PD_NAND_CONF_DEV_ID_AMD_NAND001GW
};

/*@}*/
#endif /*INCLUSION_GUARD_T_EMUL_UTIL_H_*/