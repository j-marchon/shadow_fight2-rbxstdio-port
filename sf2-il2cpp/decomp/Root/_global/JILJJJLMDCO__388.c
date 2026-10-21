// TypeDefIndex 388
// Namespace: 
// public static class JILJJJLMDCO
// Fields:
//   private static FileDescriptor GPNOKFJEHKO; // 0x0

// ===== public static FileDescriptor FFHIHGCDGAK()  [RVA 0x347E22C]
// JILJJJLMDCO$$FFHIHGCDGAK @ RVA 0x347E22C

Google_Protobuf_Reflection_FileDescriptor_o * JILJJJLMDCO__FFHIHGCDGAK(MethodInfo *method)

{
  if ((DAT_0456836f & 1) == 0) {
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_0456836f = 1;
  }
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return JILJJJLMDCO_TypeInfo->static_fields->GPNOKFJEHKO;
}


// ===== private static void .cctor()  [RVA 0x347E284]
// JILJJJLMDCO$$.cctor @ RVA 0x347E284

void JILJJJLMDCO___cctor(MethodInfo *method)

{
  Il2CppType *handle;
  System_String_array *pSVar1;
  System_String_o *s;
  System_Byte_array *descriptorData;
  Google_Protobuf_Reflection_FileDescriptor_array *dependencies;
  System_Type_array *nestedEnums;
  System_Type_o *pSVar2;
  long lVar3;
  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array *nestedTypes;
  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o *pGVar4;
  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array *nestedTypes_00;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar5;
  undefined8 uVar6;
  Google_Protobuf_MessageParser_AFLJMCMKCIG__o *parser;
  Google_Protobuf_MessageParser_DBNIPENAEKO__o *parser_00;
  Google_Protobuf_MessageParser_LMEMJBOBHBE__o *parser_01;
  Google_Protobuf_MessageParser_CADIGFIBFEN__o *parser_02;
  Google_Protobuf_MessageParser_PGICCMFLDPI__o *parser_03;
  Google_Protobuf_MessageParser_GPKDMPJJEOO__o *parser_04;
  Google_Protobuf_MessageParser_OKKPDLAJBFD__o *parser_05;
  Google_Protobuf_MessageParser_NIGMCJIMBHO__o *parser_06;
  
  if ((DAT_04568370 & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_var);
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&AMEPLBIFKHC_var);
    FUN_01bab630(&CADIGFIBFEN_var);
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_var);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&DLIONECMCGE_var);
    FUN_01bab630(&Google_Protobuf_Reflection_FileDescriptor___TypeInfo);
    FUN_01bab630(&Google_Protobuf_Reflection_FileDescriptor_TypeInfo);
    FUN_01bab630(&GIJADLLNPBG_var);
    FUN_01bab630(&GKBHPCLCKJB_var);
    FUN_01bab630(&GPKDMPJJEOO_var);
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Reflection_GeneratedClrTypeInfo___TypeInfo);
    FUN_01bab630(&Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo);
    FUN_01bab630(&IBKKEEIKKNN_var);
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    FUN_01bab630(&LACJGHLKINB_var);
    FUN_01bab630(&LMEMJBOBHBE_var);
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
    FUN_01bab630(&NIGMCJIMBHO_var);
                    /* try { // try from 0357e3c8 to 0367e5af has its CatchHandler @ 0357e3c8
                       catch() { ... } // from try @ 0357e3c8 with catch @ 0357e3c8
                       catch() { ... } // from try @ 0357e958 with catch @ 0357e3c8
                       catch() { ... } // from try @ 0357ea18 with catch @ 0357e3c8
                       catch() { ... } // from try @ 0357ea20 with catch @ 0357e3c8
                       catch() { ... } // from try @ 0357eb7c with catch @ 0357e3c8 */
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    FUN_01bab630(&OKKPDLAJBFD_var);
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_var);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&System_Type___TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_15142/*"Y2tSZWFzb24SEQoJaW5pdGlhdG9yGAIgASgJEhcKD2Jhbl9taWxsaXNfbGVm"*/);
    FUN_01bab630(&StringLiteral_10787/*"RVJWRVJfT1ZFUkxPQUQQzgESDgoJTUFYX1ZBTFVFEI9OKvUBCghBdXRoVHlw"*/);
    FUN_01bab630(&StringLiteral_15044/*"X3Rva2VuGAMgAygLMhEuY29tbW9uLkF1dGhUb2tlbhIQCghleHRfZGF0YRgE"*/);
    FUN_01bab630(&StringLiteral_12718/*"TE9HSU4QyAESHwoaUExBWUVSX0FMUkVBRFlfU1RBUlRfTE9HSU4QyQESKwom"*/);
    FUN_01bab630(&StringLiteral_7172/*"IAEoCSJbCglLaWNrRXZlbnQSIgoGcmVhc29uGAEgASgOMhIuY29tbW9uLktp"*/);
    FUN_01bab630(&StringLiteral_15261/*"ZRIICgROT05FEAASCgoGREVWSUNFEAESDwoLR0FNRV9DRU5URVIQAhIPCgtH"*/);
    FUN_01bab630(&StringLiteral_11650/*"SURfU0VTU0lPTl9TVEFUVVMQZBIgChtTRVNTSU9OX0FMUkVBRFlfU1RBUlRf"*/);
    FUN_01bab630(&StringLiteral_14069/*"U19YU09MTEEQAxINCglQU19VTU9ORVkQBBINCglQU19IT09MQUkQBRISCg5Q"*/);
    FUN_01bab630(&StringLiteral_11491/*"S19GT1JfTUFJTlRFTkFOQ0UQAxILCgdERUxFVEVEEAQSKQolUFJPRklMRV9U"*/);
    FUN_01bab630(&StringLiteral_14830/*"VjIQDRIJCgVORUtLSRAOEgkKBVNURUFNEA8SHAoYTklOVEVORE9fU0VSVklD"*/);
    FUN_01bab630(&StringLiteral_2794/*"AiABKAk6AjgBImYKDFBpbmdSZXNwb25zZRIqCg9jbGllbnRUaW1lc3RhbXAY"*/);
    FUN_01bab630(&StringLiteral_14082/*"UFNfTk9XX0dHEAgSDAoIUFNfU1RFQU0QCRIOCgpQU19TQU5EQk9YEApCLwoZ"*/);
    FUN_01bab630(&StringLiteral_15276/*"ZW4YAiABKAsyES5jb21tb24uQXV0aFRva2VuEi8KFHNlY29uZGFyeV9hdXRo"*/);
    FUN_01bab630(&StringLiteral_4233/*"CgZIT09MQUkQBxIKCgZIVUFXRUkQCBIKCgZYU09MTEEQCRIOCgpQVUJMSUNf"*/);
    FUN_01bab630(&StringLiteral_11643/*"SU5WQUxJRF9MT0dJTl9PUl9QQVNTV09SRBDLARIaChVJTlZBTElEX1NFQ1VS"*/);
    FUN_01bab630(&StringLiteral_16711/*"blJlcXVlc3QSDwoHdmVyc2lvbhgBIAEoBRItChJwcmltYXJ5X2F1dGhfdG9r"*/);
    FUN_01bab630(&StringLiteral_15031/*"X0xPR0lOEAASBwoDQkFOEAESEwoPSU5WQUxJRF9WRVJTSU9OEAISGAoUTE9D"*/);
    FUN_01bab630(&StringLiteral_2657/*"ASABKAsyES5jb21tb24uVGltZXN0YW1wEioKD3NlcnZlclRpbWVzdGFtcBgC"*/);
    FUN_01bab630(&StringLiteral_10751/*"REVGQVVMVBAAEg4KClBTX1NBTVNVTkcQARINCglQU19IVUFXRUkQAhINCglQ"*/);
    FUN_01bab630(&StringLiteral_12701/*"T09HTEVfUExBWRADEgYKAlZLEAQSBgoCRkIQBRINCglTWVNURU1fSUQQBhIK"*/);
    FUN_01bab630(&StringLiteral_9410/*"NewGooglePlay"*/);
    FUN_01bab630(&StringLiteral_14204/*"UkFOU0ZFUlJFRF9GUk9NX1lPVVJfQUNDT1VOVBAFEicKI1BST0ZJTEVfVFJB"*/);
    FUN_01bab630(&StringLiteral_7904/*"Io0BCgtQaW5nUmVxdWVzdBIkCgl0aW1lc3RhbXAYASABKAsyES5jb21tb24u"*/);
    FUN_01bab630(&StringLiteral_4240/*"Cgxjb21tb24ucHJvdG8SBmNvbW1vbiI5CglBdXRoVG9rZW4SHgoEdHlwZRgB"*/);
    FUN_01bab630(&StringLiteral_11778/*"SecondaryAuthToken"*/);
    FUN_01bab630(&StringLiteral_16945/*"chIHCgNBU0MQABIICgRERVNDEAEqxgEKDVBheW1lbnRTeXN0ZW0SDgoKUFNf"*/);
    FUN_01bab630(&StringLiteral_2663/*"ASgIEiQKCXRpbWVzdGFtcBgCIAEoCzIRLmNvbW1vbi5UaW1lc3RhbXASFwoP"*/);
    FUN_01bab630(&StringLiteral_7174/*"IAEoDjIQLmNvbW1vbi5BdXRoVHlwZRIMCgRkYXRhGAIgASgJIpEBCgxMb2dp"*/);
    FUN_01bab630(&StringLiteral_10314/*"PlayerExists"*/);
    FUN_01bab630(&StringLiteral_14670/*"VGltZXN0YW1wEisKBGRhdGEYAiADKAsyHS5jb21tb24uUGluZ1JlcXVlc3Qu"*/);
    FUN_01bab630(&StringLiteral_11642/*"SU5WQUxJRF9DTElFTlRfU0VSVkVSX1BST1RPQ09MX1ZFUlNJT04QygESHgoZ"*/);
    FUN_01bab630(&StringLiteral_17103/*"cnUubmVra2kuY29tbW9ucy5wcm90b2J1ZkIJQ29tbW9uRFRPqgIGY29tbW9u"*/);
                    /* try { // try from 0357e5b0 to 0367e5d7 has its CatchHandler @ 0357eae8 */
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_4582/*"ConfigSign"*/);
    FUN_01bab630(&StringLiteral_10465/*"PrimaryAuthToken"*/);
    FUN_01bab630(&StringLiteral_6122/*"ExtData"*/);
    FUN_01bab630(&StringLiteral_13830/*"TktOT1dOEAASCwoHU1VDQ0VTUxABEgoKBkZBSUxFRBACKh4KCVNvcnRPcmRl"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_11653/*"SVRZX0lORk8QzAESGwoWSU5WQUxJRF9DT05GSUdfVkVSU0lPThDNARIUCg9T"*/);
    FUN_01bab630(&StringLiteral_3392/*"BanMillisLeft"*/);
    FUN_01bab630(&StringLiteral_11866/*"ServerTimestamp"*/);
                    /* try { // try from 0357e614 to 0367e63b has its CatchHandler @ 0357eae4 */
    FUN_01bab630(&StringLiteral_14068/*"U19HSUZUX1NZU1RFTRAGEhgKFFBTX0RPTkFUSU9OX0NVUlJFTkNZEAcSDQoJ"*/);
    FUN_01bab630(&StringLiteral_5106/*"Data"*/);
    FUN_01bab630(&StringLiteral_3227/*"AuthStatus"*/);
    FUN_01bab630(&StringLiteral_10754/*"RGF0YUVudHJ5GisKCURhdGFFbnRyeRILCgNrZXkYASABKAkSDQoFdmFsdWUY"*/);
    FUN_01bab630(&StringLiteral_17547/*"dBgDIAEoAyKOAQoNSm9pblpvbmVFdmVudBIVCg1wbGF5ZXJfZXhpc3RzGAEg"*/);
                    /* try { // try from 0357e650 to 0367e657 has its CatchHandler @ 0357ead8 */
    FUN_01bab630(&StringLiteral_13824/*"Timestamp"*/);
                    /* try { // try from 0357e660 to 0367e667 has its CatchHandler @ 0357eadc */
    FUN_01bab630(&StringLiteral_4433/*"ClientTimestamp"*/);
    FUN_01bab630(&StringLiteral_6000/*"EwoLY29uZmlnX3NpZ24YASABKAwqxQIKEFJlcXVlc3RFcnJvckNvZGUSBgoC"*/);
                    /* try { // try from 0357e678 to 0367e67f has its CatchHandler @ 0357ead4 */
    FUN_01bab630(&StringLiteral_15169/*"YgZwcm90bzM="*/);
                    /* try { // try from 0357e684 to 0367e68b has its CatchHandler @ 0357ead0 */
    FUN_01bab630(&StringLiteral_16727/*"bmV3X2dvb2dsZV9wbGF5GAQgASgIEicKC2F1dGhfc3RhdHVzGAUgASgOMhIu"*/);
                    /* try { // try from 0357e694 to 0367e69b has its CatchHandler @ 0357eac0 */
    FUN_01bab630(&StringLiteral_13832/*"TlNGRVJSRURfVE9fWU9VUl9BQ0NPVU5UEAYqMgoKQXV0aFN0YXR1cxILCgdV"*/);
                    /* try { // try from 0357e69c to 0367e6af has its CatchHandler @ 0357eabc */
    FUN_01bab630(&StringLiteral_15137/*"Y29tbW9uLkF1dGhTdGF0dXMiGgoJVGltZXN0YW1wEg0KBXZhbHVlGAEgASgD"*/);
    FUN_01bab630(&StringLiteral_7173/*"IAEoCzIRLmNvbW1vbi5UaW1lc3RhbXAiKAoRVXBkYXRlQ29uZmlnRXZlbnQS"*/);
                    /* try { // try from 0357e6b4 to 0367e6bf has its CatchHandler @ 0357eacc */
    FUN_01bab630(&StringLiteral_14765/*"Version"*/);
    FUN_01bab630(&StringLiteral_12703/*"T0sQABIJCgVFUlJPUhABEhMKD0lOVkFMSURfUkVRVUVTVBACEhoKFklOVkFM"*/);
                    /* try { // try from 0357e6d0 to 0367e6d7 has its CatchHandler @ 0357eaa4 */
    FUN_01bab630(&StringLiteral_7542/*"Initiator"*/);
    FUN_01bab630(&StringLiteral_11490/*"S0VZEAoSDQoJQ0FSRV9HQU1FEAsSBwoDRUdTEAwSEgoOR09PR0xFX1BMQVlf"*/);
                    /* try { // try from 0357e6e0 to 0367e6e7 has its CatchHandler @ 0357ea94 */
    FUN_01bab630(&StringLiteral_10785/*"RV9BQ0NPVU5UEBAqwAEKCktpY2tSZWFzb24SGQoVQU5PVEhFUl9TRVNTSU9O"*/);
    FUN_01bab630(&StringLiteral_11080/*"Reason"*/);
                    /* try { // try from 0357e6f8 to 0367e6ff has its CatchHandler @ 0357ea98 */
    DAT_04568370 = 1;
  }
                    /* try { // try from 0357e704 to 0367e70b has its CatchHandler @ 0357eaac */
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,0x2b);
  if (pSVar1 == (System_String_array *)0x0) goto LAB_0357f9d8;
  if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 0357e71c to 0367e723 has its CatchHandler @ 0357eab0 */
                    /* try { // try from 0357e724 to 0367e737 has its CatchHandler @ 0357eaa0 */
    pSVar1->m_Items[0] = StringLiteral_4240/*"Cgxjb21tb24ucHJvdG8SBmNvbW1vbiI5CglBdXRoVG9rZW4SHgoEdHlwZRgB"*/;
    thunk_FUN_01c20e04(pSVar1->m_Items);
                    /* try { // try from 0357e73c to 0367e747 has its CatchHandler @ 0357eaa8 */
    if (1 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e748 to 0367e753 has its CatchHandler @ 0357ea9c */
      pSVar1->m_Items[1] = StringLiteral_7174/*"IAEoDjIQLmNvbW1vbi5BdXRoVHlwZRIMCgRkYXRhGAIgASgJIpEBCgxMb2dp"*/;
                    /* try { // try from 0357e75c to 0367e76f has its CatchHandler @ 0357eae0 */
      thunk_FUN_01c20e04(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = StringLiteral_16711/*"blJlcXVlc3QSDwoHdmVyc2lvbhgBIAEoBRItChJwcmltYXJ5X2F1dGhfdG9r"*/;
                    /* try { // try from 0357e784 to 0367e78b has its CatchHandler @ 0357ea40 */
        thunk_FUN_01c20e04(pSVar1->m_Items + 2);
        if (3 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e7a0 to 0367e7a7 has its CatchHandler @ 0357ea68 */
          pSVar1->m_Items[3] = StringLiteral_15276/*"ZW4YAiABKAsyES5jb21tb24uQXV0aFRva2VuEi8KFHNlY29uZGFyeV9hdXRo"*/;
                    /* try { // try from 0357e7a8 to 0367e7b7 has its CatchHandler @ 0357eab8 */
          thunk_FUN_01c20e04(pSVar1->m_Items + 3);
          if (4 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e7c8 to 0367e7cf has its CatchHandler @ 0357ea74 */
            pSVar1->m_Items[4] = StringLiteral_15044/*"X3Rva2VuGAMgAygLMhEuY29tbW9uLkF1dGhUb2tlbhIQCghleHRfZGF0YRgE"*/;
            thunk_FUN_01c20e04(pSVar1->m_Items + 4);
                    /* try { // try from 0357e7d8 to 0367e7df has its CatchHandler @ 0357ea80 */
            if (5 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e7f0 to 0367e7f7 has its CatchHandler @ 0357ea8c */
              pSVar1->m_Items[5] = StringLiteral_7172/*"IAEoCSJbCglLaWNrRXZlbnQSIgoGcmVhc29uGAEgASgOMhIuY29tbW9uLktp"*/;
                    /* try { // try from 0357e7fc to 0367e803 has its CatchHandler @ 0357ea78 */
              thunk_FUN_01c20e04(pSVar1->m_Items + 5);
              if (6 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e814 to 0367e81b has its CatchHandler @ 0357ea84 */
                    /* try { // try from 0357e81c to 0367e82f has its CatchHandler @ 0357ea70 */
                pSVar1->m_Items[6] = StringLiteral_15142/*"Y2tSZWFzb24SEQoJaW5pdGlhdG9yGAIgASgJEhcKD2Jhbl9taWxsaXNfbGVm"*/;
                thunk_FUN_01c20e04(pSVar1->m_Items + 6);
                if (7 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e834 to 0367e83f has its CatchHandler @ 0357ea88 */
                  pSVar1->m_Items[7] = StringLiteral_17547/*"dBgDIAEoAyKOAQoNSm9pblpvbmVFdmVudBIVCg1wbGF5ZXJfZXhpc3RzGAEg"*/;
                  thunk_FUN_01c20e04(pSVar1->m_Items + 7);
                    /* try { // try from 0357e850 to 0367e857 has its CatchHandler @ 0357ea44 */
                  if (8 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e860 to 0367e867 has its CatchHandler @ 0357ea64 */
                    pSVar1->m_Items[8] = StringLiteral_2663/*"ASgIEiQKCXRpbWVzdGFtcBgCIAEoCzIRLmNvbW1vbi5UaW1lc3RhbXASFwoP"*/;
                    thunk_FUN_01c20e04(pSVar1->m_Items + 8);
                    /* try { // try from 0357e878 to 0367e87f has its CatchHandler @ 0357ea60 */
                    if (9 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e884 to 0367e88b has its CatchHandler @ 0357ea54 */
                      pSVar1->m_Items[9] = StringLiteral_16727/*"bmV3X2dvb2dsZV9wbGF5GAQgASgIEicKC2F1dGhfc3RhdHVzGAUgASgOMhIu"*/;
                    /* try { // try from 0357e89c to 0367e8a3 has its CatchHandler @ 0357ea5c */
                      thunk_FUN_01c20e04(pSVar1->m_Items + 9);
                    /* try { // try from 0357e8a4 to 0367e8b7 has its CatchHandler @ 0357ea48 */
                      if (10 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e8bc to 0367e8c7 has its CatchHandler @ 0357ea4c */
                        pSVar1->m_Items[10] = StringLiteral_15137/*"Y29tbW9uLkF1dGhTdGF0dXMiGgoJVGltZXN0YW1wEg0KBXZhbHVlGAEgASgD"*/;
                        thunk_FUN_01c20e04(pSVar1->m_Items + 10);
                    /* try { // try from 0357e8c8 to 0367e8d3 has its CatchHandler @ 0357ea50 */
                        if (0xb < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e8dc to 0367e8ef has its CatchHandler @ 0357ea90 */
                          pSVar1->m_Items[0xb] = StringLiteral_7904/*"Io0BCgtQaW5nUmVxdWVzdBIkCgl0aW1lc3RhbXAYASABKAsyES5jb21tb24u"*/;
                          thunk_FUN_01c20e04(pSVar1->m_Items + 0xb);
                          if (0xc < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e904 to 0367e907 has its CatchHandler @ 0357ea40 */
                            pSVar1->m_Items[0xc] = StringLiteral_14670/*"VGltZXN0YW1wEisKBGRhdGEYAiADKAsyHS5jb21tb24uUGluZ1JlcXVlc3Qu"*/;
                            thunk_FUN_01c20e04(pSVar1->m_Items + 0xc);
                    /* try { // try from 0357e91c to 0367e91f has its CatchHandler @ 0357ea3c */
                    /* try { // try from 0357e920 to 0367e92f has its CatchHandler @ 0357ea6c */
                            if (0xd < (uint)pSVar1->max_length) {
                              pSVar1->m_Items[0xd] = StringLiteral_10754/*"RGF0YUVudHJ5GisKCURhdGFFbnRyeRILCgNrZXkYASABKAkSDQoFdmFsdWUY"*/;
                              thunk_FUN_01c20e04(pSVar1->m_Items + 0xd);
                    /* try { // try from 0357e940 to 0367e943 has its CatchHandler @ 0357ea28 */
                    /* try { // try from 0357e944 to 0367e957 has its CatchHandler @ 0357ea2c */
                              if (0xe < (uint)pSVar1->max_length) {
                    /* try { // try from 0357e958 to 0367ea03 has its CatchHandler @ 0357e3c8 */
                                pSVar1->m_Items[0xe] = StringLiteral_2794/*"AiABKAk6AjgBImYKDFBpbmdSZXNwb25zZRIqCg9jbGllbnRUaW1lc3RhbXAY"*/;
                                thunk_FUN_01c20e04(pSVar1->m_Items + 0xe);
                                if (0xf < (uint)pSVar1->max_length) {
                                  pSVar1->m_Items[0xf] = StringLiteral_2657/*"ASABKAsyES5jb21tb24uVGltZXN0YW1wEioKD3NlcnZlclRpbWVzdGFtcBgC"*/;
                                  thunk_FUN_01c20e04(pSVar1->m_Items + 0xf);
                                  if (0x10 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[0x10] = StringLiteral_7173/*"IAEoCzIRLmNvbW1vbi5UaW1lc3RhbXAiKAoRVXBkYXRlQ29uZmlnRXZlbnQS"*/;
                                    thunk_FUN_01c20e04(pSVar1->m_Items + 0x10);
                                    if (0x11 < (uint)pSVar1->max_length) {
                                      pSVar1->m_Items[0x11] = StringLiteral_6000/*"EwoLY29uZmlnX3NpZ24YASABKAwqxQIKEFJlcXVlc3RFcnJvckNvZGUSBgoC"*/;
                                      thunk_FUN_01c20e04(pSVar1->m_Items + 0x11);
                                      if (0x12 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[0x12] = StringLiteral_12703/*"T0sQABIJCgVFUlJPUhABEhMKD0lOVkFMSURfUkVRVUVTVBACEhoKFklOVkFM"*/;
                    /* try { // try from 0357ea04 to 0367ea07 has its CatchHandler @ 0357eac8 */
                                        thunk_FUN_01c20e04(pSVar1->m_Items + 0x12);
                    /* try { // try from 0357ea08 to 0367ea0b has its CatchHandler @ 0357eac4 */
                    /* try { // try from 0357ea0c to 0367ea0f has its CatchHandler @ 0357eab4 */
                    /* try { // try from 0357ea10 to 0367ea13 has its CatchHandler @ 0357ea7c */
                                        if (0x13 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357ea14 to 0367ea17 has its CatchHandler @ 0357ea58 */
                    /* try { // try from 0357ea18 to 0367ea1b has its CatchHandler @ 0357e3c8 */
                    /* try { // try from 0357ea1c to 0367ea1f has its CatchHandler @ 0357ea30 */
                    /* try { // try from 0357ea20 to 0367eb03 has its CatchHandler @ 0357e3c8 */
                                          pSVar1->m_Items[0x13] = StringLiteral_11650/*"SURfU0VTU0lPTl9TVEFUVVMQZBIgChtTRVNTSU9OX0FMUkVBRFlfU1RBUlRf"*/;
                    /* catch() { ... } // from try @ 0357e940 with catch @ 0357ea28 */
                    /* catch() { ... } // from try @ 0357e944 with catch @ 0357ea2c */
                                          thunk_FUN_01c20e04(pSVar1->m_Items + 0x13);
                    /* catch() { ... } // from try @ 0357ea1c with catch @ 0357ea30 */
                                          if (0x14 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 0357e91c with catch @ 0357ea3c */
                    /* catch() { ... } // from try @ 0357e784 with catch @ 0357ea40
                       catch() { ... } // from try @ 0357e904 with catch @ 0357ea40 */
                    /* catch() { ... } // from try @ 0357e850 with catch @ 0357ea44 */
                    /* catch() { ... } // from try @ 0357e8a4 with catch @ 0357ea48 */
                    /* catch() { ... } // from try @ 0357e8bc with catch @ 0357ea4c */
                                            pSVar1->m_Items[0x14] = StringLiteral_12718/*"TE9HSU4QyAESHwoaUExBWUVSX0FMUkVBRFlfU1RBUlRfTE9HSU4QyQESKwom"*/;
                    /* catch() { ... } // from try @ 0357e8c8 with catch @ 0357ea50 */
                    /* catch() { ... } // from try @ 0357e884 with catch @ 0357ea54 */
                                            thunk_FUN_01c20e04(pSVar1->m_Items + 0x14);
                    /* catch() { ... } // from try @ 0357ea14 with catch @ 0357ea58 */
                    /* catch() { ... } // from try @ 0357e89c with catch @ 0357ea5c */
                    /* catch() { ... } // from try @ 0357e878 with catch @ 0357ea60 */
                                            if (0x15 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 0357e860 with catch @ 0357ea64 */
                    /* catch() { ... } // from try @ 0357e7a0 with catch @ 0357ea68 */
                    /* catch() { ... } // from try @ 0357e920 with catch @ 0357ea6c */
                    /* catch() { ... } // from try @ 0357e81c with catch @ 0357ea70 */
                    /* catch() { ... } // from try @ 0357e7c8 with catch @ 0357ea74 */
                                              pSVar1->m_Items[0x15] = StringLiteral_11642/*"SU5WQUxJRF9DTElFTlRfU0VSVkVSX1BST1RPQ09MX1ZFUlNJT04QygESHgoZ"*/;
                    /* catch() { ... } // from try @ 0357e7fc with catch @ 0357ea78 */
                    /* catch() { ... } // from try @ 0357ea10 with catch @ 0357ea7c */
                                              thunk_FUN_01c20e04(pSVar1->m_Items + 0x15);
                    /* catch() { ... } // from try @ 0357e7d8 with catch @ 0357ea80 */
                    /* catch() { ... } // from try @ 0357e814 with catch @ 0357ea84 */
                    /* catch() { ... } // from try @ 0357e834 with catch @ 0357ea88 */
                                              if (0x16 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 0357e7f0 with catch @ 0357ea8c */
                    /* catch() { ... } // from try @ 0357e8dc with catch @ 0357ea90 */
                    /* catch() { ... } // from try @ 0357e6e0 with catch @ 0357ea94 */
                    /* catch() { ... } // from try @ 0357e6f8 with catch @ 0357ea98 */
                    /* catch() { ... } // from try @ 0357e748 with catch @ 0357ea9c */
                                                pSVar1->m_Items[0x16] = StringLiteral_11643/*"SU5WQUxJRF9MT0dJTl9PUl9QQVNTV09SRBDLARIaChVJTlZBTElEX1NFQ1VS"*/;
                    /* catch() { ... } // from try @ 0357e724 with catch @ 0357eaa0 */
                    /* catch() { ... } // from try @ 0357e6d0 with catch @ 0357eaa4 */
                                                thunk_FUN_01c20e04(pSVar1->m_Items + 0x16);
                    /* catch() { ... } // from try @ 0357e73c with catch @ 0357eaa8 */
                    /* catch() { ... } // from try @ 0357e704 with catch @ 0357eaac */
                    /* catch() { ... } // from try @ 0357e71c with catch @ 0357eab0 */
                                                if (0x17 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 0357ea0c with catch @ 0357eab4 */
                    /* catch() { ... } // from try @ 0357e7a8 with catch @ 0357eab8 */
                    /* catch() { ... } // from try @ 0357e69c with catch @ 0357eabc */
                    /* catch() { ... } // from try @ 0357e694 with catch @ 0357eac0 */
                    /* catch() { ... } // from try @ 0357ea08 with catch @ 0357eac4 */
                                                  pSVar1->m_Items[0x17] = StringLiteral_11653/*"SVRZX0lORk8QzAESGwoWSU5WQUxJRF9DT05GSUdfVkVSU0lPThDNARIUCg9T"*/;
                    /* catch() { ... } // from try @ 0357ea04 with catch @ 0357eac8 */
                    /* catch() { ... } // from try @ 0357e6b4 with catch @ 0357eacc */
                                                  thunk_FUN_01c20e04(pSVar1->m_Items + 0x17);
                    /* catch() { ... } // from try @ 0357e684 with catch @ 0357ead0 */
                    /* catch() { ... } // from try @ 0357e678 with catch @ 0357ead4 */
                    /* catch() { ... } // from try @ 0357e650 with catch @ 0357ead8 */
                                                  if (0x18 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 0357e660 with catch @ 0357eadc */
                    /* catch() { ... } // from try @ 0357e75c with catch @ 0357eae0 */
                    /* catch() { ... } // from try @ 0357e614 with catch @ 0357eae4 */
                    /* catch() { ... } // from try @ 0357e5b0 with catch @ 0357eae8 */
                                                    pSVar1->m_Items[0x18] = StringLiteral_10787/*"RVJWRVJfT1ZFUkxPQUQQzgESDgoJTUFYX1ZBTFVFEI9OKvUBCghBdXRoVHlw"*/;
                                                    thunk_FUN_01c20e04(pSVar1->m_Items + 0x18);
                                                    if (0x19 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357eb04 to 0367eb07 has its CatchHandler @ 0357eb14 */
                    /* catch() { ... } // from try @ 0357eb04 with catch @ 0357eb14 */
                                                      pSVar1->m_Items[0x19] = StringLiteral_15261/*"ZRIICgROT05FEAASCgoGREVWSUNFEAESDwoLR0FNRV9DRU5URVIQAhIPCgtH"*/;
                                                      thunk_FUN_01c20e04(pSVar1->m_Items + 0x19);
                                                      if (0x1a < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[0x1a] = StringLiteral_12701/*"T09HTEVfUExBWRADEgYKAlZLEAQSBgoCRkIQBRINCglTWVNURU1fSUQQBhIK"*/;
                                                        thunk_FUN_01c20e04(pSVar1->m_Items + 0x1a);
                                                        if (0x1b < (uint)pSVar1->max_length) {
                    /* try { // try from 0357eb54 to 0367eb7b has its CatchHandler @ 0357eb90 */
                                                          pSVar1->m_Items[0x1b] = StringLiteral_4233/*"CgZIT09MQUkQBxIKCgZIVUFXRUkQCBIKCgZYU09MTEEQCRIOCgpQVUJMSUNf"*/
                                                          ;
                                                          thunk_FUN_01c20e04(pSVar1->m_Items + 0x1b)
                                                          ;
                                                          if (0x1c < (uint)pSVar1->max_length) {
                    /* try { // try from 0357eb7c to 0367eb87 has its CatchHandler @ 0357e3c8 */
                    /* try { // try from 0357eb88 to 0367eb8f has its CatchHandler @ 0357eb90 */
                                                            pSVar1->m_Items[0x1c] =
                                                                 StringLiteral_11490/*"S0VZEAoSDQoJQ0FSRV9HQU1FEAsSBwoDRUdTEAwSEgoOR09PR0xFX1BMQVlf"*/;
                    /* catch() { ... } // from try @ 0357eb54 with catch @ 0357eb90
                       catch() { ... } // from try @ 0357eb88 with catch @ 0357eb90 */
                                                            thunk_FUN_01c20e04(pSVar1->m_Items +
                                                                               0x1c);
                                                            if (0x1d < (uint)pSVar1->max_length) {
                    /* try { // try from 0357eba4 to 0367ed33 has its CatchHandler @ 0357eba4
                       catch() { ... } // from try @ 0357eba4 with catch @ 0357eba4
                       catch() { ... } // from try @ 0357ee14 with catch @ 0357eba4
                       catch() { ... } // from try @ 0357eedc with catch @ 0357eba4
                       catch() { ... } // from try @ 0357eee4 with catch @ 0357eba4
                       catch() { ... } // from try @ 0357ef94 with catch @ 0357eba4 */
                                                              pSVar1->m_Items[0x1d] =
                                                                   StringLiteral_14830/*"VjIQDRIJCgVORUtLSRAOEgkKBVNURUFNEA8SHAoYTklOVEVORE9fU0VSVklD"*/;
                                                              thunk_FUN_01c20e04(pSVar1->m_Items +
                                                                                 0x1d);
                                                              if (0x1e < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[0x1e] =
                                                                     StringLiteral_10785/*"RV9BQ0NPVU5UEBAqwAEKCktpY2tSZWFzb24SGQoVQU5PVEhFUl9TRVNTSU9O"*/;
                                                                thunk_FUN_01c20e04(pSVar1->m_Items +
                                                                                   0x1e);
                                                                if (0x1f < (uint)pSVar1->max_length)
                                                                {
                                                                  pSVar1->m_Items[0x1f] =
                                                                       StringLiteral_15031/*"X0xPR0lOEAASBwoDQkFOEAESEwoPSU5WQUxJRF9WRVJTSU9OEAISGAoUTE9D"*/;
                                                                  thunk_FUN_01c20e04(pSVar1->m_Items
                                                                                     + 0x1f);
                                                                  if (0x20 < (uint)pSVar1->
                                                  max_length) {
                                                    pSVar1->m_Items[0x20] = StringLiteral_11491/*"S19GT1JfTUFJTlRFTkFOQ0UQAxILCgdERUxFVEVEEAQSKQolUFJPRklMRV9U"*/;
                                                    thunk_FUN_01c20e04(pSVar1->m_Items + 0x20);
                                                    if (0x21 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[0x21] = StringLiteral_14204/*"UkFOU0ZFUlJFRF9GUk9NX1lPVVJfQUNDT1VOVBAFEicKI1BST0ZJTEVfVFJB"*/;
                                                      thunk_FUN_01c20e04(pSVar1->m_Items + 0x21);
                                                      if (0x22 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[0x22] = StringLiteral_13832/*"TlNGRVJSRURfVE9fWU9VUl9BQ0NPVU5UEAYqMgoKQXV0aFN0YXR1cxILCgdV"*/;
                                                        thunk_FUN_01c20e04(pSVar1->m_Items + 0x22);
                                                        if (0x23 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[0x23] =
                                                               StringLiteral_13830/*"TktOT1dOEAASCwoHU1VDQ0VTUxABEgoKBkZBSUxFRBACKh4KCVNvcnRPcmRl"*/;
                                                          thunk_FUN_01c20e04(pSVar1->m_Items + 0x23)
                                                          ;
                                                          if (0x24 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[0x24] =
                                                                 StringLiteral_16945/*"chIHCgNBU0MQABIICgRERVNDEAEqxgEKDVBheW1lbnRTeXN0ZW0SDgoKUFNf"*/;
                                                            thunk_FUN_01c20e04(pSVar1->m_Items +
                                                                               0x24);
                                                            if (0x25 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[0x25] =
                                                                   StringLiteral_10751/*"REVGQVVMVBAAEg4KClBTX1NBTVNVTkcQARINCglQU19IVUFXRUkQAhINCglQ"*/;
                                                              thunk_FUN_01c20e04(pSVar1->m_Items +
                                                                                 0x25);
                                                              if (0x26 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[0x26] =
                                                                     StringLiteral_14069/*"U19YU09MTEEQAxINCglQU19VTU9ORVkQBBINCglQU19IT09MQUkQBRISCg5Q"*/;
                                                                thunk_FUN_01c20e04(pSVar1->m_Items +
                                                                                   0x26);
                                                                if (0x27 < (uint)pSVar1->max_length)
                                                                {
                                                                  pSVar1->m_Items[0x27] =
                                                                       StringLiteral_14068/*"U19HSUZUX1NZU1RFTRAGEhgKFFBTX0RPTkFUSU9OX0NVUlJFTkNZEAcSDQoJ"*/;
                                                                  thunk_FUN_01c20e04(pSVar1->m_Items
                                                                                     + 0x27);
                                                                  if (0x28 < (uint)pSVar1->
                                                  max_length) {
                    /* try { // try from 0357ed34 to 0367ed5b has its CatchHandler @ 0357eef8 */
                                                    pSVar1->m_Items[0x28] = StringLiteral_14082/*"UFNfTk9XX0dHEAgSDAoIUFNfU1RFQU0QCRIOCgpQU19TQU5EQk9YEApCLwoZ"*/;
                                                    thunk_FUN_01c20e04(pSVar1->m_Items + 0x28);
                                                    if (0x29 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[0x29] = StringLiteral_17103/*"cnUubmVra2kuY29tbW9ucy5wcm90b2J1ZkIJQ29tbW9uRFRPqgIGY29tbW9u"*/;
                                                      thunk_FUN_01c20e04(pSVar1->m_Items + 0x29);
                                                      if (0x2a < (uint)pSVar1->max_length) {
                    /* try { // try from 0357ed90 to 0367edbb has its CatchHandler @ 0357eef4 */
                                                        pSVar1->m_Items[0x2a] = StringLiteral_15169/*"YgZwcm90bzM="*/;
                                                        thunk_FUN_01c20e04(pSVar1->m_Items + 0x2a);
                                                        s = System_String__Concat
                                                                      (pSVar1,(MethodInfo *)0x0);
                                                        if ((System_Convert_TypeInfo->_2).
                                                            cctor_finished == 0) {
                                                          thunk_FUN_01ba7564(System_Convert_TypeInfo
                                                                            );
                                                        }
                                                        descriptorData =
                                                             System_Convert__FromBase64String
                                                                       (s,(MethodInfo *)0x0);
                                                        dependencies = (
                                                  Google_Protobuf_Reflection_FileDescriptor_array *)
                                                  FUN_01bab718(
                                                  Google_Protobuf_Reflection_FileDescriptor___TypeInfo
                                                  ,0);
                    /* try { // try from 0357edf8 to 0367ee13 has its CatchHandler @ 0357eef0 */
                                                  nestedEnums = (System_Type_array *)
                                                                FUN_01bab718(System_Type___TypeInfo,
                                                                             6);
                                                  handle = GIJADLLNPBG_var;
                    /* try { // try from 0357ee14 to 0367eed3 has its CatchHandler @ 0357eba4 */
                                                  if ((System_Type_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564(System_Type_TypeInfo);
                                                  }
                                                  pSVar2 = System_Type__GetTypeFromHandle
                                                                     ((System_RuntimeTypeHandle_o)
                                                                      handle,(MethodInfo *)0x0);
                                                  if (nestedEnums == (System_Type_array *)0x0)
                                                  goto LAB_0357f9d8;
                                                  if ((pSVar2 != (System_Type_o *)0x0) &&
                                                     (lVar3 = thunk_FUN_01bda71c(pSVar2,(((
                                                  nestedEnums->obj).klass)->_1).element_class),
                                                  lVar3 == 0)) {
LAB_0357f9dc:
                                                    uVar6 = thunk_FUN_01be8e1c();
                    /* try { // try from 0357f9e0 to 0367f9f3 has its CatchHandler @ 0357fc7c */
                    /* WARNING: Subroutine does not return */
                                                    FUN_01bab798(uVar6,0);
                                                  }
                                                  if ((int)nestedEnums->max_length != 0) {
                                                    nestedEnums->m_Items[0] = pSVar2;
                                                    thunk_FUN_01c20e04(nestedEnums->m_Items,pSVar2);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        DLIONECMCGE_var,
                                                                        (MethodInfo *)0x0);
                                                    if ((pSVar2 != (System_Type_o *)0x0) &&
                                                       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((
                                                  nestedEnums->obj).klass)->_1).element_class),
                                                  lVar3 == 0)) goto LAB_0357f9dc;
                                                  if (1 < (uint)nestedEnums->max_length) {
                                                    nestedEnums->m_Items[1] = pSVar2;
                                                    thunk_FUN_01c20e04(nestedEnums->m_Items + 1,
                                                                       pSVar2);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        LACJGHLKINB_var,
                                                                        (MethodInfo *)0x0);
                    /* try { // try from 0357eed4 to 0367eedb has its CatchHandler @ 0357eefc */
                    /* try { // try from 0357eedc to 0367eedf has its CatchHandler @ 0357eba4 */
                    /* try { // try from 0357eee0 to 0367eee3 has its CatchHandler @ 0357eeec */
                    /* try { // try from 0357eee4 to 0367ef13 has its CatchHandler @ 0357eba4 */
                                                    if ((pSVar2 != (System_Type_o *)0x0) &&
                                                       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((
                                                  nestedEnums->obj).klass)->_1).element_class),
                                                  lVar3 == 0)) goto LAB_0357f9dc;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0357eee0 with catch @ 0357eeec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0357edf8 with catch @ 0357eef0
                        */
                                                  if (2 < (uint)nestedEnums->max_length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0357ed90 with catch @ 0357eef4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0357ed34 with catch @ 0357eef8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0357eed4 with catch @ 0357eefc
                        */
                                                    nestedEnums->m_Items[2] = pSVar2;
                                                    thunk_FUN_01c20e04(nestedEnums->m_Items + 2,
                                                                       pSVar2);
                    /* try { // try from 0357ef14 to 0367ef17 has its CatchHandler @ 0357ef2c */
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        IBKKEEIKKNN_var,
                                                                        (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0357ef14 with catch @ 0357ef2c */
                                                    if ((pSVar2 != (System_Type_o *)0x0) &&
                                                       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((
                                                  nestedEnums->obj).klass)->_1).element_class),
                                                  lVar3 == 0)) goto LAB_0357f9dc;
                                                  if (3 < (uint)nestedEnums->max_length) {
                                                    nestedEnums->m_Items[3] = pSVar2;
                                                    thunk_FUN_01c20e04(nestedEnums->m_Items + 3,
                                                                       pSVar2);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        GKBHPCLCKJB_var,
                                                                        (MethodInfo *)0x0);
                    /* try { // try from 0357ef6c to 0367ef93 has its CatchHandler @ 0357efa8 */
                                                    if ((pSVar2 != (System_Type_o *)0x0) &&
                                                       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((
                                                  nestedEnums->obj).klass)->_1).element_class),
                                                  lVar3 == 0)) goto LAB_0357f9dc;
                                                  if (4 < (uint)nestedEnums->max_length) {
                    /* try { // try from 0357ef94 to 0367ef9f has its CatchHandler @ 0357eba4 */
                                                    nestedEnums->m_Items[4] = pSVar2;
                    /* try { // try from 0357efa0 to 0367efa7 has its CatchHandler @ 0357efa8 */
                                                    thunk_FUN_01c20e04(nestedEnums->m_Items + 4,
                                                                       pSVar2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0357ef6c with catch @ 0357efa8
                       catch(type#2 @ 00000000) { ... } // from try @ 0357efa0 with catch @ 0357efa8
                        */
                    /* try { // try from 0357efac to 0367f24f has its CatchHandler @ 0357efac
                       catch() { ... } // from try @ 0357efac with catch @ 0357efac
                       catch() { ... } // from try @ 0357f348 with catch @ 0357efac
                       catch() { ... } // from try @ 0357f4a0 with catch @ 0357efac
                       catch() { ... } // from try @ 0357f4a8 with catch @ 0357efac
                       catch() { ... } // from try @ 0357f56c with catch @ 0357efac */
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        AMEPLBIFKHC_var,
                                                                        (MethodInfo *)0x0);
                                                    if ((pSVar2 != (System_Type_o *)0x0) &&
                                                       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((
                                                  nestedEnums->obj).klass)->_1).element_class),
                                                  lVar3 == 0)) goto LAB_0357f9dc;
                                                  if (5 < (uint)nestedEnums->max_length) {
                                                    nestedEnums->m_Items[5] = pSVar2;
                                                    thunk_FUN_01c20e04(nestedEnums->m_Items + 5,
                                                                       pSVar2);
                                                    nestedTypes = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)FUN_01bab718(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___TypeInfo
                                                  ,8);
                                                  pSVar2 = System_Type__GetTypeFromHandle
                                                                     ((System_RuntimeTypeHandle_o)
                                                                      AFLJMCMKCIG_var,
                                                                      (MethodInfo *)0x0);
                                                  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564(AFLJMCMKCIG_TypeInfo);
                                                  }
                                                  if (DAT_04566c74 == '\0') {
                                                    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
                                                    DAT_04566c74 = '\x01';
                                                  }
                                                  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  parser = AFLJMCMKCIG_TypeInfo->static_fields->
                                                           NNMODPGDIDE;
                                                  pSVar1 = (System_String_array *)
                                                           FUN_01bab718(string___TypeInfo,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_0357f9d8;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = StringLiteral_13991/*"Type"*/;
                                                    thunk_FUN_01c20e04(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = StringLiteral_5106/*"Data"*/;
                                                      thunk_FUN_01c20e04();
                                                      pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,pSVar2,
                                                             (Google_Protobuf_MessageParser_o *)
                                                             parser,pSVar1,
                                                             (System_String_array *)0x0,
                                                             (System_Type_array *)0x0,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)0x0,(MethodInfo *)0x0);
                                                  if (nestedTypes ==
                                                      (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)0x0) {
LAB_0357f9d8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0357f9d8 to 0367f9df has its CatchHandler @ 0357fc8c */
                                                    FUN_01bab8c8();
                                                  }
                                                  if ((int)nestedTypes->max_length != 0) {
                                                    nestedTypes->m_Items[0] = pGVar4;
                                                    thunk_FUN_01c20e04(nestedTypes->m_Items,pGVar4);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        DBNIPENAEKO_var,
                                                                        (MethodInfo *)0x0);
                                                    if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(DBNIPENAEKO_TypeInfo);
                                                    }
                                                    if (DAT_045683fc == '\0') {
                                                      FUN_01bab630(&DBNIPENAEKO_TypeInfo);
                                                      DAT_045683fc = '\x01';
                                                    }
                                                    if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    parser_00 = DBNIPENAEKO_TypeInfo->static_fields
                                                                ->NNMODPGDIDE;
                                                    pSVar1 = (System_String_array *)
                                                             FUN_01bab718(string___TypeInfo,4);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_0357f9d8;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = StringLiteral_14765/*"Version"*/;
                                                      thunk_FUN_01c20e04(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = StringLiteral_10465/*"PrimaryAuthToken"*/;
                                                        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
                                                        if (2 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[2] = StringLiteral_11778/*"SecondaryAuthToken"*/;
                                                          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
                                                          if (3 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[3] = StringLiteral_6122/*"ExtData"*/;
                                                            thunk_FUN_01c20e04();
                                                            pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                    /* try { // try from 0357f250 to 0367f277 has its CatchHandler @ 0357f4d0 */
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,pSVar2,
                                                             (Google_Protobuf_MessageParser_o *)
                                                             parser_00,pSVar1,
                                                             (System_String_array *)0x0,
                                                             (System_Type_array *)0x0,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)0x0,(MethodInfo *)0x0);
                                                  if (1 < (uint)nestedTypes->max_length) {
                                                    nestedTypes->m_Items[1] = pGVar4;
                                                    thunk_FUN_01c20e04(nestedTypes->m_Items + 1,
                                                                       pGVar4);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        LMEMJBOBHBE_var,
                                                                        (MethodInfo *)0x0);
                    /* try { // try from 0357f2ac to 0367f2d3 has its CatchHandler @ 0357f4cc */
                                                    if ((LMEMJBOBHBE_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(LMEMJBOBHBE_TypeInfo);
                                                    }
                                                    if (DAT_045683fd == '\0') {
                                                      FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
                                                      DAT_045683fd = '\x01';
                                                    }
                    /* try { // try from 0357f2e4 to 0367f2f3 has its CatchHandler @ 0357f4d4 */
                                                    if ((LMEMJBOBHBE_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                    /* try { // try from 0357f300 to 0367f307 has its CatchHandler @ 0357f4bc */
                                                    parser_01 = LMEMJBOBHBE_TypeInfo->static_fields
                                                                ->NNMODPGDIDE;
                                                    pSVar1 = (System_String_array *)
                                                             FUN_01bab718(string___TypeInfo,3);
                    /* try { // try from 0357f30c to 0367f31b has its CatchHandler @ 0357f4b8 */
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_0357f9d8;
                                                    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 0357f31c to 0367f327 has its CatchHandler @ 0357f4b4 */
                                                      pSVar1->m_Items[0] = StringLiteral_11080/*"Reason"*/;
                                                      thunk_FUN_01c20e04(pSVar1->m_Items);
                    /* try { // try from 0357f33c to 0367f347 has its CatchHandler @ 0357f4c8 */
                                                      if (1 < (uint)pSVar1->max_length) {
                    /* try { // try from 0357f348 to 0367f497 has its CatchHandler @ 0357efac */
                                                        pSVar1->m_Items[1] = StringLiteral_7542/*"Initiator"*/;
                                                        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
                                                        if (2 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[2] = StringLiteral_3392/*"BanMillisLeft"*/;
                                                          thunk_FUN_01c20e04();
                                                          pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,pSVar2,
                                                             (Google_Protobuf_MessageParser_o *)
                                                             parser_01,pSVar1,
                                                             (System_String_array *)0x0,
                                                             (System_Type_array *)0x0,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)0x0,(MethodInfo *)0x0);
                                                  if (2 < (uint)nestedTypes->max_length) {
                                                    nestedTypes->m_Items[2] = pGVar4;
                                                    thunk_FUN_01c20e04(nestedTypes->m_Items + 2,
                                                                       pGVar4);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        CADIGFIBFEN_var,
                                                                        (MethodInfo *)0x0);
                                                    if ((CADIGFIBFEN_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(CADIGFIBFEN_TypeInfo);
                                                    }
                                                    if (DAT_045683fe == '\0') {
                                                      FUN_01bab630(&CADIGFIBFEN_TypeInfo);
                                                      DAT_045683fe = '\x01';
                                                    }
                                                    if ((CADIGFIBFEN_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    parser_02 = CADIGFIBFEN_TypeInfo->static_fields
                                                                ->NNMODPGDIDE;
                                                    pSVar1 = (System_String_array *)
                                                             FUN_01bab718(string___TypeInfo,4);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_0357f9d8;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = StringLiteral_10314/*"PlayerExists"*/;
                                                      thunk_FUN_01c20e04(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = StringLiteral_13824/*"Timestamp"*/;
                    /* try { // try from 0357f498 to 0367f49b has its CatchHandler @ 0357f4c4 */
                    /* try { // try from 0357f49c to 0367f49f has its CatchHandler @ 0357f4c0 */
                                                        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
                    /* try { // try from 0357f4a0 to 0367f4a3 has its CatchHandler @ 0357efac */
                    /* try { // try from 0357f4a4 to 0367f4a7 has its CatchHandler @ 0357f4b0 */
                    /* try { // try from 0357f4a8 to 0367f4e7 has its CatchHandler @ 0357efac */
                                                        if (2 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 0357f4a4 with catch @ 0357f4b0 */
                    /* catch() { ... } // from try @ 0357f31c with catch @ 0357f4b4 */
                    /* catch() { ... } // from try @ 0357f30c with catch @ 0357f4b8 */
                    /* catch() { ... } // from try @ 0357f300 with catch @ 0357f4bc */
                                                          pSVar1->m_Items[2] = StringLiteral_9410/*"NewGooglePlay"*/;
                    /* catch() { ... } // from try @ 0357f49c with catch @ 0357f4c0 */
                    /* catch() { ... } // from try @ 0357f498 with catch @ 0357f4c4 */
                                                          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
                    /* catch() { ... } // from try @ 0357f33c with catch @ 0357f4c8 */
                    /* catch() { ... } // from try @ 0357f2ac with catch @ 0357f4cc */
                    /* catch() { ... } // from try @ 0357f250 with catch @ 0357f4d0 */
                                                          if (3 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 0357f2e4 with catch @ 0357f4d4 */
                                                            pSVar1->m_Items[3] = StringLiteral_3227/*"AuthStatus"*/;
                    /* try { // try from 0357f4e8 to 0367f4eb has its CatchHandler @ 0357f504 */
                                                            thunk_FUN_01c20e04();
                                                            pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                    /* catch() { ... } // from try @ 0357f4e8 with catch @ 0357f504 */
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,pSVar2,
                                                             (Google_Protobuf_MessageParser_o *)
                                                             parser_02,pSVar1,
                                                             (System_String_array *)0x0,
                                                             (System_Type_array *)0x0,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)0x0,(MethodInfo *)0x0);
                                                  if (3 < (uint)nestedTypes->max_length) {
                                                    nestedTypes->m_Items[3] = pGVar4;
                    /* try { // try from 0357f544 to 0367f56b has its CatchHandler @ 0357f580 */
                                                    thunk_FUN_01c20e04(nestedTypes->m_Items + 3,
                                                                       pGVar4);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        PGICCMFLDPI_var,
                                                                        (MethodInfo *)0x0);
                                                    if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(PGICCMFLDPI_TypeInfo);
                                                    }
                    /* try { // try from 0357f56c to 0367f577 has its CatchHandler @ 0357efac */
                                                    if (DAT_04566914 == '\0') {
                    /* try { // try from 0357f578 to 0367f57f has its CatchHandler @ 0357f580 */
                    /* catch() { ... } // from try @ 0357f544 with catch @ 0357f580
                       catch() { ... } // from try @ 0357f578 with catch @ 0357f580 */
                                                      FUN_01bab630(&PGICCMFLDPI_TypeInfo);
                                                      DAT_04566914 = '\x01';
                                                    }
                                                    if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                    /* try { // try from 0357f5a0 to 0367f847 has its CatchHandler @ 0357f5a0
                       catch() { ... } // from try @ 0357f5a0 with catch @ 0357f5a0
                       catch() { ... } // from try @ 0357fb5c with catch @ 0357f5a0
                       catch() { ... } // from try @ 0357fc08 with catch @ 0357f5a0
                       catch() { ... } // from try @ 0357fc1c with catch @ 0357f5a0
                       catch() { ... } // from try @ 0357fd60 with catch @ 0357f5a0 */
                                                    parser_03 = PGICCMFLDPI_TypeInfo->static_fields
                                                                ->NNMODPGDIDE;
                                                    pSVar1 = (System_String_array *)
                                                             FUN_01bab718(string___TypeInfo,1);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_0357f9d8;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = StringLiteral_14694/*"Value"*/;
                                                      thunk_FUN_01c20e04();
                                                      pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,pSVar2,
                                                             (Google_Protobuf_MessageParser_o *)
                                                             parser_03,pSVar1,
                                                             (System_String_array *)0x0,
                                                             (System_Type_array *)0x0,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)0x0,(MethodInfo *)0x0);
                                                  if (4 < (uint)nestedTypes->max_length) {
                                                    nestedTypes->m_Items[4] = pGVar4;
                                                    thunk_FUN_01c20e04(nestedTypes->m_Items + 4,
                                                                       pGVar4);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        GPKDMPJJEOO_var,
                                                                        (MethodInfo *)0x0);
                                                    if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(GPKDMPJJEOO_TypeInfo);
                                                    }
                                                    if (DAT_045683ff == '\0') {
                                                      FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
                                                      DAT_045683ff = '\x01';
                                                    }
                                                    if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    parser_04 = GPKDMPJJEOO_TypeInfo->static_fields
                                                                ->NNMODPGDIDE;
                                                    pSVar1 = (System_String_array *)
                                                             FUN_01bab718(string___TypeInfo,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_0357f9d8;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = StringLiteral_13824/*"Timestamp"*/;
                                                      thunk_FUN_01c20e04(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = StringLiteral_5106/*"Data"*/;
                                                        thunk_FUN_01c20e04();
                                                        nestedTypes_00 =
                                                             (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)FUN_01bab718(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___TypeInfo
                                                  ,1);
                                                  pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,pSVar2,
                                                             (Google_Protobuf_MessageParser_o *)
                                                             parser_04,pSVar1,
                                                             (System_String_array *)0x0,
                                                             (System_Type_array *)0x0,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             nestedTypes_00,(MethodInfo *)0x0);
                                                  if (5 < (uint)nestedTypes->max_length) {
                                                    nestedTypes->m_Items[5] = pGVar4;
                                                    thunk_FUN_01c20e04(nestedTypes->m_Items + 5,
                                                                       pGVar4);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        OKKPDLAJBFD_var,
                                                                        (MethodInfo *)0x0);
                                                    if ((OKKPDLAJBFD_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(OKKPDLAJBFD_TypeInfo);
                                                    }
                                                    if (DAT_04568400 == '\0') {
                                                      FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
                                                      DAT_04568400 = '\x01';
                                                    }
                                                    if ((OKKPDLAJBFD_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    parser_05 = OKKPDLAJBFD_TypeInfo->static_fields
                                                                ->NNMODPGDIDE;
                                                    pSVar1 = (System_String_array *)
                                                             FUN_01bab718(string___TypeInfo,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_0357f9d8;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = StringLiteral_4433/*"ClientTimestamp"*/;
                                                      thunk_FUN_01c20e04(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = StringLiteral_11866/*"ServerTimestamp"*/;
                                                        thunk_FUN_01c20e04();
                                                        pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,pSVar2,
                                                             (Google_Protobuf_MessageParser_o *)
                                                             parser_05,pSVar1,
                                                             (System_String_array *)0x0,
                                                             (System_Type_array *)0x0,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0357f848 to 0367f86f has its CatchHandler @ 0357fccc */
                                                  if (6 < (uint)nestedTypes->max_length) {
                                                    nestedTypes->m_Items[6] = pGVar4;
                                                    thunk_FUN_01c20e04(nestedTypes->m_Items + 6,
                                                                       pGVar4);
                                                    pSVar2 = System_Type__GetTypeFromHandle
                                                                       ((System_RuntimeTypeHandle_o)
                                                                        NIGMCJIMBHO_var,
                                                                        (MethodInfo *)0x0);
                                                    if ((NIGMCJIMBHO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(NIGMCJIMBHO_TypeInfo);
                                                    }
                                                    if (DAT_04568401 == '\0') {
                    /* try { // try from 0357f8a4 to 0367f8cb has its CatchHandler @ 0357fcc8 */
                                                      FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
                                                      DAT_04568401 = '\x01';
                                                    }
                                                    if ((NIGMCJIMBHO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    parser_06 = NIGMCJIMBHO_TypeInfo->static_fields
                                                                ->NNMODPGDIDE;
                                                    pSVar1 = (System_String_array *)
                                                             FUN_01bab718(string___TypeInfo,1);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_0357f9d8;
                    /* try { // try from 0357f8e0 to 0367f8e7 has its CatchHandler @ 0357fca0 */
                                                    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 0357f8f0 to 0367f8f7 has its CatchHandler @ 0357fcbc */
                                                      pSVar1->m_Items[0] = StringLiteral_4582/*"ConfigSign"*/;
                                                      thunk_FUN_01c20e04();
                    /* try { // try from 0357f900 to 0367f907 has its CatchHandler @ 0357fcc0 */
                                                      pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                    /* try { // try from 0357f90c to 0367f913 has its CatchHandler @ 0357fca4 */
                    /* try { // try from 0357f91c to 0367f923 has its CatchHandler @ 0357fc9c */
                    /* try { // try from 0357f924 to 0367f937 has its CatchHandler @ 0357fcac */
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,pSVar2,
                                                             (Google_Protobuf_MessageParser_o *)
                                                             parser_06,pSVar1,
                                                             (System_String_array *)0x0,
                                                             (System_Type_array *)0x0,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_array
                                                  *)0x0,(MethodInfo *)0x0);
                                                  if (7 < (uint)nestedTypes->max_length) {
                    /* try { // try from 0357f93c to 0367f947 has its CatchHandler @ 0357fcc4 */
                    /* try { // try from 0357f948 to 0367f953 has its CatchHandler @ 0357fca8 */
                                                    nestedTypes->m_Items[7] = pGVar4;
                                                    thunk_FUN_01c20e04(nestedTypes->m_Items + 7,
                                                                       pGVar4);
                                                    pGVar4 = (
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_o
                                                  *)thunk_FUN_01bda818(
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo_TypeInfo
                                                  );
                    /* try { // try from 0357f96c to 0367f96f has its CatchHandler @ 0357fc74 */
                    /* try { // try from 0357f970 to 0367f97b has its CatchHandler @ 0357fcb8 */
                                                  Google_Protobuf_Reflection_GeneratedClrTypeInfo___ctor
                                                            (pGVar4,nestedEnums,
                                                             (Google_Protobuf_Extension_array *)0x0,
                                                             nestedTypes,(MethodInfo *)0x0);
                                                  if ((
                                                  Google_Protobuf_Reflection_FileDescriptor_TypeInfo
                                                  ->_2).cctor_finished == 0) {
                                                    thunk_FUN_01ba7564();
                                                  }
                    /* try { // try from 0357f98c to 0367f993 has its CatchHandler @ 0357fc88 */
                                                  pGVar5 = 
                                                  Google_Protobuf_Reflection_FileDescriptor__FromGeneratedCode
                                                            (descriptorData,dependencies,pGVar4,
                                                             (MethodInfo *)0x0);
                    /* try { // try from 0357f99c to 0367f9a3 has its CatchHandler @ 0357fc98 */
                    /* try { // try from 0357f9b4 to 0367f9bb has its CatchHandler @ 0357fc90 */
                                                  JILJJJLMDCO_TypeInfo->static_fields->GPNOKFJEHKO =
                                                       pGVar5;
                    /* try { // try from 0357f9c0 to 0367f9c7 has its CatchHandler @ 0357fc80 */
                                                  thunk_FUN_01c20e04(JILJJJLMDCO_TypeInfo->
                                                                     static_fields,pGVar5);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

