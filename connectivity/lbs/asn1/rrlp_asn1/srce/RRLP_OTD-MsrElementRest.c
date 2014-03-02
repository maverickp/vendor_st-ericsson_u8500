/*
 * RRLP_OTD-MsrElementRest.c
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

#include <asn_internal.h>

#include "RRLP_OTD-MsrElementRest.h"

static int
memb_refFrameNumber_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 42431)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_taCorrection_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 960)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_refFrameNumber_constr_2 = {
	{ APC_CONSTRAINED,	 16,  16,  0,  42431 }	/* (0..42431) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_taCorrection_constr_6 = {
	{ APC_CONSTRAINED,	 10,  10,  0,  960 }	/* (0..960) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_RRLP_OTD_MsrElementRest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRLP_OTD_MsrElementRest, refFrameNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_refFrameNumber_constraint_1,
		&asn_PER_memb_refFrameNumber_constr_2,
		0,
		"refFrameNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRLP_OTD_MsrElementRest, referenceTimeSlot),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRLP_ModuloTimeSlot,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceTimeSlot"
		},
	{ ATF_POINTER, 1, offsetof(struct RRLP_OTD_MsrElementRest, toaMeasurementsOfRef),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRLP_TOA_MeasurementsOfRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"toaMeasurementsOfRef"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRLP_OTD_MsrElementRest, stdResolution),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRLP_StdResolution,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"stdResolution"
		},
	{ ATF_POINTER, 2, offsetof(struct RRLP_OTD_MsrElementRest, taCorrection),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_taCorrection_constraint_1,
		&asn_PER_memb_taCorrection_constr_6,
		0,
		"taCorrection"
		},
	{ ATF_POINTER, 1, offsetof(struct RRLP_OTD_MsrElementRest, otd_MsrsOfOtherSets),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRLP_SeqOfOTD_MsrsOfOtherSets,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"otd-MsrsOfOtherSets"
		},
};
static int asn_MAP_RRLP_OTD_MsrElementRest_oms_1[] = { 2, 4, 5 };
static ber_tlv_tag_t asn_DEF_RRLP_OTD_MsrElementRest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRLP_OTD_MsrElementRest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* refFrameNumber at 354 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* referenceTimeSlot at 355 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* toaMeasurementsOfRef at 356 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* stdResolution at 357 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* taCorrection at 358 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* otd-MsrsOfOtherSets at 360 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRLP_OTD_MsrElementRest_specs_1 = {
	sizeof(struct RRLP_OTD_MsrElementRest),
	offsetof(struct RRLP_OTD_MsrElementRest, _asn_ctx),
	asn_MAP_RRLP_OTD_MsrElementRest_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RRLP_OTD_MsrElementRest_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRLP_OTD_MsrElementRest = {
	"RRLP_OTD-MsrElementRest",
	"RRLP_OTD-MsrElementRest",
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
	asn_DEF_RRLP_OTD_MsrElementRest_tags_1,
	sizeof(asn_DEF_RRLP_OTD_MsrElementRest_tags_1)
		/sizeof(asn_DEF_RRLP_OTD_MsrElementRest_tags_1[0]), /* 1 */
	asn_DEF_RRLP_OTD_MsrElementRest_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRLP_OTD_MsrElementRest_tags_1)
		/sizeof(asn_DEF_RRLP_OTD_MsrElementRest_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRLP_OTD_MsrElementRest_1,
	6,	/* Elements count */
	&asn_SPC_RRLP_OTD_MsrElementRest_specs_1	/* Additional specs */
};

