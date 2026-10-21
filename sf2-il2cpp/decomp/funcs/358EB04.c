// AEBBCOILLIA$$AJJLBBCJAAL @ RVA 0x358EB04

System_String_o *
AEBBCOILLIA__AJJLBBCJAAL(AEBBCOILLIA_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_Nullable_int__o SVar6;
  int32_t iVar7;
  
  if ((DAT_04568d62 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6156);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6157);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6158);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6159);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6160);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6161);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568d62 = 1;
  }
  pSVar2 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  pSVar3 = StringLiteral_1;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar3 = pSVar2;
  }
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = System_String__ToUpper(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0368ec00 to 0378ec07 has its CatchHandler @ 0368ec84 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6156,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0368ec20 to 0378ec2b has its CatchHandler @ 0368ec78 */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0368ec2c to 0378ec6f has its CatchHandler @ 0368e9a0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6157,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar3,pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      SVar6 = AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* try { // try from 0368ec70 to 0378ec73 has its CatchHandler @ 0368ec80 */
      if (((ulong)SVar6.fields & 0xff) == 0) {
                    /* try { // try from 0368ecf4 to 0378ecfb has its CatchHandler @ 0368edc4 */
                    /* try { // try from 0368ecfc to 0378ed7f has its CatchHandler @ 0368e9a0 */
        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar7 = EOAOCPLIKOI_TypeInfo->static_fields->LHKIPKIGEHA;
      }
      else {
                    /* try { // try from 0368ec74 to 0378ec77 has its CatchHandler @ 0368ec7c */
                    /* catch() { ... } // from try @ 0368ec20 with catch @ 0368ec78
                       try { // try from 0368ec78 to 0378ec9b has its CatchHandler @ 0368e9a0 */
                    /* catch() { ... } // from try @ 0368ec74 with catch @ 0368ec7c */
        iVar7 = SVar6.fields.value;
                    /* catch() { ... } // from try @ 0368ec70 with catch @ 0368ec80 */
                    /* catch() { ... } // from try @ 0368ec00 with catch @ 0368ec84 */
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EOAOCPLIKOI_TypeInfo->static_fields->LHKIPKIGEHA = iVar7;
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6158,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6159,
                 (MethodInfo *)0x0);
                    /* try { // try from 0368ed80 to 0378ed83 has its CatchHandler @ 0368edc0 */
                    /* try { // try from 0368ed84 to 0378ed87 has its CatchHandler @ 0368edbc */
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0368ed88 to 0378eda7 has its CatchHandler @ 0368e9a0 */
                    /* catch() { ... } // from try @ 0368ec9c with catch @ 0368ed98 */
      pSVar2 = System_Int32__ToString
                         ((int)EOAOCPLIKOI_TypeInfo->static_fields + 0x38,(MethodInfo *)0x0);
                    /* try { // try from 0368eda8 to 0378edbb has its CatchHandler @ 0368ee34 */
                    /* catch() { ... } // from try @ 0368ed84 with catch @ 0368edbc
                       try { // try from 0368edbc to 0378eddb has its CatchHandler @ 0368e9a0 */
                    /* catch() { ... } // from try @ 0368ed80 with catch @ 0368edc0 */
      pSVar3 = System_String__Concat(pSVar3,pSVar2,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0368ec9c to 0378ec9f has its CatchHandler @ 0368ed98 */
                    /* try { // try from 0368eca0 to 0378ecf3 has its CatchHandler @ 0368e9a0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6160,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6161,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368ecf4 with catch @ 0368edc4 */
  FUN_01bab8c8();
}

