/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MsgFrame"
 * 	found in "/home/fu/asn1cpp/test/common/asn/MsgFrame.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#include "MessageFrame.h"

static asn_per_constraints_t asn_PER_type_MessageFrame_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MessageFrame_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame, choice.bsmFrame),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BasicSafetyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bsmFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame, choice.mapFrame),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MapData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mapFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame, choice.rsmFrame),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadsideSafetyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsmFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame, choice.spatFrame),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPAT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spatFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame, choice.rsiFrame),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadSideInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsiFrame"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MessageFrame_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bsmFrame */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mapFrame */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsmFrame */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* spatFrame */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* rsiFrame */
};
static asn_CHOICE_specifics_t asn_SPC_MessageFrame_specs_1 = {
	sizeof(struct MessageFrame),
	offsetof(struct MessageFrame, _asn_ctx),
	offsetof(struct MessageFrame, present),
	sizeof(((struct MessageFrame *)0)->present),
	asn_MAP_MessageFrame_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	5	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MessageFrame = {
	"MessageFrame",
	"MessageFrame",
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
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_MessageFrame_constr_1,
	asn_MBR_MessageFrame_1,
	5,	/* Elements count */
	&asn_SPC_MessageFrame_specs_1	/* Additional specs */
};

