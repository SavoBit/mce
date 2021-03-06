/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Containers"
 * 	found in "/home/dbeken/Development/oai/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/oai/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#include "M2AP_ProtocolIE-Single-Container.h"

/*
 * This type is implemented using M2AP_PMCH_Configuration_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M2AP_MBSFN_Subframe_ConfigurationItem,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M2AP_MBMS_Suspension_Notification_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M2AP_ENB_MBMS_Configuration_data_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M2AP_MBMS_Service_associatedLogicalM2_ConnectionItemRes,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M2AP_MBMS_Service_associatedLogicalM2_ConnectionItemResAck,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M2AP_SubframeAllocationExtended_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P0 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P0_tags_1,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P0_tags_1)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P0_tags_1[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P0_tags_1)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_PMCH_Configuration_ItemIEs_1,
	3,	/* Elements count */
	&asn_SPC_M2AP_PMCH_Configuration_ItemIEs_specs_1	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P1_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P1 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P1_tags_2,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P1_tags_2)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P1_tags_2[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P1_tags_2,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P1_tags_2)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P1_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_MBSFN_Subframe_ConfigurationItem_5,
	3,	/* Elements count */
	&asn_SPC_M2AP_MBSFN_Subframe_ConfigurationItem_specs_5	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P2_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P2 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P2_tags_3,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P2_tags_3)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P2_tags_3[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P2_tags_3,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P2_tags_3)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P2_tags_3[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_MBMS_Suspension_Notification_ItemIEs_9,
	3,	/* Elements count */
	&asn_SPC_M2AP_MBMS_Suspension_Notification_ItemIEs_specs_9	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3_tags_4,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3_tags_4)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3_tags_4[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3_tags_4,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3_tags_4)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P3_tags_4[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_ENB_MBMS_Configuration_data_ItemIEs_13,
	3,	/* Elements count */
	&asn_SPC_M2AP_ENB_MBMS_Configuration_data_ItemIEs_specs_13	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P4_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P4 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P4_tags_5,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P4_tags_5)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P4_tags_5[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P4_tags_5,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P4_tags_5)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P4_tags_5[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_ItemIEs_17,
	3,	/* Elements count */
	&asn_SPC_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_ItemIEs_specs_17	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P5_tags_6[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P5 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P5_tags_6,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P5_tags_6)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P5_tags_6[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P5_tags_6,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P5_tags_6)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P5_tags_6[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_ItemIEs_21,
	3,	/* Elements count */
	&asn_SPC_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_ItemIEs_specs_21	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P6_tags_7[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P6 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P6_tags_7,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P6_tags_7)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P6_tags_7[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P6_tags_7,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P6_tags_7)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P6_tags_7[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_MBMS_Service_associatedLogicalM2_ConnectionItemRes_25,
	3,	/* Elements count */
	&asn_SPC_M2AP_MBMS_Service_associatedLogicalM2_ConnectionItemRes_specs_25	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P7_tags_8[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P7 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P7_tags_8,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P7_tags_8)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P7_tags_8[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P7_tags_8,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P7_tags_8)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P7_tags_8[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_MBMS_Service_associatedLogicalM2_ConnectionItemResAck_29,
	3,	/* Elements count */
	&asn_SPC_M2AP_MBMS_Service_associatedLogicalM2_ConnectionItemResAck_specs_29	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P8_tags_9[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ProtocolIE_Single_Container_1827P8 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P8_tags_9,
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P8_tags_9)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P8_tags_9[0]), /* 1 */
	asn_DEF_M2AP_ProtocolIE_Single_Container_1827P8_tags_9,	/* Same as above */
	sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P8_tags_9)
		/sizeof(asn_DEF_M2AP_ProtocolIE_Single_Container_1827P8_tags_9[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_SubframeAllocationExtended_ExtIEs_33,
	3,	/* Elements count */
	&asn_SPC_M2AP_SubframeAllocationExtended_ExtIEs_specs_33	/* Additional specs */
};

