/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m3ap/messages/asn1/r15/m3ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M3AP_r15`
 */

#include "M3AP_MBMS-Service-associatedLogicalM3-ConnectionItem.h"

#include "M3AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_1[] = {
	{ ATF_POINTER, 3, offsetof(struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem, mME_MBMS_M3AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_MME_MBMS_M3AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mME-MBMS-M3AP-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem, mCE_MBMS_M3AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_MCE_MBMS_M3AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mCE-MBMS-M3AP-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_ProtocolExtensionContainer_1289P7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mME-MBMS-M3AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mCE-MBMS-M3AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_specs_1 = {
	sizeof(struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem),
	offsetof(struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem, _asn_ctx),
	asn_MAP_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem = {
	"MBMS-Service-associatedLogicalM3-ConnectionItem",
	"MBMS-Service-associatedLogicalM3-ConnectionItem",
	&asn_OP_SEQUENCE,
	asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tags_1,
	sizeof(asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tags_1)
		/sizeof(asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tags_1[0]), /* 1 */
	asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tags_1)
		/sizeof(asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_1,
	3,	/* Elements count */
	&asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_specs_1	/* Additional specs */
};

