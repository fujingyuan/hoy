/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DefPositionOffset"
 * 	found in "/home/fu/asn1cpp/test/common/asn/DefPositionOffset.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_Position_LL_24B_H_
#define	_Position_LL_24B_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OffsetLL-B12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Position-LL-24B */
typedef struct Position_LL_24B {
	OffsetLL_B12_t	 lon;
	OffsetLL_B12_t	 lat;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Position_LL_24B_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Position_LL_24B;

#ifdef __cplusplus
}
#endif

#endif	/* _Position_LL_24B_H_ */
#include <asn_internal.h>
