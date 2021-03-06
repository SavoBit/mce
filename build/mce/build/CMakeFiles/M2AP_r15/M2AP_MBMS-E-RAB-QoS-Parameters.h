/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/dbeken/Development/oai/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#ifndef	_M2AP_MBMS_E_RAB_QoS_Parameters_H_
#define	_M2AP_MBMS_E_RAB_QoS_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M2AP_QCI.h"
#include "M2AP_AllocationAndRetentionPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M2AP_GBR_QosInformation;
struct M2AP_ProtocolExtensionContainer;

/* M2AP_MBMS-E-RAB-QoS-Parameters */
typedef struct M2AP_MBMS_E_RAB_QoS_Parameters {
	M2AP_QCI_t	 qCI;
	struct M2AP_GBR_QosInformation	*gbrQosInformation;	/* OPTIONAL */
	M2AP_AllocationAndRetentionPriority_t	 allocationAndRetentionPriority;
	struct M2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_MBMS_E_RAB_QoS_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_MBMS_E_RAB_QoS_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_M2AP_MBMS_E_RAB_QoS_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_MBMS_E_RAB_QoS_Parameters_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_MBMS_E_RAB_QoS_Parameters_H_ */
#include <asn_internal.h>
