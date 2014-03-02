/*
 * LPP_LocationInformationType.h
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
 * From ASN.1 module "LPP_PDU-Definitions"
 * 	found in "LPP_RRLP_Rel_10.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LPP_LocationInformationType_H_
#define	_LPP_LocationInformationType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_LocationInformationType {
	
	LPP_LocationInformationType_locationEstimateRequired	= 0,
	LPP_LocationInformationType_locationMeasurementsRequired	= 1,
	LPP_LocationInformationType_locationEstimatePreferred	= 2,
	LPP_LocationInformationType_locationMeasurementsPreferred	= 3
	/*
	 * Enumeration is extensible
	 */
} e_LPP_LocationInformationType;

/* LPP_LocationInformationType */
typedef ENUMERATED_t	 LPP_LocationInformationType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_LocationInformationType;
asn_struct_free_f LPP_LocationInformationType_free;
asn_struct_print_f LPP_LocationInformationType_print;
asn_constr_check_f LPP_LocationInformationType_constraint;
ber_type_decoder_f LPP_LocationInformationType_decode_ber;
der_type_encoder_f LPP_LocationInformationType_encode_der;
xer_type_decoder_f LPP_LocationInformationType_decode_xer;
xer_type_encoder_f LPP_LocationInformationType_encode_xer;
per_type_decoder_f LPP_LocationInformationType_decode_uper;
per_type_encoder_f LPP_LocationInformationType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_LocationInformationType_H_ */
