/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "S1AP_BroadcastCompletedAreaList.h"

#include "S1AP_CellID-Broadcast.h"
#include "S1AP_TAI-Broadcast.h"
#include "S1AP_EmergencyAreaID-Broadcast.h"
static asn_oer_constraints_t asn_OER_type_S1AP_BroadcastCompletedAreaList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_S1AP_BroadcastCompletedAreaList_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_BroadcastCompletedAreaList_1[] = {
	{ ATF_POINTER, 0, offsetof(struct S1AP_BroadcastCompletedAreaList, choice.cellID_Broadcast),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CellID_Broadcast,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellID-Broadcast"
		},
	{ ATF_POINTER, 0, offsetof(struct S1AP_BroadcastCompletedAreaList, choice.tAI_Broadcast),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TAI_Broadcast,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAI-Broadcast"
		},
	{ ATF_POINTER, 0, offsetof(struct S1AP_BroadcastCompletedAreaList, choice.emergencyAreaID_Broadcast),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EmergencyAreaID_Broadcast,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"emergencyAreaID-Broadcast"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_BroadcastCompletedAreaList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellID-Broadcast */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tAI-Broadcast */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* emergencyAreaID-Broadcast */
};
static asn_CHOICE_specifics_t asn_SPC_S1AP_BroadcastCompletedAreaList_specs_1 = {
	sizeof(struct S1AP_BroadcastCompletedAreaList),
	offsetof(struct S1AP_BroadcastCompletedAreaList, _asn_ctx),
	offsetof(struct S1AP_BroadcastCompletedAreaList, present),
	sizeof(((struct S1AP_BroadcastCompletedAreaList *)0)->present),
	asn_MAP_S1AP_BroadcastCompletedAreaList_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_BroadcastCompletedAreaList = {
	"BroadcastCompletedAreaList",
	"BroadcastCompletedAreaList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_S1AP_BroadcastCompletedAreaList_constr_1, &asn_PER_type_S1AP_BroadcastCompletedAreaList_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_BroadcastCompletedAreaList_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_BroadcastCompletedAreaList_specs_1	/* Additional specs */
};

