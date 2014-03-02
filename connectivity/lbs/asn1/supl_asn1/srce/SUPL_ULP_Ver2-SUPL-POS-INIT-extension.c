/*
 * SUPL_ULP_Ver2-SUPL-POS-INIT-extension.c
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
 * From ASN.1 module "ULP-Version-2-message-extensions"
 *     found in "ULP_v2.0.0.asn"
 *     `asn1c -gen-PER -fcompound-names`
 */

#include <asn_internal.h>

#include "SUPL_ULP_Ver2-SUPL-POS-INIT-extension.h"

static asn_TYPE_member_t asn_MBR_Ver2_SUPL_POS_INIT_extension_1[] = {
    { ATF_POINTER, 3, offsetof(struct Ver2_SUPL_POS_INIT_extension, multipleLocationIds),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_MultipleLocationIds,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "multipleLocationIds"
        },
    { ATF_POINTER, 2, offsetof(struct Ver2_SUPL_POS_INIT_extension, utran_GPSReferenceTimeResult),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_UTRAN_GPSReferenceTimeResult,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "utran-GPSReferenceTimeResult"
        },
    { ATF_POINTER, 1, offsetof(struct Ver2_SUPL_POS_INIT_extension, utran_GANSSReferenceTimeResult),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_UTRAN_GANSSReferenceTimeResult,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "utran-GANSSReferenceTimeResult"
        },
};
static int asn_MAP_Ver2_SUPL_POS_INIT_extension_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_Ver2_SUPL_POS_INIT_extension_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Ver2_SUPL_POS_INIT_extension_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* multipleLocationIds at 802 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utran-GPSReferenceTimeResult at 803 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* utran-GANSSReferenceTimeResult at 804 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Ver2_SUPL_POS_INIT_extension_specs_1 = {
    sizeof(struct Ver2_SUPL_POS_INIT_extension),
    offsetof(struct Ver2_SUPL_POS_INIT_extension, _asn_ctx),
    asn_MAP_Ver2_SUPL_POS_INIT_extension_tag2el_1,
    3,    /* Count of tags in the map */
    asn_MAP_Ver2_SUPL_POS_INIT_extension_oms_1,    /* Optional members */
    3, 0,    /* Root/Additions */
    2,    /* Start extensions */
    4    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Ver2_SUPL_POS_INIT_extension = {
    "Ver2-SUPL-POS-INIT-extension",
    "Ver2-SUPL-POS-INIT-extension",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0,    /* Use generic outmost tag fetcher */
    asn_DEF_Ver2_SUPL_POS_INIT_extension_tags_1,
    sizeof(asn_DEF_Ver2_SUPL_POS_INIT_extension_tags_1)
        /sizeof(asn_DEF_Ver2_SUPL_POS_INIT_extension_tags_1[0]), /* 1 */
    asn_DEF_Ver2_SUPL_POS_INIT_extension_tags_1,    /* Same as above */
    sizeof(asn_DEF_Ver2_SUPL_POS_INIT_extension_tags_1)
        /sizeof(asn_DEF_Ver2_SUPL_POS_INIT_extension_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_Ver2_SUPL_POS_INIT_extension_1,
    3,    /* Elements count */
    &asn_SPC_Ver2_SUPL_POS_INIT_extension_specs_1    /* Additional specs */
};

