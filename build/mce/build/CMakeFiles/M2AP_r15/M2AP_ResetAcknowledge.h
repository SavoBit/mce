/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Contents"
 * 	found in "/home/dbeken/Development/oai/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#ifndef	_M2AP_ResetAcknowledge_H_
#define	_M2AP_ResetAcknowledge_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M2AP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M2AP_ResetAcknowledge */
typedef struct M2AP_ResetAcknowledge {
	M2AP_ProtocolIE_Container_1824P22_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_ResetAcknowledge_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_ResetAcknowledge;
extern asn_SEQUENCE_specifics_t asn_SPC_M2AP_ResetAcknowledge_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_ResetAcknowledge_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_ResetAcknowledge_H_ */
#include <asn_internal.h>
