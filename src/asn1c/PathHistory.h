/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VehSafetyExt"
 * 	found in "/home/fu/asn1cpp/test/common/asn/VehSafetyExt.asn"
 * 	`asn1c -fwide-types -gen-PER`
 */

#ifndef	_PathHistory_H_
#define	_PathHistory_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNSSstatus.h"
#include "PathHistoryPointList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FullPositionVector;

/* PathHistory */
typedef struct PathHistory {
	struct FullPositionVector	*initialPosition	/* OPTIONAL */;
	GNSSstatus_t	*currGNSSstatus	/* OPTIONAL */;
	PathHistoryPointList_t	 crumbData;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PathHistory_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PathHistory;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FullPositionVector.h"

#endif	/* _PathHistory_H_ */
#include <asn_internal.h>
