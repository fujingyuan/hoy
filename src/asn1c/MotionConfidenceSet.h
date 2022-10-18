/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DefMotion"
 * 	found in "/home/fu/asn1cpp/test/common/asn/DefMotion.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_MotionConfidenceSet_H_
#define	_MotionConfidenceSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SpeedConfidence.h"
#include "HeadingConfidence.h"
#include "SteeringWheelAngleConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MotionConfidenceSet */
typedef struct MotionConfidenceSet {
	SpeedConfidence_t	*speedCfd	/* OPTIONAL */;
	HeadingConfidence_t	*headingCfd	/* OPTIONAL */;
	SteeringWheelAngleConfidence_t	*steerCfd	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MotionConfidenceSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MotionConfidenceSet;

#ifdef __cplusplus
}
#endif

#endif	/* _MotionConfidenceSet_H_ */
#include <asn_internal.h>