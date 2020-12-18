/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.1.0/36413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_HandoverType_H_
#define	_S1AP_HandoverType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_HandoverType {
	S1AP_HandoverType_intralte	= 0,
	S1AP_HandoverType_ltetoutran	= 1,
	S1AP_HandoverType_ltetogeran	= 2,
	S1AP_HandoverType_utrantolte	= 3,
	S1AP_HandoverType_gerantolte	= 4,
	/*
	 * Enumeration is extensible
	 */
	S1AP_HandoverType_eps_to_5gs	= 5,
	S1AP_HandoverType_fivegs_to_eps	= 6
} e_S1AP_HandoverType;

/* S1AP_HandoverType */
typedef long	 S1AP_HandoverType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_HandoverType;
asn_struct_free_f S1AP_HandoverType_free;
asn_struct_print_f S1AP_HandoverType_print;
asn_constr_check_f S1AP_HandoverType_constraint;
ber_type_decoder_f S1AP_HandoverType_decode_ber;
der_type_encoder_f S1AP_HandoverType_encode_der;
xer_type_decoder_f S1AP_HandoverType_decode_xer;
xer_type_encoder_f S1AP_HandoverType_encode_xer;
oer_type_decoder_f S1AP_HandoverType_decode_oer;
oer_type_encoder_f S1AP_HandoverType_encode_oer;
per_type_decoder_f S1AP_HandoverType_decode_uper;
per_type_encoder_f S1AP_HandoverType_encode_uper;
per_type_decoder_f S1AP_HandoverType_decode_aper;
per_type_encoder_f S1AP_HandoverType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_HandoverType_H_ */
#include <asn_internal.h>
