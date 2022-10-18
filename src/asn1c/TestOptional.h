/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TEST"
 * 	found in "/home/fu/asn1cpp/test/common/asn/definitions.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_TestOptional_H_
#define	_TestOptional_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include <PrintableString.h>
#include <BOOLEAN.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TestInteger;

/* TestOptional */
typedef struct TestOptional {
	INTEGER_t	*integer	/* OPTIONAL */;
	PrintableString_t	*string	/* OPTIONAL */;
	BOOLEAN_t	*boolean	/* OPTIONAL */;
	struct sequence {
		A_SEQUENCE_OF(INTEGER_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sequence;
	struct nested {
		A_SEQUENCE_OF(struct TestInteger) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nested;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestOptional_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestOptional;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TestInteger.h"

#endif	/* _TestOptional_H_ */
#include <asn_internal.h>
