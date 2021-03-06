/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-CommonDataTypes"
 * 	found in "/home/dbeken/Development/oai/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#ifndef	_M2AP_Presence_H_
#define	_M2AP_Presence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_Presence {
	M2AP_Presence_optional	= 0,
	M2AP_Presence_conditional	= 1,
	M2AP_Presence_mandatory	= 2
} e_M2AP_Presence;

/* M2AP_Presence */
typedef long	 M2AP_Presence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M2AP_Presence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M2AP_Presence;
extern const asn_INTEGER_specifics_t asn_SPC_M2AP_Presence_specs_1;
asn_struct_free_f M2AP_Presence_free;
asn_struct_print_f M2AP_Presence_print;
asn_constr_check_f M2AP_Presence_constraint;
ber_type_decoder_f M2AP_Presence_decode_ber;
der_type_encoder_f M2AP_Presence_encode_der;
xer_type_decoder_f M2AP_Presence_decode_xer;
xer_type_encoder_f M2AP_Presence_encode_xer;
oer_type_decoder_f M2AP_Presence_decode_oer;
oer_type_encoder_f M2AP_Presence_encode_oer;
per_type_decoder_f M2AP_Presence_decode_uper;
per_type_encoder_f M2AP_Presence_encode_uper;
per_type_decoder_f M2AP_Presence_decode_aper;
per_type_encoder_f M2AP_Presence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_Presence_H_ */
#include <asn_internal.h>
