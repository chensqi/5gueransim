/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_SONConfigurationTransfer_H_
#define	_NGAP_SONConfigurationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_TargetRANNodeID.h"
#include "NGAP_SourceRANNodeID.h"
#include "NGAP_SONInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_XnTNLConfigurationInfo;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_SONConfigurationTransfer */
typedef struct NGAP_SONConfigurationTransfer {
	NGAP_TargetRANNodeID_t	 targetRANNodeID;
	NGAP_SourceRANNodeID_t	 sourceRANNodeID;
	NGAP_SONInformation_t	 sONInformation;
	struct NGAP_XnTNLConfigurationInfo	*xnTNLConfigurationInfo;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_SONConfigurationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_SONConfigurationTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_SONConfigurationTransfer_H_ */
#include <asn_internal.h>
