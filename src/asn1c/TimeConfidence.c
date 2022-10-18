/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DefTime"
 * 	found in "/home/fu/asn1cpp/test/common/asn/DefTime.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#include "TimeConfidence.h"

int
TimeConfidence_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
TimeConfidence_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
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

void
TimeConfidence_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	TimeConfidence_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
TimeConfidence_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	TimeConfidence_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
TimeConfidence_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	TimeConfidence_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
TimeConfidence_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimeConfidence_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
TimeConfidence_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	TimeConfidence_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
TimeConfidence_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimeConfidence_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
TimeConfidence_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	TimeConfidence_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
TimeConfidence_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	TimeConfidence_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_TimeConfidence_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TimeConfidence_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	12,	"time-100-000" },
	{ 2,	12,	"time-050-000" },
	{ 3,	12,	"time-020-000" },
	{ 4,	12,	"time-010-000" },
	{ 5,	12,	"time-002-000" },
	{ 6,	12,	"time-001-000" },
	{ 7,	12,	"time-000-500" },
	{ 8,	12,	"time-000-200" },
	{ 9,	12,	"time-000-100" },
	{ 10,	12,	"time-000-050" },
	{ 11,	12,	"time-000-020" },
	{ 12,	12,	"time-000-010" },
	{ 13,	12,	"time-000-005" },
	{ 14,	12,	"time-000-002" },
	{ 15,	12,	"time-000-001" },
	{ 16,	14,	"time-000-000-5" },
	{ 17,	14,	"time-000-000-2" },
	{ 18,	14,	"time-000-000-1" },
	{ 19,	15,	"time-000-000-05" },
	{ 20,	15,	"time-000-000-02" },
	{ 21,	15,	"time-000-000-01" },
	{ 22,	16,	"time-000-000-005" },
	{ 23,	16,	"time-000-000-002" },
	{ 24,	16,	"time-000-000-001" },
	{ 25,	18,	"time-000-000-000-5" },
	{ 26,	18,	"time-000-000-000-2" },
	{ 27,	18,	"time-000-000-000-1" },
	{ 28,	19,	"time-000-000-000-05" },
	{ 29,	19,	"time-000-000-000-02" },
	{ 30,	19,	"time-000-000-000-01" },
	{ 31,	20,	"time-000-000-000-005" },
	{ 32,	20,	"time-000-000-000-002" },
	{ 33,	20,	"time-000-000-000-001" },
	{ 34,	22,	"time-000-000-000-000-5" },
	{ 35,	22,	"time-000-000-000-000-2" },
	{ 36,	22,	"time-000-000-000-000-1" },
	{ 37,	23,	"time-000-000-000-000-05" },
	{ 38,	23,	"time-000-000-000-000-02" },
	{ 39,	23,	"time-000-000-000-000-01" }
};
static const unsigned int asn_MAP_TimeConfidence_enum2value_1[] = {
	39,	/* time-000-000-000-000-01(39) */
	38,	/* time-000-000-000-000-02(38) */
	37,	/* time-000-000-000-000-05(37) */
	36,	/* time-000-000-000-000-1(36) */
	35,	/* time-000-000-000-000-2(35) */
	34,	/* time-000-000-000-000-5(34) */
	33,	/* time-000-000-000-001(33) */
	32,	/* time-000-000-000-002(32) */
	31,	/* time-000-000-000-005(31) */
	30,	/* time-000-000-000-01(30) */
	29,	/* time-000-000-000-02(29) */
	28,	/* time-000-000-000-05(28) */
	27,	/* time-000-000-000-1(27) */
	26,	/* time-000-000-000-2(26) */
	25,	/* time-000-000-000-5(25) */
	24,	/* time-000-000-001(24) */
	23,	/* time-000-000-002(23) */
	22,	/* time-000-000-005(22) */
	21,	/* time-000-000-01(21) */
	20,	/* time-000-000-02(20) */
	19,	/* time-000-000-05(19) */
	18,	/* time-000-000-1(18) */
	17,	/* time-000-000-2(17) */
	16,	/* time-000-000-5(16) */
	15,	/* time-000-001(15) */
	14,	/* time-000-002(14) */
	13,	/* time-000-005(13) */
	12,	/* time-000-010(12) */
	11,	/* time-000-020(11) */
	10,	/* time-000-050(10) */
	9,	/* time-000-100(9) */
	8,	/* time-000-200(8) */
	7,	/* time-000-500(7) */
	6,	/* time-001-000(6) */
	5,	/* time-002-000(5) */
	4,	/* time-010-000(4) */
	3,	/* time-020-000(3) */
	2,	/* time-050-000(2) */
	1,	/* time-100-000(1) */
	0	/* unavailable(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_TimeConfidence_specs_1 = {
	asn_MAP_TimeConfidence_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TimeConfidence_enum2value_1,	/* N => "tag"; sorted by N */
	40,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TimeConfidence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimeConfidence = {
	"TimeConfidence",
	"TimeConfidence",
	TimeConfidence_free,
	TimeConfidence_print,
	TimeConfidence_constraint,
	TimeConfidence_decode_ber,
	TimeConfidence_encode_der,
	TimeConfidence_decode_xer,
	TimeConfidence_encode_xer,
	TimeConfidence_decode_uper,
	TimeConfidence_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TimeConfidence_tags_1,
	sizeof(asn_DEF_TimeConfidence_tags_1)
		/sizeof(asn_DEF_TimeConfidence_tags_1[0]), /* 1 */
	asn_DEF_TimeConfidence_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeConfidence_tags_1)
		/sizeof(asn_DEF_TimeConfidence_tags_1[0]), /* 1 */
	&asn_PER_type_TimeConfidence_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TimeConfidence_specs_1	/* Additional specs */
};

