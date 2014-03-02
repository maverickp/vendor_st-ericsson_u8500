/*
 * RRLP_MsrPosition-Req.h
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: sunilsatish.rao@stericsson.com for ST-Ericsson.
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
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP_Components"
 * 	found in "LPP_RRLP_Rel_10.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRLP_MsrPosition_Req_H_
#define	_RRLP_MsrPosition_Req_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRLP_PositionInstruct.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRLP_ReferenceAssistData;
struct RRLP_MsrAssistData;
struct RRLP_SystemInfoAssistData;
struct RRLP_GPS_AssistData;
struct RRLP_ExtensionContainer;
struct RRLP_Rel98_MsrPosition_Req_Extension;
struct RRLP_Rel5_MsrPosition_Req_Extension;
struct RRLP_Rel7_MsrPosition_Req_Extension;

/* RRLP_MsrPosition-Req */
typedef struct RRLP_MsrPosition_Req {
	RRLP_PositionInstruct_t	 positionInstruct;
	struct RRLP_ReferenceAssistData	*referenceAssistData	/* OPTIONAL */;
	struct RRLP_MsrAssistData	*msrAssistData	/* OPTIONAL */;
	struct RRLP_SystemInfoAssistData	*systemInfoAssistData	/* OPTIONAL */;
	struct RRLP_GPS_AssistData	*gps_AssistData	/* OPTIONAL */;
	struct RRLP_ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRLP_Rel98_MsrPosition_Req_Extension	*rel98_MsrPosition_Req_extension	/* OPTIONAL */;
	struct RRLP_Rel5_MsrPosition_Req_Extension	*rel5_MsrPosition_Req_extension	/* OPTIONAL */;
	struct RRLP_Rel7_MsrPosition_Req_Extension	*rel7_MsrPosition_Req_extension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRLP_MsrPosition_Req_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRLP_MsrPosition_Req;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRLP_ReferenceAssistData.h"
#include "RRLP_MsrAssistData.h"
#include "RRLP_SystemInfoAssistData.h"
#include "RRLP_GPS-AssistData.h"
#include "RRLP_ExtensionContainer.h"
#include "RRLP_Rel98-MsrPosition-Req-Extension.h"
#include "RRLP_Rel5-MsrPosition-Req-Extension.h"
#include "RRLP_Rel7-MsrPosition-Req-Extension.h"

#endif	/* _RRLP_MsrPosition_Req_H_ */
