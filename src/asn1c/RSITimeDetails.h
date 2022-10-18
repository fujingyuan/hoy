/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "/home/fu/asn1cpp/test/common/asn/RSI.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_RSITimeDetails_H_
#define	_RSITimeDetails_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MinuteOfTheYear.h"
#include "TimeConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RSITimeDetails */
typedef struct RSITimeDetails {
	MinuteOfTheYear_t	*startTime	/* OPTIONAL */;
	MinuteOfTheYear_t	*endTime	/* OPTIONAL */;
	TimeConfidence_t	*endTimeConfidence	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RSITimeDetails_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RSITimeDetails;

#ifdef __cplusplus
}
#endif

#endif	/* _RSITimeDetails_H_ */
#include <asn_internal.h>