/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#ifndef	_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_H_
#define	_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M2AP_ENB-MBMS-Configuration-data-Item.h"
#include "M2AP_ECGI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_PR {
	M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_PR_NOTHING,	/* No components present */
	M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_PR_mBMSConfigData,
	M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_PR_eCGI
	/* Extensions may appear below */
	
} M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_PR;

/* M2AP_ENB-MBMS-Configuration-data-ConfigUpdate-Item */
typedef struct M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item {
	M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_PR present;
	union M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_u {
		M2AP_ENB_MBMS_Configuration_data_Item_t	 mBMSConfigData;
		M2AP_ECGI_t	 eCGI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item;
extern asn_CHOICE_specifics_t asn_SPC_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_1[2];
extern asn_per_constraints_t asn_PER_type_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_H_ */
#include <asn_internal.h>
