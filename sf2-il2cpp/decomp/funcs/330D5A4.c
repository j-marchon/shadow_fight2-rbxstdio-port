// GIAMPEGMNHE$$IBJOMPOLPCC @ RVA 0x330D5A4

System_Xml_XmlDocument_o *
GIAMPEGMNHE__IBJOMPOLPCC
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t CFHHLCMKGCH,
          bool ADDHOAPEIJI,bool ANKDLALOKMH,bool JOIPGMAIEJD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Xml_XmlReaderSettings_o *__this;
  System_String_o *CJNHFNHJHPE;
  System_String_o *value;
  System_Xml_XmlDocument_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)ADDHOAPEIJI;
                    /* try { // try from 0340d5a4 to 0350d5b3 has its CatchHandler @ 0340d730 */
  method_00 = (MethodInfo *)(ulong)(uint)CFHHLCMKGCH;
                    /* try { // try from 0340d5bc to 0350d5c3 has its CatchHandler @ 0340d6ec */
                    /* try { // try from 0340d5cc to 0350d5d3 has its CatchHandler @ 0340d704 */
  if ((DAT_0456779c & 1) == 0) {
                    /* try { // try from 0340d5d8 to 0350d5df has its CatchHandler @ 0340d6f4 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0340d5e8 to 0350d5ef has its CatchHandler @ 0340d708 */
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
                    /* try { // try from 0340d5f0 to 0350d603 has its CatchHandler @ 0340d6fc */
    FUN_01bab630(&System_Xml_XmlReaderSettings_TypeInfo);
    FUN_01bab630(&StringLiteral_5887);
                    /* try { // try from 0340d604 to 0350d60f has its CatchHandler @ 0340d6f0 */
    DAT_0456779c = 1;
  }
                    /* try { // try from 0340d610 to 0350d62f has its CatchHandler @ 0340d740 */
  pSVar3 = GIAMPEGMNHE__JIGCIBMKDAL(EIJDDKJONFO,ILENGCADNIH,method_00);
  iVar2 = GIAMPEGMNHE__ABNFMFGPMMN(pSVar3,CFHHLCMKGCH,method_00);
  __this = (System_Xml_XmlReaderSettings_o *)
           thunk_FUN_01bda818(System_Xml_XmlReaderSettings_TypeInfo);
                    /* try { // try from 0340d640 to 0350d64b has its CatchHandler @ 0340d700 */
  System_Xml_XmlReaderSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this == (System_Xml_XmlReaderSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0340d64c to 0350d6d7 has its CatchHandler @ 0340d318 */
  System_Xml_XmlReaderSettings__set_IgnoreComments(__this,ADDHOAPEIJI,(MethodInfo *)0x0);
  if (iVar2 == 1) {
    CJNHFNHJHPE = CMEBCBKGFFL__LMCHNOGAEHE(pSVar3,(MethodInfo *)0x0);
  }
  else if (iVar2 == 2) {
    CJNHFNHJHPE = CMEBCBKGFFL__IKCJLINAPOA(pSVar3,(MethodInfo *)0x0);
  }
  else {
    CJNHFNHJHPE = (System_String_o *)0x0;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (!bVar1) {
    if (iVar2 == 1) {
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = IKMOIKFPPBF__JCDHIOHIFEL(pSVar3,(MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 0340d6d8 to 0350d6db has its CatchHandler @ 0340d720 */
        if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0340d6dc to 0350d6df has its CatchHandler @ 0340d71c */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0340d6e0 to 0350d6e3 has its CatchHandler @ 0340d6f8 */
                    /* try { // try from 0340d6e4 to 0350d763 has its CatchHandler @ 0340d318 */
                    /* catch() { ... } // from try @ 0340d538 with catch @ 0340d6e8 */
        value = IKMOIKFPPBF__PCPAFLBHBMF(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d5bc with catch @ 0340d6ec */
                    /* catch() { ... } // from try @ 0340d604 with catch @ 0340d6f0 */
                    /* catch() { ... } // from try @ 0340d5d8 with catch @ 0340d6f4 */
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d6e0 with catch @ 0340d6f8 */
                    /* catch() { ... } // from try @ 0340d5f0 with catch @ 0340d6fc */
        if (!bVar1) {
          CJNHFNHJHPE = value;
        }
      }
    }
                    /* catch() { ... } // from try @ 0340d640 with catch @ 0340d700 */
                    /* catch() { ... } // from try @ 0340d5cc with catch @ 0340d704 */
                    /* catch() { ... } // from try @ 0340d5e8 with catch @ 0340d708 */
                    /* catch() { ... } // from try @ 0340d4dc with catch @ 0340d70c */
    pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC(CJNHFNHJHPE,__this,JOIPGMAIEJD,method_01);
                    /* catch() { ... } // from try @ 0340d580 with catch @ 0340d710 */
    if (pSVar4 != (System_Xml_XmlDocument_o *)0x0) {
      return pSVar4;
    }
  }
                    /* catch() { ... } // from try @ 0340d568 with catch @ 0340d714 */
                    /* catch() { ... } // from try @ 0340d4e8 with catch @ 0340d718 */
                    /* catch() { ... } // from try @ 0340d6dc with catch @ 0340d71c */
                    /* catch() { ... } // from try @ 0340d6d8 with catch @ 0340d720 */
                    /* catch() { ... } // from try @ 0340d508 with catch @ 0340d724 */
                    /* catch() { ... } // from try @ 0340d500 with catch @ 0340d728 */
  pSVar3 = System_String__Concat(StringLiteral_5887,pSVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d4c4 with catch @ 0340d72c */
                    /* catch() { ... } // from try @ 0340d5a4 with catch @ 0340d730 */
                    /* catch() { ... } // from try @ 0340d59c with catch @ 0340d734 */
                    /* catch() { ... } // from try @ 0340d58c with catch @ 0340d738 */
                    /* catch() { ... } // from try @ 0340d494 with catch @ 0340d73c */
                    /* catch() { ... } // from try @ 0340d610 with catch @ 0340d740 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0340d53c with catch @ 0340d744 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0340d4b0 with catch @ 0340d748 */
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0340d764 to 0350d767 has its CatchHandler @ 0340d790 */
                    /* try { // try from 0340d768 to 0350d79f has its CatchHandler @ 0340d318 */
  return (System_Xml_XmlDocument_o *)0x0;
}

