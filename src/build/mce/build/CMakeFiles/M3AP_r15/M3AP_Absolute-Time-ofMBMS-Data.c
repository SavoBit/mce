/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m3ap/messages/asn1/r15/m3ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M3AP_r15`
 */

#include "M3AP_Absolute-Time-ofMBMS-Data.h"

int
M3AP_Absolute_Time_ofMBMS_Data_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_M3AP_Absolute_Time_ofMBMS_Data_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	64	/* (SIZE(64..64)) */};
asn_per_constraints_t asn_PER_type_M3AP_Absolute_Time_ofMBMS_Data_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  64,  64 }	/* (SIZE(64..64)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_M3AP_Absolute_Time_ofMBMS_Data_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M3AP_Absolute_Time_ofMBMS_Data = {
	"Absolute-Time-ofMBMS-Data",
	"Absolute-Time-ofMBMS-Data",
	&asn_OP_BIT_STRING,
	asn_DEF_M3AP_Absolute_Time_ofMBMS_Data_tags_1,
	sizeof(asn_DEF_M3AP_Absolute_Time_ofMBMS_Data_tags_1)
		/sizeof(asn_DEF_M3AP_Absolute_Time_ofMBMS_Data_tags_1[0]), /* 1 */
	asn_DEF_M3AP_Absolute_Time_ofMBMS_Data_tags_1,	/* Same as above */
	sizeof(asn_DEF_M3AP_Absolute_Time_ofMBMS_Data_tags_1)
		/sizeof(asn_DEF_M3AP_Absolute_Time_ofMBMS_Data_tags_1[0]), /* 1 */
	{ &asn_OER_type_M3AP_Absolute_Time_ofMBMS_Data_constr_1, &asn_PER_type_M3AP_Absolute_Time_ofMBMS_Data_constr_1, M3AP_Absolute_Time_ofMBMS_Data_constraint },
	0, 0,	/* No members */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};

