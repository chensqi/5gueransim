/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "NGAP_UEIdentityIndexValue.h"

#include "NGAP_ProtocolIE-SingleContainer.h"
static int
memb_NGAP_indexLength10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_NGAP_indexLength10_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	10	/* (SIZE(10..10)) */};
static asn_per_constraints_t asn_PER_memb_NGAP_indexLength10_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_NGAP_UEIdentityIndexValue_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_NGAP_UEIdentityIndexValue_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NGAP_UEIdentityIndexValue_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UEIdentityIndexValue, choice.indexLength10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_NGAP_indexLength10_constr_2, &asn_PER_memb_NGAP_indexLength10_constr_2,  memb_NGAP_indexLength10_constraint_1 },
		0, 0, /* No default value */
		"indexLength10"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_UEIdentityIndexValue, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_UEIdentityIndexValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* indexLength10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_NGAP_UEIdentityIndexValue_specs_1 = {
	sizeof(struct NGAP_UEIdentityIndexValue),
	offsetof(struct NGAP_UEIdentityIndexValue, _asn_ctx),
	offsetof(struct NGAP_UEIdentityIndexValue, present),
	sizeof(((struct NGAP_UEIdentityIndexValue *)0)->present),
	asn_MAP_NGAP_UEIdentityIndexValue_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_UEIdentityIndexValue = {
	"UEIdentityIndexValue",
	"UEIdentityIndexValue",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_NGAP_UEIdentityIndexValue_constr_1, &asn_PER_type_NGAP_UEIdentityIndexValue_constr_1, CHOICE_constraint },
	asn_MBR_NGAP_UEIdentityIndexValue_1,
	2,	/* Elements count */
	&asn_SPC_NGAP_UEIdentityIndexValue_specs_1	/* Additional specs */
};

