/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Contents"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#include "M2AP_ENB-MBMS-Configuration-data-List.h"

#include "M2AP_ProtocolIE-Single-Container.h"
static asn_oer_constraints_t asn_OER_type_M2AP_ENB_MBMS_Configuration_data_List_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..256)) */};
asn_per_constraints_t asn_PER_type_M2AP_ENB_MBMS_Configuration_data_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_M2AP_ENB_MBMS_Configuration_data_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_M2AP_ENB_MBMS_Configuration_data_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_M2AP_ENB_MBMS_Configuration_data_List_specs_1 = {
	sizeof(struct M2AP_ENB_MBMS_Configuration_data_List),
	offsetof(struct M2AP_ENB_MBMS_Configuration_data_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ENB_MBMS_Configuration_data_List = {
	"ENB-MBMS-Configuration-data-List",
	"ENB-MBMS-Configuration-data-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_M2AP_ENB_MBMS_Configuration_data_List_tags_1,
	sizeof(asn_DEF_M2AP_ENB_MBMS_Configuration_data_List_tags_1)
		/sizeof(asn_DEF_M2AP_ENB_MBMS_Configuration_data_List_tags_1[0]), /* 1 */
	asn_DEF_M2AP_ENB_MBMS_Configuration_data_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_ENB_MBMS_Configuration_data_List_tags_1)
		/sizeof(asn_DEF_M2AP_ENB_MBMS_Configuration_data_List_tags_1[0]), /* 1 */
	{ &asn_OER_type_M2AP_ENB_MBMS_Configuration_data_List_constr_1, &asn_PER_type_M2AP_ENB_MBMS_Configuration_data_List_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_M2AP_ENB_MBMS_Configuration_data_List_1,
	1,	/* Single element */
	&asn_SPC_M2AP_ENB_MBMS_Configuration_data_List_specs_1	/* Additional specs */
};

