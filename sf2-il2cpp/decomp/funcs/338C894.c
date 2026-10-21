// AJJPCMDCAOB$$AOCNAAHCPHP @ RVA 0x338C894

Sfs2X_Util_ConfigData_o * AJJPCMDCAOB__AOCNAAHCPHP(AJJPCMDCAOB_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  GCPFDLNAFDF_o *pGVar3;
  VirtualInvokeData *pVVar4;
  System_Comparison_T__o *comparison;
  HEOCHMFJJLH_o *pHVar5;
  Sfs2X_Util_ConfigData_o *__this_00;
  Il2CppObject *message;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  undefined8 uVar6;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_HEOCHMFJJLH__o *pSVar7;
  GCPFDLNAFDF_c *pGVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04567bed & 1) == 0) {
    FUN_01bab630(&Method_AJJPCMDCAOB_HPPMALFPDJI__);
    FUN_01bab630(&Method_AJJPCMDCAOB_NMIMHEDLAME__);
    FUN_01bab630(&System_Comparison<HEOCHMFJJLH>_TypeInfo);
    FUN_01bab630(&Sfs2X_Util_ConfigData_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Item__);
    FUN_01bab630(&StringLiteral_20956);
    FUN_01bab630(&StringLiteral_2081);
    DAT_04567bed = 1;
    method = extraout_x1;
  }
  pSVar7 = (__this->fields).AJNMDODJJFD;
  if (pSVar7 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) goto LAB_0348cb44;
  if ((pSVar7->fields)._size == 0) {
    thunk_FUN_01bb9178(&UnityEngine_Debug_TypeInfo,method);
    FUN_019bc5ec();
    message = (Il2CppObject *)thunk_FUN_01bb9178(&StringLiteral_15579);
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
    thunk_FUN_01bb9178(&System_ArgumentNullException_TypeInfo);
    __this_01 = (System_ArgumentNullException_o *)thunk_FUN_01bda818();
    paramName = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_15578);
                    /* try { // try from 0348cb98 to 0358cb9f has its CatchHandler @ 0348d0d4 */
    System_ArgumentNullException___ctor(__this_01,paramName,(MethodInfo *)0x0);
    uVar6 = thunk_FUN_01bb9178(&Method_AJJPCMDCAOB_AOCNAAHCPHP__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_01,uVar6);
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar3 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar3 == (GCPFDLNAFDF_o *)0x0) goto LAB_0348cb44;
  pGVar8 = pGVar3->klass;
  uVar1._0_1_ = (pGVar8->_2).rank;
  uVar1._1_1_ = (pGVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pGVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)KADDELABILH_TypeInfo) {
        pVVar4 = pGVar8->vtable + (*piVar10 + 3);
        goto LAB_0348c9cc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pGVar3,KADDELABILH_TypeInfo,3);
LAB_0348c9cc:
  iVar2 = (*pVVar4->methodPtr)(pGVar3,pVVar4->method);
  if (iVar2 == 3) {
    pHVar5 = AJJPCMDCAOB__GIIJOKKDCOP(__this,method_00);
  }
  else {
    if (iVar2 == 2) {
      pSVar7 = (__this->fields).AJNMDODJJFD;
      comparison = (System_Comparison_T__o *)
                   thunk_FUN_01bda818(System_Comparison<HEOCHMFJJLH>_TypeInfo);
    }
    else {
      if (iVar2 != 1) {
        pHVar5 = AJJPCMDCAOB__BEOEPIJJCKD(__this,method_00);
        goto LAB_0348ca90;
      }
      pSVar7 = (__this->fields).AJNMDODJJFD;
      comparison = (System_Comparison_T__o *)
                   thunk_FUN_01bda818(System_Comparison<HEOCHMFJJLH>_TypeInfo);
    }
    System_Comparison<object>___ctor();
    if (pSVar7 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) goto LAB_0348cb44;
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)pSVar7,comparison,
               Method_System_Collections_Generic_List<HEOCHMFJJLH>_Sort__);
    pSVar7 = (__this->fields).AJNMDODJJFD;
    if (pSVar7 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) goto LAB_0348cb44;
    pHVar5 = (HEOCHMFJJLH_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar7,0,
                        Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Item__);
  }
LAB_0348ca90:
  if (pHVar5 == (HEOCHMFJJLH_o *)0x0) {
    __this_00 = (Sfs2X_Util_ConfigData_o *)0x0;
  }
  else {
    (pHVar5->fields).MAOCPNLGKLP = (pHVar5->fields).MAOCPNLGKLP + 1;
    __this_00 = (Sfs2X_Util_ConfigData_o *)thunk_FUN_01bda818(Sfs2X_Util_ConfigData_TypeInfo);
    Sfs2X_Util_ConfigData___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Sfs2X_Util_ConfigData_o *)0x0) {
LAB_0348cb44:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this_00->fields).host = (pHVar5->fields).NBFOAEAPGIO;
    thunk_FUN_01c20e04();
                    /* try { // try from 0348caec to 0358cb97 has its CatchHandler @ 0348caec
                       catch() { ... } // from try @ 0348caec with catch @ 0348caec
                       catch() { ... } // from try @ 0348d0b8 with catch @ 0348caec
                       catch() { ... } // from try @ 0348d1a8 with catch @ 0348caec
                       catch() { ... } // from try @ 0348d2ac with catch @ 0348caec */
    (__this_00->fields).port = (pHVar5->fields).HJHJIDOIHNL;
    (__this_00->fields).zone = StringLiteral_20956;
    thunk_FUN_01c20e04();
    (__this_00->fields).debug = false;
    (__this_00->fields).httpPort = 0;
    (__this_00->fields).useBlueBox = false;
    (__this_00->fields).blueBoxPollingRate = 500;
    (__this_00->fields).udpHost = StringLiteral_2081;
    thunk_FUN_01c20e04();
    (__this_00->fields).udpPort = 0x26ce;
  }
  return __this_00;
}

