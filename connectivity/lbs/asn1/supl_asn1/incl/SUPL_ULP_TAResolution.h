/*
 * SUPL_ULP_TAResolution.h
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

#ifndef    _SUPL_ULP_TAResolution_H_
#define    _SUPL_ULP_TAResolution_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TAResolution {
    TAResolution_res1_0chip    = 0,
    TAResolution_res0_5chip    = 1,
    TAResolution_res0_125chip    = 2
    /*
     * Enumeration is extensible
     */
} e_TAResolution;

/* SUPL_ULP_TAResolution */
typedef ENUMERATED_t     TAResolution_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAResolution;
asn_struct_free_f TAResolution_free;
asn_struct_print_f TAResolution_print;
asn_constr_check_f TAResolution_constraint;
ber_type_decoder_f TAResolution_decode_ber;
der_type_encoder_f TAResolution_encode_der;
xer_type_decoder_f TAResolution_decode_xer;
xer_type_encoder_f TAResolution_encode_xer;
per_type_decoder_f TAResolution_decode_uper;
per_type_encoder_f TAResolution_encode_uper;

#ifdef __cplusplus
}
#endif

#endif    /* _SUPL_ULP_TAResolution_H_ */
