/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Descriptions"
 * 	found in "/home/dbeken/Development/oai/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#ifndef	_M2AP_M2AP_PDU_H_
#define	_M2AP_M2AP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M2AP_InitiatingMessage.h"
#include "M2AP_SuccessfulOutcome.h"
#include "M2AP_UnsuccessfulOutcome.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_M2AP_PDU_PR {
	M2AP_M2AP_PDU_PR_NOTHING,	/* No components present */
	M2AP_M2AP_PDU_PR_initiatingMessage,
	M2AP_M2AP_PDU_PR_successfulOutcome,
	M2AP_M2AP_PDU_PR_unsuccessfulOutcome
	/* Extensions may appear below */
	
} M2AP_M2AP_PDU_PR;

/* M2AP_M2AP-PDU */
typedef struct M2AP_M2AP_PDU {
	M2AP_M2AP_PDU_PR present;
	union M2AP_M2AP_PDU_u {
		M2AP_InitiatingMessage_t	 initiatingMessage;
		M2AP_SuccessfulOutcome_t	 successfulOutcome;
		M2AP_UnsuccessfulOutcome_t	 unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_M2AP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_M2AP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_M2AP_PDU_H_ */
#include <asn_internal.h>
