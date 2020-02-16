/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-CommonDataTypes"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#ifndef	_M2AP_ProtocolIE_ID_H_
#define	_M2AP_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M2AP_ProtocolIE-ID */
typedef long	 M2AP_ProtocolIE_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M2AP_ProtocolIE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_ID;
asn_struct_free_f M2AP_ProtocolIE_ID_free;
asn_struct_print_f M2AP_ProtocolIE_ID_print;
asn_constr_check_f M2AP_ProtocolIE_ID_constraint;
ber_type_decoder_f M2AP_ProtocolIE_ID_decode_ber;
der_type_encoder_f M2AP_ProtocolIE_ID_encode_der;
xer_type_decoder_f M2AP_ProtocolIE_ID_decode_xer;
xer_type_encoder_f M2AP_ProtocolIE_ID_encode_xer;
oer_type_decoder_f M2AP_ProtocolIE_ID_decode_oer;
oer_type_encoder_f M2AP_ProtocolIE_ID_encode_oer;
per_type_decoder_f M2AP_ProtocolIE_ID_decode_uper;
per_type_encoder_f M2AP_ProtocolIE_ID_encode_uper;
per_type_decoder_f M2AP_ProtocolIE_ID_decode_aper;
per_type_encoder_f M2AP_ProtocolIE_ID_encode_aper;
#define M2AP_ProtocolIE_ID_id_MCE_MBMS_M2AP_ID	((M2AP_ProtocolIE_ID_t)0)
#define M2AP_ProtocolIE_ID_id_ENB_MBMS_M2AP_ID	((M2AP_ProtocolIE_ID_t)1)
#define M2AP_ProtocolIE_ID_id_TMGI	((M2AP_ProtocolIE_ID_t)2)
#define M2AP_ProtocolIE_ID_id_MBMS_Session_ID	((M2AP_ProtocolIE_ID_t)3)
#define M2AP_ProtocolIE_ID_id_MBMS_Service_Area	((M2AP_ProtocolIE_ID_t)6)
#define M2AP_ProtocolIE_ID_id_TNL_Information	((M2AP_ProtocolIE_ID_t)7)
#define M2AP_ProtocolIE_ID_id_CriticalityDiagnostics	((M2AP_ProtocolIE_ID_t)8)
#define M2AP_ProtocolIE_ID_id_Cause	((M2AP_ProtocolIE_ID_t)9)
#define M2AP_ProtocolIE_ID_id_MBSFN_Area_Configuration_List	((M2AP_ProtocolIE_ID_t)10)
#define M2AP_ProtocolIE_ID_id_PMCH_Configuration_List	((M2AP_ProtocolIE_ID_t)11)
#define M2AP_ProtocolIE_ID_id_PMCH_Configuration_Item	((M2AP_ProtocolIE_ID_t)12)
#define M2AP_ProtocolIE_ID_id_GlobalENB_ID	((M2AP_ProtocolIE_ID_t)13)
#define M2AP_ProtocolIE_ID_id_ENBname	((M2AP_ProtocolIE_ID_t)14)
#define M2AP_ProtocolIE_ID_id_ENB_MBMS_Configuration_data_List	((M2AP_ProtocolIE_ID_t)15)
#define M2AP_ProtocolIE_ID_id_ENB_MBMS_Configuration_data_Item	((M2AP_ProtocolIE_ID_t)16)
#define M2AP_ProtocolIE_ID_id_GlobalMCE_ID	((M2AP_ProtocolIE_ID_t)17)
#define M2AP_ProtocolIE_ID_id_MCEname	((M2AP_ProtocolIE_ID_t)18)
#define M2AP_ProtocolIE_ID_id_MCCHrelatedBCCH_ConfigPerMBSFNArea	((M2AP_ProtocolIE_ID_t)19)
#define M2AP_ProtocolIE_ID_id_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item	((M2AP_ProtocolIE_ID_t)20)
#define M2AP_ProtocolIE_ID_id_TimeToWait	((M2AP_ProtocolIE_ID_t)21)
#define M2AP_ProtocolIE_ID_id_MBSFN_Subframe_Configuration_List	((M2AP_ProtocolIE_ID_t)22)
#define M2AP_ProtocolIE_ID_id_MBSFN_Subframe_Configuration_Item	((M2AP_ProtocolIE_ID_t)23)
#define M2AP_ProtocolIE_ID_id_Common_Subframe_Allocation_Period	((M2AP_ProtocolIE_ID_t)24)
#define M2AP_ProtocolIE_ID_id_MCCH_Update_Time	((M2AP_ProtocolIE_ID_t)25)
#define M2AP_ProtocolIE_ID_id_ENB_MBMS_Configuration_data_List_ConfigUpdate	((M2AP_ProtocolIE_ID_t)26)
#define M2AP_ProtocolIE_ID_id_ENB_MBMS_Configuration_data_ConfigUpdate_Item	((M2AP_ProtocolIE_ID_t)27)
#define M2AP_ProtocolIE_ID_id_MBMS_Service_associatedLogicalM2_ConnectionItem	((M2AP_ProtocolIE_ID_t)28)
#define M2AP_ProtocolIE_ID_id_MBSFN_Area_ID	((M2AP_ProtocolIE_ID_t)29)
#define M2AP_ProtocolIE_ID_id_ResetType	((M2AP_ProtocolIE_ID_t)30)
#define M2AP_ProtocolIE_ID_id_MBMS_Service_associatedLogicalM2_ConnectionListResAck	((M2AP_ProtocolIE_ID_t)31)
#define M2AP_ProtocolIE_ID_id_MBMS_Counting_Request_Session	((M2AP_ProtocolIE_ID_t)32)
#define M2AP_ProtocolIE_ID_id_MBMS_Counting_Request_Session_Item	((M2AP_ProtocolIE_ID_t)33)
#define M2AP_ProtocolIE_ID_id_MBMS_Counting_Result_List	((M2AP_ProtocolIE_ID_t)34)
#define M2AP_ProtocolIE_ID_id_MBMS_Counting_Result_Item	((M2AP_ProtocolIE_ID_t)35)
#define M2AP_ProtocolIE_ID_id_Modulation_Coding_Scheme2	((M2AP_ProtocolIE_ID_t)36)
#define M2AP_ProtocolIE_ID_id_MCH_Scheduling_PeriodExtended	((M2AP_ProtocolIE_ID_t)37)
#define M2AP_ProtocolIE_ID_id_Alternative_TNL_Information	((M2AP_ProtocolIE_ID_t)38)
#define M2AP_ProtocolIE_ID_id_Overload_Status_Per_PMCH_List	((M2AP_ProtocolIE_ID_t)39)
#define M2AP_ProtocolIE_ID_id_PMCH_Overload_Status	((M2AP_ProtocolIE_ID_t)41)
#define M2AP_ProtocolIE_ID_id_Active_MBMS_Session_List	((M2AP_ProtocolIE_ID_t)42)
#define M2AP_ProtocolIE_ID_id_MBMS_Suspension_Notification_List	((M2AP_ProtocolIE_ID_t)43)
#define M2AP_ProtocolIE_ID_id_MBMS_Suspension_Notification_Item	((M2AP_ProtocolIE_ID_t)44)
#define M2AP_ProtocolIE_ID_id_SC_PTM_Information	((M2AP_ProtocolIE_ID_t)45)
#define M2AP_ProtocolIE_ID_id_Modification_PeriodExtended	((M2AP_ProtocolIE_ID_t)46)
#define M2AP_ProtocolIE_ID_id_Repetition_PeriodExtended	((M2AP_ProtocolIE_ID_t)47)
#define M2AP_ProtocolIE_ID_id_MCH_Scheduling_PeriodExtended2	((M2AP_ProtocolIE_ID_t)48)
#define M2AP_ProtocolIE_ID_id_Subcarrier_SpacingMBMS	((M2AP_ProtocolIE_ID_t)49)
#define M2AP_ProtocolIE_ID_id_SubframeAllocationExtended	((M2AP_ProtocolIE_ID_t)50)

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_ProtocolIE_ID_H_ */
#include <asn_internal.h>
