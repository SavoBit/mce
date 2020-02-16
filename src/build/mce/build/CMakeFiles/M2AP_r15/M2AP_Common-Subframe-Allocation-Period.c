/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m2ap/messages/asn1/r15/m2ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M2AP_r15`
 */

#include "M2AP_Common-Subframe-Allocation-Period.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_M2AP_Common_Subframe_Allocation_Period_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_M2AP_Common_Subframe_Allocation_Period_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_M2AP_Common_Subframe_Allocation_Period_value2enum_1[] = {
	{ 0,	3,	"rf4" },
	{ 1,	3,	"rf8" },
	{ 2,	4,	"rf16" },
	{ 3,	4,	"rf32" },
	{ 4,	4,	"rf64" },
	{ 5,	5,	"rf128" },
	{ 6,	5,	"rf256" }
};
static const unsigned int asn_MAP_M2AP_Common_Subframe_Allocation_Period_enum2value_1[] = {
	5,	/* rf128(5) */
	2,	/* rf16(2) */
	6,	/* rf256(6) */
	3,	/* rf32(3) */
	0,	/* rf4(0) */
	4,	/* rf64(4) */
	1	/* rf8(1) */
};
const asn_INTEGER_specifics_t asn_SPC_M2AP_Common_Subframe_Allocation_Period_specs_1 = {
	asn_MAP_M2AP_Common_Subframe_Allocation_Period_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_M2AP_Common_Subframe_Allocation_Period_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_M2AP_Common_Subframe_Allocation_Period_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_Common_Subframe_Allocation_Period = {
	"Common-Subframe-Allocation-Period",
	"Common-Subframe-Allocation-Period",
	&asn_OP_NativeEnumerated,
	asn_DEF_M2AP_Common_Subframe_Allocation_Period_tags_1,
	sizeof(asn_DEF_M2AP_Common_Subframe_Allocation_Period_tags_1)
		/sizeof(asn_DEF_M2AP_Common_Subframe_Allocation_Period_tags_1[0]), /* 1 */
	asn_DEF_M2AP_Common_Subframe_Allocation_Period_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_Common_Subframe_Allocation_Period_tags_1)
		/sizeof(asn_DEF_M2AP_Common_Subframe_Allocation_Period_tags_1[0]), /* 1 */
	{ &asn_OER_type_M2AP_Common_Subframe_Allocation_Period_constr_1, &asn_PER_type_M2AP_Common_Subframe_Allocation_Period_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_M2AP_Common_Subframe_Allocation_Period_specs_1	/* Additional specs */
};

