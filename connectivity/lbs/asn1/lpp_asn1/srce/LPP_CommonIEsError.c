/*
 * LPP_CommonIEsError.c
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

#include "LPP_CommonIEsError.h"

static int
errorCause_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
errorCause_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

static void
errorCause_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	errorCause_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
errorCause_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	errorCause_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
errorCause_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	errorCause_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
errorCause_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	errorCause_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
errorCause_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	errorCause_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
errorCause_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	errorCause_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
errorCause_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	errorCause_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
errorCause_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	errorCause_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_INTEGER_enum_map_t asn_MAP_errorCause_value2enum_2[] = {
	{ 0,	9,	"undefined" },
	{ 1,	21,	"lppMessageHeaderError" },
	{ 2,	19,	"lppMessageBodyError" },
	{ 3,	9,	"epduError" },
	{ 4,	18,	"incorrectDataValue" }
	/* This list is extensible */
};
static unsigned int asn_MAP_errorCause_enum2value_2[] = {
	3,	/* epduError(3) */
	4,	/* incorrectDataValue(4) */
	2,	/* lppMessageBodyError(2) */
	1,	/* lppMessageHeaderError(1) */
	0	/* undefined(0) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_errorCause_specs_2 = {
	asn_MAP_errorCause_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_errorCause_enum2value_2,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1	/* Strict enumeration */
};
static ber_tlv_tag_t asn_DEF_errorCause_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static asn_per_constraints_t asn_PER_errorCause_constr_2 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_errorCause_2 = {
	"errorCause",
	"errorCause",
	errorCause_2_free,
	errorCause_2_print,
	errorCause_2_constraint,
	errorCause_2_decode_ber,
	errorCause_2_encode_der,
	errorCause_2_decode_xer,
	errorCause_2_encode_xer,
	errorCause_2_decode_uper,
	errorCause_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_errorCause_tags_2,
	sizeof(asn_DEF_errorCause_tags_2)
		/sizeof(asn_DEF_errorCause_tags_2[0]) - 1, /* 1 */
	asn_DEF_errorCause_tags_2,	/* Same as above */
	sizeof(asn_DEF_errorCause_tags_2)
		/sizeof(asn_DEF_errorCause_tags_2[0]), /* 2 */
	&asn_PER_errorCause_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_errorCause_specs_2	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_errorCause_constr_2 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_LPP_CommonIEsError_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_CommonIEsError, errorCause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_errorCause_2,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_memb_errorCause_constr_2,
		0,
		"errorCause"
		},
};
static ber_tlv_tag_t asn_DEF_LPP_CommonIEsError_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPP_CommonIEsError_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* errorCause at 2863 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_CommonIEsError_specs_1 = {
	sizeof(struct LPP_CommonIEsError),
	offsetof(struct LPP_CommonIEsError, _asn_ctx),
	asn_MAP_LPP_CommonIEsError_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPP_CommonIEsError = {
	"LPP_CommonIEsError",
	"LPP_CommonIEsError",
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
	asn_DEF_LPP_CommonIEsError_tags_1,
	sizeof(asn_DEF_LPP_CommonIEsError_tags_1)
		/sizeof(asn_DEF_LPP_CommonIEsError_tags_1[0]), /* 1 */
	asn_DEF_LPP_CommonIEsError_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_CommonIEsError_tags_1)
		/sizeof(asn_DEF_LPP_CommonIEsError_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPP_CommonIEsError_1,
	1,	/* Elements count */
	&asn_SPC_LPP_CommonIEsError_specs_1	/* Additional specs */
};

