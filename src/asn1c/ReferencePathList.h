/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "/home/fu/asn1cpp/test/common/asn/RSI.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_ReferencePathList_H_
#define	_ReferencePathList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReferencePath;

/* ReferencePathList */
typedef struct ReferencePathList {
	A_SEQUENCE_OF(struct ReferencePath) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferencePathList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReferencePathList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReferencePath.h"

#endif	/* _ReferencePathList_H_ */
#include <asn_internal.h>