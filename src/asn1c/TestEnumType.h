/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TEST"
 * 	found in "/home/fu/asn1cpp/test/common/asn/definitions.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_TestEnumType_H_
#define	_TestEnumType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TestEnumType {
	TestEnumType_value0	= 0,
	TestEnumType_value1	= 1,
	TestEnumType_value2	= 2
} e_TestEnumType;

/* TestEnumType */
typedef ENUMERATED_t	 TestEnumType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestEnumType;
asn_struct_free_f TestEnumType_free;
asn_struct_print_f TestEnumType_print;
asn_constr_check_f TestEnumType_constraint;
ber_type_decoder_f TestEnumType_decode_ber;
der_type_encoder_f TestEnumType_encode_der;
xer_type_decoder_f TestEnumType_decode_xer;
xer_type_encoder_f TestEnumType_encode_xer;
per_type_decoder_f TestEnumType_decode_uper;
per_type_encoder_f TestEnumType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TestEnumType_H_ */
#include <asn_internal.h>