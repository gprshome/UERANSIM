/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_MRDC_Parameters_H_
#define	_ASN_RRC_MRDC_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_MRDC_Parameters__singleUL_Transmission {
	ASN_RRC_MRDC_Parameters__singleUL_Transmission_supported	= 0
} e_ASN_RRC_MRDC_Parameters__singleUL_Transmission;
typedef enum ASN_RRC_MRDC_Parameters__dynamicPowerSharing {
	ASN_RRC_MRDC_Parameters__dynamicPowerSharing_supported	= 0
} e_ASN_RRC_MRDC_Parameters__dynamicPowerSharing;
typedef enum ASN_RRC_MRDC_Parameters__tdm_Pattern {
	ASN_RRC_MRDC_Parameters__tdm_Pattern_supported	= 0
} e_ASN_RRC_MRDC_Parameters__tdm_Pattern;
typedef enum ASN_RRC_MRDC_Parameters__ul_SharingEUTRA_NR {
	ASN_RRC_MRDC_Parameters__ul_SharingEUTRA_NR_tdm	= 0,
	ASN_RRC_MRDC_Parameters__ul_SharingEUTRA_NR_fdm	= 1,
	ASN_RRC_MRDC_Parameters__ul_SharingEUTRA_NR_both	= 2
} e_ASN_RRC_MRDC_Parameters__ul_SharingEUTRA_NR;
typedef enum ASN_RRC_MRDC_Parameters__ul_SwitchingTimeEUTRA_NR {
	ASN_RRC_MRDC_Parameters__ul_SwitchingTimeEUTRA_NR_type1	= 0,
	ASN_RRC_MRDC_Parameters__ul_SwitchingTimeEUTRA_NR_type2	= 1
} e_ASN_RRC_MRDC_Parameters__ul_SwitchingTimeEUTRA_NR;
typedef enum ASN_RRC_MRDC_Parameters__simultaneousRxTxInterBandENDC {
	ASN_RRC_MRDC_Parameters__simultaneousRxTxInterBandENDC_supported	= 0
} e_ASN_RRC_MRDC_Parameters__simultaneousRxTxInterBandENDC;
typedef enum ASN_RRC_MRDC_Parameters__asyncIntraBandENDC {
	ASN_RRC_MRDC_Parameters__asyncIntraBandENDC_supported	= 0
} e_ASN_RRC_MRDC_Parameters__asyncIntraBandENDC;
typedef enum ASN_RRC_MRDC_Parameters__ext1__dualPA_Architecture {
	ASN_RRC_MRDC_Parameters__ext1__dualPA_Architecture_supported	= 0
} e_ASN_RRC_MRDC_Parameters__ext1__dualPA_Architecture;
typedef enum ASN_RRC_MRDC_Parameters__ext1__intraBandENDC_Support_v1540 {
	ASN_RRC_MRDC_Parameters__ext1__intraBandENDC_Support_v1540_non_contiguous	= 0,
	ASN_RRC_MRDC_Parameters__ext1__intraBandENDC_Support_v1540_both	= 1
} e_ASN_RRC_MRDC_Parameters__ext1__intraBandENDC_Support_v1540;
typedef enum ASN_RRC_MRDC_Parameters__ext1__ul_TimingAlignmentEUTRA_NR {
	ASN_RRC_MRDC_Parameters__ext1__ul_TimingAlignmentEUTRA_NR_required	= 0
} e_ASN_RRC_MRDC_Parameters__ext1__ul_TimingAlignmentEUTRA_NR;

/* ASN_RRC_MRDC-Parameters */
typedef struct ASN_RRC_MRDC_Parameters {
	long	*singleUL_Transmission;	/* OPTIONAL */
	long	*dynamicPowerSharing;	/* OPTIONAL */
	long	*tdm_Pattern;	/* OPTIONAL */
	long	*ul_SharingEUTRA_NR;	/* OPTIONAL */
	long	*ul_SwitchingTimeEUTRA_NR;	/* OPTIONAL */
	long	*simultaneousRxTxInterBandENDC;	/* OPTIONAL */
	long	*asyncIntraBandENDC;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct ASN_RRC_MRDC_Parameters__ext1 {
		long	*dualPA_Architecture;	/* OPTIONAL */
		long	*intraBandENDC_Support_v1540;	/* OPTIONAL */
		long	*ul_TimingAlignmentEUTRA_NR;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_MRDC_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_singleUL_Transmission_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_dynamicPowerSharing_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_tdm_Pattern_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_ul_SharingEUTRA_NR_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_ul_SwitchingTimeEUTRA_NR_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_simultaneousRxTxInterBandENDC_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_asyncIntraBandENDC_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_dualPA_Architecture_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_intraBandENDC_Support_v1540_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_ul_TimingAlignmentEUTRA_NR_26;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_MRDC_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_MRDC_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_MRDC_Parameters_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_MRDC_Parameters_H_ */
#include <asn_internal.h>
