/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_ServedGUMMEIsItem_H_
#define	_S1AP_ServedGUMMEIsItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_ServedPLMNs.h"
#include "S1AP_ServedGroupIDs.h"
#include "S1AP_ServedMMECs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_ServedGUMMEIsItem */
typedef struct S1AP_ServedGUMMEIsItem {
	S1AP_ServedPLMNs_t	 servedPLMNs;
	S1AP_ServedGroupIDs_t	 servedGroupIDs;
	S1AP_ServedMMECs_t	 servedMMECs;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_ServedGUMMEIsItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ServedGUMMEIsItem;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_ServedGUMMEIsItem_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_ServedGUMMEIsItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ServedGUMMEIsItem_H_ */
#include <asn_internal.h>
