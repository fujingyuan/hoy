/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TEST"
 * 	found in "/home/fu/asn1cpp/test/common/asn/definitions.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_TestEnum_H_
#define	_TestEnum_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TestEnumType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TestEnum */
typedef struct TestEnum {
	TestEnumType_t	 enm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestEnum_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestEnum;

#ifdef __cplusplus
}
#endif

#endif	/* _TestEnum_H_ */
#include <asn_internal.h>
