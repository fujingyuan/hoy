/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SPATIntersectionState"
 * 	found in "/home/fu/asn1cpp/test/common/asn/SPATIntersectionState.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_PhaseList_H_
#define	_PhaseList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Phase;

/* PhaseList */
typedef struct PhaseList {
	A_SEQUENCE_OF(struct Phase) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhaseList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhaseList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Phase.h"

#endif	/* _PhaseList_H_ */
#include <asn_internal.h>
