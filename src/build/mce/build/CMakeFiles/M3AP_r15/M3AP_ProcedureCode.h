/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-CommonDataTypes"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m3ap/messages/asn1/r15/m3ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M3AP_r15`
 */

#ifndef	_M3AP_ProcedureCode_H_
#define	_M3AP_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M3AP_ProcedureCode */
typedef long	 M3AP_ProcedureCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M3AP_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProcedureCode;
asn_struct_free_f M3AP_ProcedureCode_free;
asn_struct_print_f M3AP_ProcedureCode_print;
asn_constr_check_f M3AP_ProcedureCode_constraint;
ber_type_decoder_f M3AP_ProcedureCode_decode_ber;
der_type_encoder_f M3AP_ProcedureCode_encode_der;
xer_type_decoder_f M3AP_ProcedureCode_decode_xer;
xer_type_encoder_f M3AP_ProcedureCode_encode_xer;
oer_type_decoder_f M3AP_ProcedureCode_decode_oer;
oer_type_encoder_f M3AP_ProcedureCode_encode_oer;
per_type_decoder_f M3AP_ProcedureCode_decode_uper;
per_type_encoder_f M3AP_ProcedureCode_encode_uper;
per_type_decoder_f M3AP_ProcedureCode_decode_aper;
per_type_encoder_f M3AP_ProcedureCode_encode_aper;
#define M3AP_ProcedureCode_id_mBMSsessionStart	((M3AP_ProcedureCode_t)0)
#define M3AP_ProcedureCode_id_mBMSsessionStop	((M3AP_ProcedureCode_t)1)
#define M3AP_ProcedureCode_id_errorIndication	((M3AP_ProcedureCode_t)2)
#define M3AP_ProcedureCode_id_privateMessage	((M3AP_ProcedureCode_t)3)
#define M3AP_ProcedureCode_id_Reset	((M3AP_ProcedureCode_t)4)
#define M3AP_ProcedureCode_id_mBMSsessionUpdate	((M3AP_ProcedureCode_t)5)
#define M3AP_ProcedureCode_id_mCEConfigurationUpdate	((M3AP_ProcedureCode_t)6)
#define M3AP_ProcedureCode_id_m3Setup	((M3AP_ProcedureCode_t)7)

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_ProcedureCode_H_ */
#include <asn_internal.h>
