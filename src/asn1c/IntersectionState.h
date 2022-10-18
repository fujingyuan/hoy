/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SPATIntersectionState"
 * 	found in "/home/fu/asn1cpp/test/common/asn/SPATIntersectionState.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_IntersectionState_H_
#define	_IntersectionState_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NodeReferenceID.h"
#include "IntersectionStatusObject.h"
#include "MinuteOfTheYear.h"
#include "DSecond.h"
#include "TimeConfidence.h"
#include "PhaseList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntersectionState */
typedef struct IntersectionState {
	NodeReferenceID_t	 intersectionId;
	IntersectionStatusObject_t	 status;
	MinuteOfTheYear_t	*moy	/* OPTIONAL */;
	DSecond_t	*timeStamp	/* OPTIONAL */;
	TimeConfidence_t	*timeConfidence	/* OPTIONAL */;
	PhaseList_t	 phases;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntersectionState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntersectionState;

#ifdef __cplusplus
}
#endif

#endif	/* _IntersectionState_H_ */
#include <asn_internal.h>
