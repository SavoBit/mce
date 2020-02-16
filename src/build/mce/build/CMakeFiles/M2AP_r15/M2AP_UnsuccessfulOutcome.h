/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Descriptions"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#ifndef	_M2AP_UnsuccessfulOutcome_H_
#define	_M2AP_UnsuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M2AP_ProcedureCode.h"
#include "M2AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "M2AP_SessionStartRequest.h"
#include "M2AP_SessionStartResponse.h"
#include "M2AP_SessionStartFailure.h"
#include "M2AP_SessionStopRequest.h"
#include "M2AP_SessionStopResponse.h"
#include "M2AP_SessionUpdateRequest.h"
#include "M2AP_SessionUpdateResponse.h"
#include "M2AP_SessionUpdateFailure.h"
#include "M2AP_MbmsSchedulingInformation.h"
#include "M2AP_MbmsSchedulingInformationResponse.h"
#include "M2AP_Reset.h"
#include "M2AP_ResetAcknowledge.h"
#include "M2AP_M2SetupRequest.h"
#include "M2AP_M2SetupResponse.h"
#include "M2AP_M2SetupFailure.h"
#include "M2AP_ENBConfigurationUpdate.h"
#include "M2AP_ENBConfigurationUpdateAcknowledge.h"
#include "M2AP_ENBConfigurationUpdateFailure.h"
#include "M2AP_MCEConfigurationUpdate.h"
#include "M2AP_MCEConfigurationUpdateAcknowledge.h"
#include "M2AP_MCEConfigurationUpdateFailure.h"
#include "M2AP_MbmsServiceCountingRequest.h"
#include "M2AP_MbmsServiceCountingResponse.h"
#include "M2AP_MbmsServiceCountingFailure.h"
#include "M2AP_ErrorIndication.h"
#include "M2AP_PrivateMessage.h"
#include "M2AP_MbmsServiceCountingResultsReport.h"
#include "M2AP_MbmsOverloadNotification.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_UnsuccessfulOutcome__value_PR {
	M2AP_UnsuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	M2AP_UnsuccessfulOutcome__value_PR_SessionStartFailure,
	M2AP_UnsuccessfulOutcome__value_PR_SessionUpdateFailure,
	M2AP_UnsuccessfulOutcome__value_PR_M2SetupFailure,
	M2AP_UnsuccessfulOutcome__value_PR_ENBConfigurationUpdateFailure,
	M2AP_UnsuccessfulOutcome__value_PR_MCEConfigurationUpdateFailure,
	M2AP_UnsuccessfulOutcome__value_PR_MbmsServiceCountingFailure
} M2AP_UnsuccessfulOutcome__value_PR;

/* M2AP_UnsuccessfulOutcome */
typedef struct M2AP_UnsuccessfulOutcome {
	M2AP_ProcedureCode_t	 procedureCode;
	M2AP_Criticality_t	 criticality;
	struct M2AP_UnsuccessfulOutcome__value {
		M2AP_UnsuccessfulOutcome__value_PR present;
		union M2AP_UnsuccessfulOutcome__M2AP_value_u {
			M2AP_SessionStartFailure_t	 SessionStartFailure;
			M2AP_SessionUpdateFailure_t	 SessionUpdateFailure;
			M2AP_M2SetupFailure_t	 M2SetupFailure;
			M2AP_ENBConfigurationUpdateFailure_t	 ENBConfigurationUpdateFailure;
			M2AP_MCEConfigurationUpdateFailure_t	 MCEConfigurationUpdateFailure;
			M2AP_MbmsServiceCountingFailure_t	 MbmsServiceCountingFailure;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_UnsuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_UnsuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_M2AP_UnsuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_UnsuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_UnsuccessfulOutcome_H_ */
#include <asn_internal.h>
