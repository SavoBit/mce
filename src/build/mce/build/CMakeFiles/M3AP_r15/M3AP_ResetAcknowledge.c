/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Contents"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m3ap/messages/asn1/r15/m3ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M3AP_r15`
 */

#include "M3AP_ResetAcknowledge.h"

asn_TYPE_member_t asn_MBR_M3AP_ResetAcknowledge_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_ResetAcknowledge, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_ProtocolIE_Container_1237P10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_M3AP_ResetAcknowledge_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M3AP_ResetAcknowledge_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_M3AP_ResetAcknowledge_specs_1 = {
	sizeof(struct M3AP_ResetAcknowledge),
	offsetof(struct M3AP_ResetAcknowledge, _asn_ctx),
	asn_MAP_M3AP_ResetAcknowledge_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M3AP_ResetAcknowledge = {
	"ResetAcknowledge",
	"ResetAcknowledge",
	&asn_OP_SEQUENCE,
	asn_DEF_M3AP_ResetAcknowledge_tags_1,
	sizeof(asn_DEF_M3AP_ResetAcknowledge_tags_1)
		/sizeof(asn_DEF_M3AP_ResetAcknowledge_tags_1[0]), /* 1 */
	asn_DEF_M3AP_ResetAcknowledge_tags_1,	/* Same as above */
	sizeof(asn_DEF_M3AP_ResetAcknowledge_tags_1)
		/sizeof(asn_DEF_M3AP_ResetAcknowledge_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M3AP_ResetAcknowledge_1,
	1,	/* Elements count */
	&asn_SPC_M3AP_ResetAcknowledge_specs_1	/* Additional specs */
};

