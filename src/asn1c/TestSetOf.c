/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TEST"
 * 	found in "/home/fu/asn1cpp/test/common/asn/definitions.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#include "TestSetOf.h"

static asn_TYPE_member_t asn_MBR_integer_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_integer_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_integer_specs_2 = {
	sizeof(struct integer),
	offsetof(struct integer, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_integer_2 = {
	"integer",
	"integer",
	SET_OF_free,
	SET_OF_print,
	SET_OF_constraint,
	SET_OF_decode_ber,
	SET_OF_encode_der,
	SET_OF_decode_xer,
	SET_OF_encode_xer,
	SET_OF_decode_uper,
	SET_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_integer_tags_2,
	sizeof(asn_DEF_integer_tags_2)
		/sizeof(asn_DEF_integer_tags_2[0]) - 1, /* 1 */
	asn_DEF_integer_tags_2,	/* Same as above */
	sizeof(asn_DEF_integer_tags_2)
		/sizeof(asn_DEF_integer_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_integer_2,
	1,	/* Single element */
	&asn_SPC_integer_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_string_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (19 << 2)),
		0,
		&asn_DEF_PrintableString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_string_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_string_specs_4 = {
	sizeof(struct string),
	offsetof(struct string, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_string_4 = {
	"string",
	"string",
	SET_OF_free,
	SET_OF_print,
	SET_OF_constraint,
	SET_OF_decode_ber,
	SET_OF_encode_der,
	SET_OF_decode_xer,
	SET_OF_encode_xer,
	SET_OF_decode_uper,
	SET_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_string_tags_4,
	sizeof(asn_DEF_string_tags_4)
		/sizeof(asn_DEF_string_tags_4[0]) - 1, /* 1 */
	asn_DEF_string_tags_4,	/* Same as above */
	sizeof(asn_DEF_string_tags_4)
		/sizeof(asn_DEF_string_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_string_4,
	1,	/* Single element */
	&asn_SPC_string_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_boolean_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_boolean_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_boolean_specs_6 = {
	sizeof(struct boolean),
	offsetof(struct boolean, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_boolean_6 = {
	"boolean",
	"boolean",
	SET_OF_free,
	SET_OF_print,
	SET_OF_constraint,
	SET_OF_decode_ber,
	SET_OF_encode_der,
	SET_OF_decode_xer,
	SET_OF_encode_xer,
	SET_OF_decode_uper,
	SET_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_boolean_tags_6,
	sizeof(asn_DEF_boolean_tags_6)
		/sizeof(asn_DEF_boolean_tags_6[0]) - 1, /* 1 */
	asn_DEF_boolean_tags_6,	/* Same as above */
	sizeof(asn_DEF_boolean_tags_6)
		/sizeof(asn_DEF_boolean_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_boolean_6,
	1,	/* Single element */
	&asn_SPC_boolean_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nested_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_nested_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nested_specs_8 = {
	sizeof(struct nested),
	offsetof(struct nested, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nested_8 = {
	"nested",
	"nested",
	SET_OF_free,
	SET_OF_print,
	SET_OF_constraint,
	SET_OF_decode_ber,
	SET_OF_encode_der,
	SET_OF_decode_xer,
	SET_OF_encode_xer,
	SET_OF_decode_uper,
	SET_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nested_tags_8,
	sizeof(asn_DEF_nested_tags_8)
		/sizeof(asn_DEF_nested_tags_8[0]) - 1, /* 1 */
	asn_DEF_nested_tags_8,	/* Same as above */
	sizeof(asn_DEF_nested_tags_8)
		/sizeof(asn_DEF_nested_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nested_8,
	1,	/* Single element */
	&asn_SPC_nested_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TestSetOf_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TestSetOf, integer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_integer_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TestSetOf, string),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_string_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"string"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TestSetOf, boolean),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_boolean_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"boolean"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TestSetOf, nested),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_nested_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nested"
		},
};
static const ber_tlv_tag_t asn_DEF_TestSetOf_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TestSetOf_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* integer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* string */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* boolean */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nested */
};
static asn_SEQUENCE_specifics_t asn_SPC_TestSetOf_specs_1 = {
	sizeof(struct TestSetOf),
	offsetof(struct TestSetOf, _asn_ctx),
	asn_MAP_TestSetOf_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TestSetOf = {
	"TestSetOf",
	"TestSetOf",
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
	asn_DEF_TestSetOf_tags_1,
	sizeof(asn_DEF_TestSetOf_tags_1)
		/sizeof(asn_DEF_TestSetOf_tags_1[0]), /* 1 */
	asn_DEF_TestSetOf_tags_1,	/* Same as above */
	sizeof(asn_DEF_TestSetOf_tags_1)
		/sizeof(asn_DEF_TestSetOf_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TestSetOf_1,
	4,	/* Elements count */
	&asn_SPC_TestSetOf_specs_1	/* Additional specs */
};

