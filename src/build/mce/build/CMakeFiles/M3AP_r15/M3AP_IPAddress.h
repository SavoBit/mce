/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m3ap/messages/asn1/r15/m3ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M3AP_r15`
 */

#ifndef	_M3AP_IPAddress_H_
#define	_M3AP_IPAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M3AP_IPAddress */
typedef OCTET_STRING_t	 M3AP_IPAddress_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M3AP_IPAddress_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_IPAddress;
asn_struct_free_f M3AP_IPAddress_free;
asn_struct_print_f M3AP_IPAddress_print;
asn_constr_check_f M3AP_IPAddress_constraint;
ber_type_decoder_f M3AP_IPAddress_decode_ber;
der_type_encoder_f M3AP_IPAddress_encode_der;
xer_type_decoder_f M3AP_IPAddress_decode_xer;
xer_type_encoder_f M3AP_IPAddress_encode_xer;
oer_type_decoder_f M3AP_IPAddress_decode_oer;
oer_type_encoder_f M3AP_IPAddress_encode_oer;
per_type_decoder_f M3AP_IPAddress_decode_uper;
per_type_encoder_f M3AP_IPAddress_encode_uper;
per_type_decoder_f M3AP_IPAddress_decode_aper;
per_type_encoder_f M3AP_IPAddress_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_IPAddress_H_ */
#include <asn_internal.h>
