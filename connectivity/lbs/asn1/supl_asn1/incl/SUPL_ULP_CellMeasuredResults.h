/*
 * SUPL_ULP_CellMeasuredResults.h
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: david.gowers@stericsson.com for ST-Ericsson.
 * License terms: Redistribution and modifications are permitted subject to BSD license. 
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of ST-Ericsson nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ST-ERICSSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "ULP_v2.0.0.asn"
 *     `asn1c -gen-PER -fcompound-names`
 */

#ifndef    _SUPL_ULP_CellMeasuredResults_H_
#define    _SUPL_ULP_CellMeasuredResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SUPL_ULP_PrimaryCPICH-Info.h"
#include "SUPL_ULP_CPICH-Ec-N0.h"
#include "SUPL_ULP_CPICH-RSCP.h"
#include "SUPL_ULP_Pathloss.h"
#include <constr_SEQUENCE.h>
#include "SUPL_ULP_CellParametersID.h"
#include "SUPL_ULP_TGSN.h"
#include "SUPL_ULP_PrimaryCCPCH-RSCP.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellMeasuredResults__modeSpecificInfo_PR {
    CellMeasuredResults__modeSpecificInfo_PR_NOTHING,    /* No components present */
    CellMeasuredResults__modeSpecificInfo_PR_fdd,
    CellMeasuredResults__modeSpecificInfo_PR_tdd
} CellMeasuredResults__modeSpecificInfo_PR;

/* Forward declarations */
struct TimeslotISCP_List;

/* SUPL_ULP_CellMeasuredResults */
typedef struct CellMeasuredResults {
    long    *cellIdentity    /* OPTIONAL */;
    struct CellMeasuredResults__modeSpecificInfo {
        CellMeasuredResults__modeSpecificInfo_PR present;
        union CellMeasuredResults__modeSpecificInfo_u {
            struct CellMeasuredResults__modeSpecificInfo__fdd {
                PrimaryCPICH_Info_t     primaryCPICH_Info;
                CPICH_Ec_N0_t    *cpich_Ec_N0    /* OPTIONAL */;
                CPICH_RSCP_t    *cpich_RSCP    /* OPTIONAL */;
                Pathloss_t    *pathloss    /* OPTIONAL */;
                
                /* Context for parsing across buffer boundaries */
                asn_struct_ctx_t _asn_ctx;
            } fdd;
            struct CellMeasuredResults__modeSpecificInfo__tdd {
                CellParametersID_t     cellParametersID;
                TGSN_t    *proposedTGSN    /* OPTIONAL */;
                PrimaryCCPCH_RSCP_t    *primaryCCPCH_RSCP    /* OPTIONAL */;
                Pathloss_t    *pathloss    /* OPTIONAL */;
                struct TimeslotISCP_List    *timeslotISCP_List    /* OPTIONAL */;
                
                /* Context for parsing across buffer boundaries */
                asn_struct_ctx_t _asn_ctx;
            } tdd;
        } choice;
        
        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } modeSpecificInfo;
    
    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} CellMeasuredResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellMeasuredResults;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SUPL_ULP_TimeslotISCP-List.h"

#endif    /* _SUPL_ULP_CellMeasuredResults_H_ */
