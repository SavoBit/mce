/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Contents"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m3ap/messages/asn1/r15/m3ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M3AP_r15`
 */

#ifndef	_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_H_
#define	_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M3AP_ProtocolIE_Single_Container;

/* M3AP_MBMS-Service-associatedLogicalM3-ConnectionListRes */
typedef struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes {
	A_SEQUENCE_OF(struct M3AP_ProtocolIE_Single_Container) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_1[1];
extern asn_per_constraints_t asn_PER_type_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_H_ */
#include <asn_internal.h>
