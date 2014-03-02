/*
 * LPP_ECID-ProvideLocationInformation.c
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

#include <asn_internal.h>

#include "LPP_ECID-ProvideLocationInformation.h"

static asn_TYPE_member_t asn_MBR_LPP_ECID_ProvideLocationInformation_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LPP_ECID_ProvideLocationInformation, ecid_SignalMeasurementInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_ECID_SignalMeasurementInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ecid-SignalMeasurementInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_ECID_ProvideLocationInformation, ecid_Error),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_ECID_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ecid-Error"
		},
};
static int asn_MAP_LPP_ECID_ProvideLocationInformation_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_LPP_ECID_ProvideLocationInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPP_ECID_ProvideLocationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ecid-SignalMeasurementInformation at 4147 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ecid-Error at 4148 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ECID_ProvideLocationInformation_specs_1 = {
	sizeof(struct LPP_ECID_ProvideLocationInformation),
	offsetof(struct LPP_ECID_ProvideLocationInformation, _asn_ctx),
	asn_MAP_LPP_ECID_ProvideLocationInformation_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_ECID_ProvideLocationInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPP_ECID_ProvideLocationInformation = {
	"LPP_ECID-ProvideLocationInformation",
	"LPP_ECID-ProvideLocationInformation",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LPP_ECID_ProvideLocationInformation_tags_1,
	sizeof(asn_DEF_LPP_ECID_ProvideLocationInformation_tags_1)
		/sizeof(asn_DEF_LPP_ECID_ProvideLocationInformation_tags_1[0]), /* 1 */
	asn_DEF_LPP_ECID_ProvideLocationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_ECID_ProvideLocationInformation_tags_1)
		/sizeof(asn_DEF_LPP_ECID_ProvideLocationInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPP_ECID_ProvideLocationInformation_1,
	2,	/* Elements count */
	&asn_SPC_LPP_ECID_ProvideLocationInformation_specs_1	/* Additional specs */
};

