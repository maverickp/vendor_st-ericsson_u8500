/*
 * SUPL_ULP_Ver2-SUPL-INIT-extension.c
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

#include "SUPL_ULP_Ver2-SUPL-INIT-extension.h"

static int
memb_minimumMajorVersion_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    long value;
    
    if(!sptr) {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: value not given (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
    
    value = *(const long *)sptr;
    
    if((value >= 0 && value <= 255)) {
        /* Constraint check succeeded */
        return 0;
    } else {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: constraint failed (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
}

static asn_per_constraints_t asn_PER_memb_minimumMajorVersion_constr_9 = {
    { APC_CONSTRAINED,     8,  8,  0,  255 }    /* (0..255) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Ver2_SUPL_INIT_extension_1[] = {
    { ATF_POINTER, 8, offsetof(struct Ver2_SUPL_INIT_extension, notificationMode),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NotificationMode,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "notificationMode"
        },
    { ATF_POINTER, 7, offsetof(struct Ver2_SUPL_INIT_extension, supportedNetworkInformation),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SupportedNetworkInformation,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "supportedNetworkInformation"
        },
    { ATF_POINTER, 6, offsetof(struct Ver2_SUPL_INIT_extension, triggerType),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_TriggerType,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "triggerType"
        },
    { ATF_POINTER, 5, offsetof(struct Ver2_SUPL_INIT_extension, e_SLPAddress),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
        +1,    /* EXPLICIT tag at current level */
        &asn_DEF_SLPAddress,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "e-SLPAddress"
        },
    { ATF_POINTER, 4, offsetof(struct Ver2_SUPL_INIT_extension, historicReporting),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_HistoricReporting,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "historicReporting"
        },
    { ATF_POINTER, 3, offsetof(struct Ver2_SUPL_INIT_extension, protectionLevel),
        (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_ProtectionLevel,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "protectionLevel"
        },
    { ATF_POINTER, 2, offsetof(struct Ver2_SUPL_INIT_extension, gnssPosTechnology),
        (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_GNSSPosTechnology,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "gnssPosTechnology"
        },
    { ATF_POINTER, 1, offsetof(struct Ver2_SUPL_INIT_extension, minimumMajorVersion),
        (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger,
        memb_minimumMajorVersion_constraint_1,
        &asn_PER_memb_minimumMajorVersion_constr_9,
        0,
        "minimumMajorVersion"
        },
};
static int asn_MAP_Ver2_SUPL_INIT_extension_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static ber_tlv_tag_t asn_DEF_Ver2_SUPL_INIT_extension_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Ver2_SUPL_INIT_extension_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notificationMode at 742 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedNetworkInformation at 743 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* triggerType at 744 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-SLPAddress at 745 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* historicReporting at 746 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* protectionLevel at 747 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* gnssPosTechnology at 748 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* minimumMajorVersion at 749 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Ver2_SUPL_INIT_extension_specs_1 = {
    sizeof(struct Ver2_SUPL_INIT_extension),
    offsetof(struct Ver2_SUPL_INIT_extension, _asn_ctx),
    asn_MAP_Ver2_SUPL_INIT_extension_tag2el_1,
    8,    /* Count of tags in the map */
    asn_MAP_Ver2_SUPL_INIT_extension_oms_1,    /* Optional members */
    8, 0,    /* Root/Additions */
    7,    /* Start extensions */
    9    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Ver2_SUPL_INIT_extension = {
    "Ver2-SUPL-INIT-extension",
    "Ver2-SUPL-INIT-extension",
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
    asn_DEF_Ver2_SUPL_INIT_extension_tags_1,
    sizeof(asn_DEF_Ver2_SUPL_INIT_extension_tags_1)
        /sizeof(asn_DEF_Ver2_SUPL_INIT_extension_tags_1[0]), /* 1 */
    asn_DEF_Ver2_SUPL_INIT_extension_tags_1,    /* Same as above */
    sizeof(asn_DEF_Ver2_SUPL_INIT_extension_tags_1)
        /sizeof(asn_DEF_Ver2_SUPL_INIT_extension_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_Ver2_SUPL_INIT_extension_1,
    8,    /* Elements count */
    &asn_SPC_Ver2_SUPL_INIT_extension_specs_1    /* Additional specs */
};

