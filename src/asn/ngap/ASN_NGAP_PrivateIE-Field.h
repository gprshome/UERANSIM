/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "asn/ngap-15.8.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_PrivateIE_Field_H_
#define	_ASN_NGAP_PrivateIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_PrivateIE-ID.h"
#include "ASN_NGAP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_PrivateMessageIEs__value_PR {
	ASN_NGAP_PrivateMessageIEs__value_PR_NOTHING	/* No components present */
	
} ASN_NGAP_PrivateMessageIEs__value_PR;

/* ASN_NGAP_PrivateIE-Field */
typedef struct ASN_NGAP_PrivateMessageIEs {
	ASN_NGAP_PrivateIE_ID_t	 id;
	ASN_NGAP_Criticality_t	 criticality;
	struct ASN_NGAP_PrivateMessageIEs__value {
		ASN_NGAP_PrivateMessageIEs__value_PR present;
		union ASN_NGAP_PrivateMessageIEs__ASN_NGAP_value_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_PrivateMessageIEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_PrivateMessageIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_PrivateMessageIEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_PrivateMessageIEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_PrivateIE_Field_H_ */
#include <asn_internal.h>