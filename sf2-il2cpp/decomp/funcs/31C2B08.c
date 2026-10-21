// ADJEBFOPFFF$$HDPKECMNEML @ RVA 0x31C2B08

BKKPAKHJDKB_o *
ADJEBFOPFFF__HDPKECMNEML
          (ADJEBFOPFFF_o *__this,System_String_o *LFKENPEPPAL,
          System_Action_BKKPAKHJDKB__o *BPCGDKENMAE,System_String_o *KECMHLELNHJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  BKKPAKHJDKB_o *__this_00;
  System_String_o **ppSVar4;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_ENBCJNLAHAC_o *IOOJAJAPMBM;
  ACHLOMELAJE_o *__this_02;
  int64_t iVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *__this_03;
  Il2CppObject *pIVar6;
  EEGDOGKBLNG_o *__this_04;
  FAIJGJCCKJC_o **ppFVar7;
  FAIJGJCCKJC_o *pFVar8;
  Il2CppClass *pIVar9;
  
  if ((DAT_04566c1c & 1) == 0) {
    FUN_01bab630(&BKKPAKHJDKB_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566c1c = 1;
  }
  __this_00 = (BKKPAKHJDKB_o *)thunk_FUN_01bda818(BKKPAKHJDKB_TypeInfo);
  BKKPAKHJDKB___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (BKKPAKHJDKB_o *)0x0) goto LAB_032c2db4;
  ppSVar4 = &(__this_00->fields).EAHLGGCMKJN;
                    /* try { // try from 032c2bb8 to 033c2bdf has its CatchHandler @ 032c38a4 */
  *ppSVar4 = LFKENPEPPAL;
  thunk_FUN_01c20e04(ppSVar4,LFKENPEPPAL);
  BKKPAKHJDKB__GJBEKFJCBOD(__this_00,BPCGDKENMAE,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_01 == (JMDPBFOCHHP_o *)0x0) goto LAB_032c2db4;
  IOOJAJAPMBM = JMDPBFOCHHP__DIFLKMKBENA(__this_01,LFKENPEPPAL,false,(MethodInfo *)0x0);
  if (IOOJAJAPMBM == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* try { // try from 032c2d00 to 033c2dff has its CatchHandler @ 032c273c */
    iVar3 = 3;
    goto LAB_032c2d04;
  }
  bVar2 = System_String__IsNullOrEmpty(KECMHLELNHJ,(MethodInfo *)0x0);
                    /* try { // try from 032c2c14 to 033c2c3f has its CatchHandler @ 032c38a0 */
  if (bVar2) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_02 == (ACHLOMELAJE_o *)0x0) goto LAB_032c2db4;
    iVar5 = ACHLOMELAJE__HEHFNBKGJLP(__this_02,(MethodInfo *)0x0);
                    /* try { // try from 032c2c80 to 033c2c83 has its CatchHandler @ 032c3868 */
    if ((IOOJAJAPMBM->fields).NGMFKGGBHND <= iVar5) goto LAB_032c2c84;
LAB_032c2cf8:
    iVar3 = 1;
LAB_032c2d04:
    (__this_00->fields).HHJIJKJCEOF = iVar3;
    return __this_00;
  }
LAB_032c2c84:
                    /* try { // try from 032c2c8c to 033c2c93 has its CatchHandler @ 032c3858 */
  bVar2 = System_String__IsNullOrEmpty(KECMHLELNHJ,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_03 = (IOOJAJAPMBM->fields).LIJCIBIOOOH;
                    /* try { // try from 032c2c98 to 033c2ca3 has its CatchHandler @ 032c3864 */
    if (__this_03 == (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0)
    goto LAB_032c2db4;
    if (0 < (__this_03->fields)._size) {
      pIVar6 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,0,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                         );
      if (pIVar6 == (Il2CppObject *)0x0) {
LAB_032c2db4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = *(int *)&pIVar6[1].monitor;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_04 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_04 == (EEGDOGKBLNG_o *)0x0) goto LAB_032c2db4;
                    /* try { // try from 032c2ce4 to 033c2cff has its CatchHandler @ 032c385c */
      iVar3 = EEGDOGKBLNG__APFFEAJBAEK
                        (__this_04,(System_String_o *)pIVar6[1].klass,(MethodInfo *)0x0);
      if (iVar1 <= iVar3) {
        pFVar8 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
        FAIJGJCCKJC___ctor(pFVar8,IOOJAJAPMBM,(MethodInfo *)0x0);
        ppFVar7 = &(__this_00->fields).IJDPHADMDKN;
        *ppFVar7 = pFVar8;
        thunk_FUN_01c20e04(ppFVar7,pFVar8);
        (__this_00->fields).HHJIJKJCEOF = -1;
        pIVar9 = pIVar6[1].klass;
        goto LAB_032c2d50;
      }
      goto LAB_032c2cf8;
    }
  }
  pFVar8 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
  FAIJGJCCKJC___ctor(pFVar8,IOOJAJAPMBM,(MethodInfo *)0x0);
  ppFVar7 = &(__this_00->fields).IJDPHADMDKN;
  *ppFVar7 = pFVar8;
  thunk_FUN_01c20e04(ppFVar7,pFVar8);
  (__this_00->fields).HHJIJKJCEOF = -1;
  pIVar9 = StringLiteral_1;
LAB_032c2d50:
  (__this_00->fields).FBNFLPPPEFL = (System_String_o *)pIVar9;
  thunk_FUN_01c20e04();
  return __this_00;
}

