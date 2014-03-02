/*
 * SUPL_ULP_UlpMessage.c
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
 * From ASN.1 module "ULP"
 *     found in "ULP_v2.0.0.asn"
 *     `asn1c -gen-PER -fcompound-names`
 */

#include <asn_internal.h>

#include "SUPL_ULP_UlpMessage.h"

static asn_per_constraints_t asn_PER_type_UlpMessage_constr_1 = {
    { APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }    /* (0..7,...) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UlpMessage_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLINIT),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLINIT,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLINIT"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLSTART),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLSTART,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLSTART"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLRESPONSE),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLRESPONSE,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLRESPONSE"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLPOSINIT),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLPOSINIT,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLPOSINIT"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLPOS),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLPOS,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLPOS"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLEND),
        (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLEND,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLEND"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLAUTHREQ),
        (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLAUTHREQ,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLAUTHREQ"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLAUTHRESP),
        (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLAUTHRESP,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLAUTHRESP"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLTRIGGEREDSTART),
        (ASN_TAG_CLASS_CONTEXT | (8 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Ver2_SUPLTRIGGEREDSTART,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLTRIGGEREDSTART"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLTRIGGEREDRESPONSE),
        (ASN_TAG_CLASS_CONTEXT | (9 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Ver2_SUPLTRIGGEREDRESPONSE,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLTRIGGEREDRESPONSE"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLTRIGGEREDSTOP),
        (ASN_TAG_CLASS_CONTEXT | (10 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Ver2_SUPLTRIGGEREDSTOP,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLTRIGGEREDSTOP"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLNOTIFY),
        (ASN_TAG_CLASS_CONTEXT | (11 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Ver2_SUPLNOTIFY,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLNOTIFY"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLNOTIFYRESPONSE),
        (ASN_TAG_CLASS_CONTEXT | (12 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Ver2_SUPLNOTIFYRESPONSE,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLNOTIFYRESPONSE"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLSETINIT),
        (ASN_TAG_CLASS_CONTEXT | (13 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Ver2_SUPLSETINIT,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLSETINIT"
        },
    { ATF_NOFLAGS, 0, offsetof(struct UlpMessage, choice.msSUPLREPORT),
        (ASN_TAG_CLASS_CONTEXT | (14 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Ver2_SUPLREPORT,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "msSUPLREPORT"
        },
};
static asn_TYPE_tag2member_t asn_MAP_UlpMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msSUPLINIT at 50 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* msSUPLSTART at 51 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msSUPLRESPONSE at 52 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* msSUPLPOSINIT at 53 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* msSUPLPOS at 54 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* msSUPLEND at 55 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* msSUPLAUTHREQ at 56 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* msSUPLAUTHRESP at 57 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* msSUPLTRIGGEREDSTART at 59 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* msSUPLTRIGGEREDRESPONSE at 60 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* msSUPLTRIGGEREDSTOP at 61 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* msSUPLNOTIFY at 62 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* msSUPLNOTIFYRESPONSE at 63 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* msSUPLSETINIT at 64 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 } /* msSUPLREPORT at 65 */
};
static asn_CHOICE_specifics_t asn_SPC_UlpMessage_specs_1 = {
    sizeof(struct UlpMessage),
    offsetof(struct UlpMessage, _asn_ctx),
    offsetof(struct UlpMessage, present),
    sizeof(((struct UlpMessage *)0)->present),
    asn_MAP_UlpMessage_tag2el_1,
    15,    /* Count of tags in the map */
    0,
    8    /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UlpMessage = {
    "UlpMessage",
    "UlpMessage",
    CHOICE_free,
    CHOICE_print,
    CHOICE_constraint,
    CHOICE_decode_ber,
    CHOICE_encode_der,
    CHOICE_decode_xer,
    CHOICE_encode_xer,
    CHOICE_decode_uper,
    CHOICE_encode_uper,
    CHOICE_outmost_tag,
    0,    /* No effective tags (pointer) */
    0,    /* No effective tags (count) */
    0,    /* No tags (pointer) */
    0,    /* No tags (count) */
    &asn_PER_type_UlpMessage_constr_1,
    asn_MBR_UlpMessage_1,
    15,    /* Elements count */
    &asn_SPC_UlpMessage_specs_1    /* Additional specs */
};

