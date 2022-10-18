/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "BSM"
 * 	found in "/home/fu/asn1cpp/test/common/asn/BSM.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#include "BasicSafetyMessage.h"

static int
memb_id_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_id_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_BasicSafetyMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCount,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msgCnt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_id_constraint_1,
		&asn_PER_memb_id_constr_3,
		0,
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, secMark),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secMark"
		},
	{ ATF_POINTER, 1, offsetof(struct BasicSafetyMessage, timeConfidence),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeConfidence,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeConfidence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, pos),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pos"
		},
	{ ATF_POINTER, 2, offsetof(struct BasicSafetyMessage, posAccuracy),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionalAccuracy,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"posAccuracy"
		},
	{ ATF_POINTER, 1, offsetof(struct BasicSafetyMessage, posConfidence),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionConfidenceSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"posConfidence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, transmission),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransmissionState,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transmission"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, speed),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Speed,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, heading),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Heading,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"heading"
		},
	{ ATF_POINTER, 2, offsetof(struct BasicSafetyMessage, angle),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringWheelAngle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"angle"
		},
	{ ATF_POINTER, 1, offsetof(struct BasicSafetyMessage, motionCfd),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MotionConfidenceSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"motionCfd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, accelSet),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccelerationSet4Way,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"accelSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, brakes),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BrakeSystemStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"brakes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, size),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleSize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"size"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, vehicleClass),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleClassification,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vehicleClass"
		},
	{ ATF_POINTER, 2, offsetof(struct BasicSafetyMessage, safetyExt),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleSafetyExtensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"safetyExt"
		},
	{ ATF_POINTER, 1, offsetof(struct BasicSafetyMessage, emergencyExt),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleEmergencyExtensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"emergencyExt"
		},
};
static const int asn_MAP_BasicSafetyMessage_oms_1[] = { 3, 5, 6, 10, 11, 16, 17 };
static const ber_tlv_tag_t asn_DEF_BasicSafetyMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BasicSafetyMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* secMark */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeConfidence */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pos */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* posAccuracy */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* posConfidence */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* transmission */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* speed */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* angle */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* motionCfd */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* accelSet */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* brakes */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* size */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* vehicleClass */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* safetyExt */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 } /* emergencyExt */
};
static asn_SEQUENCE_specifics_t asn_SPC_BasicSafetyMessage_specs_1 = {
	sizeof(struct BasicSafetyMessage),
	offsetof(struct BasicSafetyMessage, _asn_ctx),
	asn_MAP_BasicSafetyMessage_tag2el_1,
	18,	/* Count of tags in the map */
	asn_MAP_BasicSafetyMessage_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	17,	/* Start extensions */
	19	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BasicSafetyMessage = {
	"BasicSafetyMessage",
	"BasicSafetyMessage",
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
	asn_DEF_BasicSafetyMessage_tags_1,
	sizeof(asn_DEF_BasicSafetyMessage_tags_1)
		/sizeof(asn_DEF_BasicSafetyMessage_tags_1[0]), /* 1 */
	asn_DEF_BasicSafetyMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_BasicSafetyMessage_tags_1)
		/sizeof(asn_DEF_BasicSafetyMessage_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_BasicSafetyMessage_1,
	18,	/* Elements count */
	&asn_SPC_BasicSafetyMessage_specs_1	/* Additional specs */
};

