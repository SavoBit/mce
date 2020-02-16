/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Descriptions"
 * 	found in "/home/dbeken/Development/blackned/mce/src/m3ap/messages/asn1/r15/m3ap-15.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/dbeken/Development/blackned/mce/build/mce/build/CMakeFiles/M3AP_r15`
 */

#include "M3AP_SuccessfulOutcome.h"

static const long asn_VAL_1_M3AP_id_mBMSsessionStart = 0;
static const long asn_VAL_1_M3AP_reject = 0;
static const long asn_VAL_2_M3AP_id_mBMSsessionStop = 1;
static const long asn_VAL_2_M3AP_reject = 0;
static const long asn_VAL_3_M3AP_id_mBMSsessionUpdate = 5;
static const long asn_VAL_3_M3AP_reject = 0;
static const long asn_VAL_4_M3AP_id_Reset = 4;
static const long asn_VAL_4_M3AP_reject = 0;
static const long asn_VAL_5_M3AP_id_m3Setup = 7;
static const long asn_VAL_5_M3AP_reject = 0;
static const long asn_VAL_6_M3AP_id_mCEConfigurationUpdate = 6;
static const long asn_VAL_6_M3AP_reject = 0;
static const long asn_VAL_7_M3AP_id_errorIndication = 2;
static const long asn_VAL_7_M3AP_ignore = 1;
static const long asn_VAL_8_M3AP_id_privateMessage = 3;
static const long asn_VAL_8_M3AP_ignore = 1;
static const asn_ioc_cell_t asn_IOS_M3AP_M3AP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M3AP_MBMSSessionStartRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M3AP_MBMSSessionStartResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M3AP_MBMSSessionStartFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M3AP_ProcedureCode, &asn_VAL_1_M3AP_id_mBMSsessionStart },
	{ "&criticality", aioc__value, &asn_DEF_M3AP_Criticality, &asn_VAL_1_M3AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M3AP_MBMSSessionStopRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M3AP_MBMSSessionStopResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M3AP_ProcedureCode, &asn_VAL_2_M3AP_id_mBMSsessionStop },
	{ "&criticality", aioc__value, &asn_DEF_M3AP_Criticality, &asn_VAL_2_M3AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M3AP_MBMSSessionUpdateRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M3AP_MBMSSessionUpdateResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M3AP_MBMSSessionUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M3AP_ProcedureCode, &asn_VAL_3_M3AP_id_mBMSsessionUpdate },
	{ "&criticality", aioc__value, &asn_DEF_M3AP_Criticality, &asn_VAL_3_M3AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M3AP_Reset },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M3AP_ResetAcknowledge },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M3AP_ProcedureCode, &asn_VAL_4_M3AP_id_Reset },
	{ "&criticality", aioc__value, &asn_DEF_M3AP_Criticality, &asn_VAL_4_M3AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M3AP_M3SetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M3AP_M3SetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M3AP_M3SetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M3AP_ProcedureCode, &asn_VAL_5_M3AP_id_m3Setup },
	{ "&criticality", aioc__value, &asn_DEF_M3AP_Criticality, &asn_VAL_5_M3AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M3AP_MCEConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M3AP_MCEConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M3AP_MCEConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M3AP_ProcedureCode, &asn_VAL_6_M3AP_id_mCEConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_M3AP_Criticality, &asn_VAL_6_M3AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M3AP_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M3AP_ProcedureCode, &asn_VAL_7_M3AP_id_errorIndication },
	{ "&criticality", aioc__value, &asn_DEF_M3AP_Criticality, &asn_VAL_7_M3AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M3AP_PrivateMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M3AP_ProcedureCode, &asn_VAL_8_M3AP_id_privateMessage },
	{ "&criticality", aioc__value, &asn_DEF_M3AP_Criticality, &asn_VAL_8_M3AP_ignore }
};
static const asn_ioc_set_t asn_IOS_M3AP_M3AP_ELEMENTARY_PROCEDURES_1[] = {
	{ 8, 5, asn_IOS_M3AP_M3AP_ELEMENTARY_PROCEDURES_1_rows }
};
static int
memb_M3AP_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_SuccessfulOutcome_M3AP_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_M3AP_M3AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct M3AP_SuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_M3AP_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_SuccessfulOutcome_M3AP_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_M3AP_M3AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 1; /* &SuccessfulOutcome */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct M3AP_SuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_M3AP_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_memb_M3AP_procedureCode_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_M3AP_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_M3AP_criticality_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_M3AP_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_M3AP_value_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_M3AP_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_M3AP_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome__value, choice.MBMSSessionStartResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M3AP_MBMSSessionStartResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"MBMSSessionStartResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome__value, choice.MBMSSessionStopResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M3AP_MBMSSessionStopResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"MBMSSessionStopResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome__value, choice.MBMSSessionUpdateResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M3AP_MBMSSessionUpdateResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"MBMSSessionUpdateResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome__value, choice.ResetAcknowledge),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M3AP_ResetAcknowledge,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ResetAcknowledge"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome__value, choice.M3SetupResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M3AP_M3SetupResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"M3SetupResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome__value, choice.MCEConfigurationUpdateAcknowledge),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M3AP_MCEConfigurationUpdateAcknowledge,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"MCEConfigurationUpdateAcknowledge"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_M3AP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 5 }, /* MBMSSessionStartResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 4 }, /* MBMSSessionStopResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 3 }, /* MBMSSessionUpdateResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 2 }, /* ResetAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 1 }, /* M3SetupResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 0 } /* MCEConfigurationUpdateAcknowledge */
};
static asn_CHOICE_specifics_t asn_SPC_M3AP_value_specs_4 = {
	sizeof(struct M3AP_SuccessfulOutcome__value),
	offsetof(struct M3AP_SuccessfulOutcome__value, _asn_ctx),
	offsetof(struct M3AP_SuccessfulOutcome__value, present),
	sizeof(((struct M3AP_SuccessfulOutcome__value *)0)->present),
	asn_MAP_M3AP_value_tag2el_4,
	6,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_M3AP_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_M3AP_value_4,
	6,	/* Elements count */
	&asn_SPC_M3AP_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_M3AP_SuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_ProcedureCode,
		0,
		{ &asn_OER_memb_M3AP_procedureCode_constr_2, &asn_PER_memb_M3AP_procedureCode_constr_2,  memb_M3AP_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_Criticality,
		select_SuccessfulOutcome_M3AP_criticality_type,
		{ &asn_OER_memb_M3AP_criticality_constr_3, &asn_PER_memb_M3AP_criticality_constr_3,  memb_M3AP_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct M3AP_SuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_M3AP_value_4,
		select_SuccessfulOutcome_M3AP_value_type,
		{ &asn_OER_memb_M3AP_value_constr_4, &asn_PER_memb_M3AP_value_constr_4,  memb_M3AP_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_M3AP_SuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M3AP_SuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_M3AP_SuccessfulOutcome_specs_1 = {
	sizeof(struct M3AP_SuccessfulOutcome),
	offsetof(struct M3AP_SuccessfulOutcome, _asn_ctx),
	asn_MAP_M3AP_SuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M3AP_SuccessfulOutcome = {
	"SuccessfulOutcome",
	"SuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_M3AP_SuccessfulOutcome_tags_1,
	sizeof(asn_DEF_M3AP_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_M3AP_SuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_M3AP_SuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_M3AP_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_M3AP_SuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M3AP_SuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_M3AP_SuccessfulOutcome_specs_1	/* Additional specs */
};

