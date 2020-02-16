/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m3ap/messages/asn1/r15/m3ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M3AP_r15`
 */

#ifndef	_M3AP_AllocationAndRetentionPriority_H_
#define	_M3AP_AllocationAndRetentionPriority_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_PriorityLevel.h"
#include "M3AP_Pre-emptionCapability.h"
#include "M3AP_Pre-emptionVulnerability.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M3AP_ProtocolExtensionContainer;

/* M3AP_AllocationAndRetentionPriority */
typedef struct M3AP_AllocationAndRetentionPriority {
	M3AP_PriorityLevel_t	 priorityLevel;
	M3AP_Pre_emptionCapability_t	 pre_emptionCapability;
	M3AP_Pre_emptionVulnerability_t	 pre_emptionVulnerability;
	struct M3AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_AllocationAndRetentionPriority_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_AllocationAndRetentionPriority;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_AllocationAndRetentionPriority_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_AllocationAndRetentionPriority_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_AllocationAndRetentionPriority_H_ */
#include <asn_internal.h>
