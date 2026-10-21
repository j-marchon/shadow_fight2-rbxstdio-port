// TypeDefIndex 2512
// Namespace: 
// public class AJJPCMDCAOB
// Fields:
//   private Action JNBAAFICFDI; // 0x10
//   private Action EAFGMIMPOCE; // 0x18
//   private List<HEOCHMFJJLH> AJNMDODJJFD; // 0x20

// ===== public ConfigData AOCNAAHCPHP()  [RVA 0x338C894]
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
    FUN_01bab630(&StringLiteral_20956/*"sf2-sfs-lobby"*/);
    FUN_01bab630(&StringLiteral_2081/*"95.213.140.21"*/);
    DAT_04567bed = 1;
    method = extraout_x1;
  }
  pSVar7 = (__this->fields).AJNMDODJJFD;
  if (pSVar7 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) goto LAB_0348cb44;
  if ((pSVar7->fields)._size == 0) {
    thunk_FUN_01bb9178(&UnityEngine_Debug_TypeInfo,method);
    FUN_019bc5ec();
    message = (Il2CppObject *)thunk_FUN_01bb9178(&StringLiteral_15579/*"[SFSConfigManager::GetConfig] balancer items null"*/);
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
    thunk_FUN_01bb9178(&System_ArgumentNullException_TypeInfo);
    __this_01 = (System_ArgumentNullException_o *)thunk_FUN_01bda818();
    paramName = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_15578/*"[SFSConfigManager::GetConfig] balancer items empty"*/);
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
    (__this_00->fields).zone = StringLiteral_20956/*"sf2-sfs-lobby"*/;
    thunk_FUN_01c20e04();
    (__this_00->fields).debug = false;
    (__this_00->fields).httpPort = 0;
    (__this_00->fields).useBlueBox = false;
    (__this_00->fields).blueBoxPollingRate = 500;
    (__this_00->fields).udpHost = StringLiteral_2081/*"95.213.140.21"*/;
    thunk_FUN_01c20e04();
    (__this_00->fields).udpPort = 0x26ce;
  }
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x338CEF4]
// AJJPCMDCAOB$$.ctor @ RVA 0x338CEF4

void AJJPCMDCAOB___ctor(AJJPCMDCAOB_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_HEOCHMFJJLH__o *__this_00;
  System_Collections_Generic_List_HEOCHMFJJLH__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  
                    /* try { // try from 0348cf00 to 0358cf07 has its CatchHandler @ 0348d178 */
  if ((DAT_04567bee & 1) == 0) {
                    /* try { // try from 0348cf24 to 0358cf2b has its CatchHandler @ 0348d164 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEOCHMFJJLH>_TypeInfo);
    FUN_01bab630(&Method_AJJPCMDCAOB_<>c_BIEBHEAAMKL__);
                    /* try { // try from 0348cf4c to 0358cf53 has its CatchHandler @ 0348d178 */
    FUN_01bab630(&Method_AJJPCMDCAOB_<>c_DIGDCFLCJNP__);
    FUN_01bab630(&AJJPCMDCAOB_<>c_TypeInfo);
                    /* try { // try from 0348cf64 to 0358cf93 has its CatchHandler @ 0348d108 */
    DAT_04567bee = 1;
    method = extraout_x1;
  }
  if ((AJJPCMDCAOB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AJJPCMDCAOB_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = AJJPCMDCAOB_<>c_TypeInfo->static_fields->__9__15_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((AJJPCMDCAOB_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0348cf94 to 0358cfa3 has its CatchHandler @ 0348d114 */
      thunk_FUN_01ba7564(AJJPCMDCAOB_<>c_TypeInfo,method);
    }
                    /* try { // try from 0348cfb0 to 0358cfbb has its CatchHandler @ 0348d0b8 */
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
                    /* try { // try from 0348cfd8 to 0358cfdf has its CatchHandler @ 0348d110 */
    ppSVar1 = &AJJPCMDCAOB_<>c_TypeInfo->static_fields->__9__15_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
                    /* try { // try from 0348cfe4 to 0358cfeb has its CatchHandler @ 0348d0dc */
  if (__this != (AJJPCMDCAOB_o *)0x0) {
    (__this->fields).JNBAAFICFDI = pSVar3;
    thunk_FUN_01c20e04(&__this->fields,pSVar3);
    if ((AJJPCMDCAOB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = AJJPCMDCAOB_<>c_TypeInfo->static_fields->__9__15_1;
    if (pSVar3 == (System_Action_o *)0x0) {
                    /* try { // try from 0348d02c to 0358d02f has its CatchHandler @ 0348d15c */
      if ((AJJPCMDCAOB_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0348d030 to 0358d033 has its CatchHandler @ 0348d158 */
        thunk_FUN_01ba7564();
                    /* try { // try from 0348d034 to 0358d037 has its CatchHandler @ 0348d150 */
      }
                    /* try { // try from 0348d038 to 0358d03b has its CatchHandler @ 0348d178 */
                    /* try { // try from 0348d03c to 0358d03f has its CatchHandler @ 0348d14c */
                    /* try { // try from 0348d040 to 0358d043 has its CatchHandler @ 0348d144 */
                    /* try { // try from 0348d044 to 0358d047 has its CatchHandler @ 0348d178 */
                    /* try { // try from 0348d048 to 0358d04b has its CatchHandler @ 0348d13c */
                    /* try { // try from 0348d04c to 0358d04f has its CatchHandler @ 0348d174 */
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0348d050 to 0358d053 has its CatchHandler @ 0348d128 */
                    /* try { // try from 0348d054 to 0358d057 has its CatchHandler @ 0348d170 */
                    /* try { // try from 0348d058 to 0358d05b has its CatchHandler @ 0348d16c */
                    /* try { // try from 0348d05c to 0358d05f has its CatchHandler @ 0348d120 */
                    /* try { // try from 0348d060 to 0358d063 has its CatchHandler @ 0348d178 */
                    /* try { // try from 0348d064 to 0358d067 has its CatchHandler @ 0348d168 */
                    /* try { // try from 0348d068 to 0358d06b has its CatchHandler @ 0348d11c */
      System_Action___ctor();
                    /* try { // try from 0348d06c to 0358d06f has its CatchHandler @ 0348d178 */
                    /* try { // try from 0348d070 to 0358d073 has its CatchHandler @ 0348d164 */
                    /* try { // try from 0348d074 to 0358d077 has its CatchHandler @ 0348d118 */
      ppSVar1 = &AJJPCMDCAOB_<>c_TypeInfo->static_fields->__9__15_1;
                    /* try { // try from 0348d078 to 0358d07b has its CatchHandler @ 0348d178 */
      *ppSVar1 = pSVar3;
                    /* try { // try from 0348d07c to 0358d07f has its CatchHandler @ 0348d104 */
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
                    /* try { // try from 0348d080 to 0358d083 has its CatchHandler @ 0348d100 */
    ppSVar1 = &(__this->fields).EAFGMIMPOCE;
                    /* try { // try from 0348d084 to 0358d087 has its CatchHandler @ 0348d140 */
    *ppSVar1 = pSVar3;
                    /* try { // try from 0348d088 to 0358d08b has its CatchHandler @ 0348d134 */
                    /* try { // try from 0348d08c to 0358d08f has its CatchHandler @ 0348d130 */
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
                    /* try { // try from 0348d090 to 0358d093 has its CatchHandler @ 0348d0e4 */
                    /* try { // try from 0348d094 to 0358d097 has its CatchHandler @ 0348d0e0 */
    __this_00 = (System_Collections_Generic_List_HEOCHMFJJLH__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<HEOCHMFJJLH>_TypeInfo);
                    /* try { // try from 0348d098 to 0358d09b has its CatchHandler @ 0348d110 */
                    /* try { // try from 0348d09c to 0358d09f has its CatchHandler @ 0348d178 */
                    /* try { // try from 0348d0a0 to 0358d0a3 has its CatchHandler @ 0348d0d8 */
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HEOCHMFJJLH>__ctor__);
    ppSVar2 = &(__this->fields).AJNMDODJJFD;
                    /* try { // try from 0348d0a4 to 0358d0a7 has its CatchHandler @ 0348d0d0 */
                    /* try { // try from 0348d0a8 to 0358d0ab has its CatchHandler @ 0348d10c */
    *ppSVar2 = __this_00;
                    /* try { // try from 0348d0ac to 0358d0af has its CatchHandler @ 0348d0cc */
                    /* try { // try from 0348d0b0 to 0358d0b3 has its CatchHandler @ 0348d160 */
    thunk_FUN_01c20e04(ppSVar2,__this_00);
                    /* try { // try from 0348d0b4 to 0358d0b7 has its CatchHandler @ 0348d0bc */
                    /* catch() { ... } // from try @ 0348cfb0 with catch @ 0348d0b8
                       try { // try from 0348d0b8 to 0358d18f has its CatchHandler @ 0348caec */
                    /* catch() { ... } // from try @ 0348d0b4 with catch @ 0348d0bc */
                    /* catch() { ... } // from try @ 0348cbdc with catch @ 0348d0c0 */
                    /* catch() { ... } // from try @ 0348cce8 with catch @ 0348d0c4 */
                    /* catch() { ... } // from try @ 0348cbc8 with catch @ 0348d0c8 */
                    /* catch() { ... } // from try @ 0348d0ac with catch @ 0348d0cc */
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0348d0a4 with catch @ 0348d0d0 */
  FUN_01bab8c8();
}


// ===== public void CBOBBKLPMFH(Action CJNHFNHJHPE)  [RVA 0x338D0D4]
// AJJPCMDCAOB$$CBOBBKLPMFH @ RVA 0x338D0D4

void AJJPCMDCAOB__CBOBBKLPMFH(AJJPCMDCAOB_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* catch() { ... } // from try @ 0348cb98 with catch @ 0348d0d4 */
                    /* catch() { ... } // from try @ 0348d0a0 with catch @ 0348d0d8 */
                    /* catch() { ... } // from try @ 0348cfe4 with catch @ 0348d0dc */
                    /* catch() { ... } // from try @ 0348d094 with catch @ 0348d0e0 */
                    /* catch() { ... } // from try @ 0348d090 with catch @ 0348d0e4 */
                    /* catch() { ... } // from try @ 0348cdc8 with catch @ 0348d0e8 */
                    /* catch() { ... } // from try @ 0348cd80 with catch @ 0348d0ec */
                    /* catch() { ... } // from try @ 0348cd60 with catch @ 0348d0f0 */
  if ((DAT_04567bef & 1) == 0) {
                    /* catch() { ... } // from try @ 0348cd48 with catch @ 0348d0f4 */
                    /* catch() { ... } // from try @ 0348cd3c with catch @ 0348d0f8 */
                    /* catch() { ... } // from try @ 0348cd24 with catch @ 0348d0fc */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 0348d080 with catch @ 0348d100 */
                    /* catch() { ... } // from try @ 0348d07c with catch @ 0348d104 */
    DAT_04567bef = 1;
  }
                    /* catch() { ... } // from try @ 0348cf64 with catch @ 0348d108 */
  ppSVar4 = &(__this->fields).EAFGMIMPOCE;
                    /* catch() { ... } // from try @ 0348cbb8 with catch @ 0348d10c
                       catch() { ... } // from try @ 0348d0a8 with catch @ 0348d10c */
                    /* catch() { ... } // from try @ 0348cfd8 with catch @ 0348d110
                       catch() { ... } // from try @ 0348d098 with catch @ 0348d110 */
  source = *ppSVar4;
                    /* catch() { ... } // from try @ 0348cf94 with catch @ 0348d114 */
                    /* catch() { ... } // from try @ 0348d074 with catch @ 0348d118 */
                    /* catch() { ... } // from try @ 0348d068 with catch @ 0348d11c */
                    /* catch() { ... } // from try @ 0348d05c with catch @ 0348d120 */
                    /* catch() { ... } // from try @ 0348ce40 with catch @ 0348d124 */
                    /* catch() { ... } // from try @ 0348d050 with catch @ 0348d128 */
                    /* catch() { ... } // from try @ 0348cde8 with catch @ 0348d12c */
                    /* catch() { ... } // from try @ 0348cddc with catch @ 0348d130
                       catch() { ... } // from try @ 0348d08c with catch @ 0348d130 */
                    /* catch() { ... } // from try @ 0348cdbc with catch @ 0348d134
                       catch() { ... } // from try @ 0348d088 with catch @ 0348d134 */
                    /* catch() { ... } // from try @ 0348cdb0 with catch @ 0348d138 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch() { ... } // from try @ 0348d048 with catch @ 0348d13c */
                    /* catch() { ... } // from try @ 0348cd68 with catch @ 0348d140
                       catch() { ... } // from try @ 0348d084 with catch @ 0348d140 */
                    /* catch() { ... } // from try @ 0348d040 with catch @ 0348d144 */
                    /* catch() { ... } // from try @ 0348cca4 with catch @ 0348d148 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
                    /* catch() { ... } // from try @ 0348d03c with catch @ 0348d14c */
    bVar1 = source == pSVar3;
    source = pSVar3;
                    /* catch() { ... } // from try @ 0348d034 with catch @ 0348d150 */
                    /* catch() { ... } // from try @ 0348cc40 with catch @ 0348d154 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 0348d030 with catch @ 0348d158 */
                    /* catch() { ... } // from try @ 0348d02c with catch @ 0348d15c */
                    /* catch() { ... } // from try @ 0348cc0c with catch @ 0348d160
                       catch() { ... } // from try @ 0348d0b0 with catch @ 0348d160 */
                    /* catch() { ... } // from try @ 0348cf24 with catch @ 0348d164
                       catch() { ... } // from try @ 0348d070 with catch @ 0348d164 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 0348ced8 with catch @ 0348d168
                       catch() { ... } // from try @ 0348d064 with catch @ 0348d168 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0348ce84 with catch @ 0348d16c
                       catch() { ... } // from try @ 0348d058 with catch @ 0348d16c */
  FUN_01babc64(pSVar2);
}


// ===== private int NMIMHEDLAME(HEOCHMFJJLH FMPJLBLNHMC, HEOCHMFJJLH IHEPHBIPLPM)  [RVA 0x338D170]
// AJJPCMDCAOB$$NMIMHEDLAME @ RVA 0x338D170

int32_t AJJPCMDCAOB__NMIMHEDLAME
                  (AJJPCMDCAOB_o *__this,HEOCHMFJJLH_o *FMPJLBLNHMC,HEOCHMFJJLH_o *IHEPHBIPLPM,
                  MethodInfo *method)

{
  int32_t iVar1;
  float in_s1;
  
                    /* catch() { ... } // from try @ 0348ce34 with catch @ 0348d170
                       catch() { ... } // from try @ 0348d054 with catch @ 0348d170 */
                    /* catch() { ... } // from try @ 0348ce24 with catch @ 0348d174
                       catch() { ... } // from try @ 0348d04c with catch @ 0348d174 */
                    /* catch() { ... } // from try @ 0348cc88 with catch @ 0348d178
                       catch() { ... } // from try @ 0348ccd8 with catch @ 0348d178
                       catch() { ... } // from try @ 0348cd9c with catch @ 0348d178
                       catch() { ... } // from try @ 0348ceb4 with catch @ 0348d178
                       catch() { ... } // from try @ 0348cf00 with catch @ 0348d178
                       catch() { ... } // from try @ 0348cf4c with catch @ 0348d178
                       catch() { ... } // from try @ 0348d038 with catch @ 0348d178
                       catch() { ... } // from try @ 0348d044 with catch @ 0348d178
                       catch() { ... } // from try @ 0348d060 with catch @ 0348d178
                       catch() { ... } // from try @ 0348d06c with catch @ 0348d178
                       catch() { ... } // from try @ 0348d078 with catch @ 0348d178
                       catch() { ... } // from try @ 0348d09c with catch @ 0348d178 */
  if ((FMPJLBLNHMC != (HEOCHMFJJLH_o *)0x0) && (IHEPHBIPLPM != (HEOCHMFJJLH_o *)0x0)) {
                    /* try { // try from 0348d190 to 0358d1a7 has its CatchHandler @ 0348d2a4 */
    iVar1 = System_Single__CompareTo
                      ((IHEPHBIPLPM->fields).BKCFPHNEONL,in_s1,
                       (MethodInfo *)&(FMPJLBLNHMC->fields).BKCFPHNEONL);
    if (iVar1 != 0) {
      return iVar1;
    }
                    /* try { // try from 0348d1a8 to 0358d293 has its CatchHandler @ 0348caec */
    iVar1 = System_Int32__CompareTo
                      ((int)FMPJLBLNHMC + 0x20,(IHEPHBIPLPM->fields).MAOCPNLGKLP,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CDAJJLNKAIK(Action CJNHFNHJHPE)  [RVA 0x338D1C4]
// AJJPCMDCAOB$$CDAJJLNKAIK @ RVA 0x338D1C4

void AJJPCMDCAOB__CDAJJLNKAIK(AJJPCMDCAOB_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567bf0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567bf0 = 1;
  }
  ppSVar4 = &(__this->fields).EAFGMIMPOCE;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private HEOCHMFJJLH GIIJOKKDCOP()  [RVA 0x338CBB4]
// AJJPCMDCAOB$$GIIJOKKDCOP @ RVA 0x338CBB4

HEOCHMFJJLH_o * AJJPCMDCAOB__GIIJOKKDCOP(AJJPCMDCAOB_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_HEOCHMFJJLH__o *__this_00;
  MethodInfo *extraout_x1;
  HEOCHMFJJLH_o *pHVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 0348cbb8 to 0358cbbf has its CatchHandler @ 0348d10c */
                    /* try { // try from 0348cbc8 to 0358cbcf has its CatchHandler @ 0348d0c8 */
  if ((DAT_04567bf1 & 1) == 0) {
                    /* try { // try from 0348cbdc to 0358cc0b has its CatchHandler @ 0348d0c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_GetEnumerator__);
                    /* try { // try from 0348cc0c to 0358cc2f has its CatchHandler @ 0348d160 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Count__);
    DAT_04567bf1 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJNMDODJJFD;
  if (__this_00 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  if ((__this_00->fields)._size == 0) {
    pHVar3 = (HEOCHMFJJLH_o *)0x0;
  }
  else {
                    /* try { // try from 0348cc40 to 0358cc47 has its CatchHandler @ 0348d154 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HEOCHMFJJLH>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_MoveNext__);
      if (!bVar2) {
        pHVar3 = (HEOCHMFJJLH_o *)0x0;
        goto LAB_0348cca4;
      }
      if ((HEOCHMFJJLH_o *)local_48.fields._current == (HEOCHMFJJLH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->MAOCPNLGKLP;
    } while ((3.4028235e+38 <=
              ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->BKCFPHNEONL) &&
            (iVar1 < 1
                    /* try { // try from 0348cc88 to 0358cc93 has its CatchHandler @ 0348d178 */));
    ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->MAOCPNLGKLP = iVar1 + 1;
    pHVar3 = (HEOCHMFJJLH_o *)local_48.fields._current;
LAB_0348cca4:
                    /* try { // try from 0348cca4 to 0358ccab has its CatchHandler @ 0348d148 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_Dispose__);
  }
  return pHVar3;
}


// ===== private void OHKAAEMIIOD(DMKKAPNMDKJ IDCGLBOIAFJ)  [RVA 0x338D260]
// AJJPCMDCAOB$$OHKAAEMIIOD @ RVA 0x338D260

void AJJPCMDCAOB__OHKAAEMIIOD(AJJPCMDCAOB_o *__this,DMKKAPNMDKJ_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  AJJPCMDCAOB_o *__this_00;
  System_Collections_Generic_List_HEOCHMFJJLH__o *pSVar1;
  System_Collections_Generic_List_HEOCHMFJJLH__o **ppSVar2;
  MethodInfo *method_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04567bf2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0348d294 to 0358d2a3 has its CatchHandler @ 0348d2a4 */
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
                    /* catch() { ... } // from try @ 0348d190 with catch @ 0348d2a4
                       catch() { ... } // from try @ 0348d294 with catch @ 0348d2a4 */
                    /* try { // try from 0348d2a8 to 0358d2ab has its CatchHandler @ 0348d2b4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Count__);
                    /* try { // try from 0348d2ac to 0358d2b7 has its CatchHandler @ 0348caec */
                    /* catch() { ... } // from try @ 0348d2a8 with catch @ 0348d2b4 */
    FUN_01bab630(&StringLiteral_11551/*"SFSConfigManager::OnBalancerSettingsLoaded"*/);
    FUN_01bab630(&StringLiteral_9850/*"OnBalancerSettingsLoaded - failed to load"*/);
    FUN_01bab630(&StringLiteral_9849/*"OnBalancerSettingsLoaded - empty json"*/);
    DAT_04567bf2 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    method_00 = (MethodInfo *)0x0;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11551/*"SFSConfigManager::OnBalancerSettingsLoaded"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    if (IDCGLBOIAFJ != (DMKKAPNMDKJ_o *)0x0) {
      if ((IDCGLBOIAFJ->fields).PEKGJKIHHKJ != false) {
        pSVar1 = AJJPCMDCAOB__KAOMHFAJAJB(__this_00,(IDCGLBOIAFJ->fields).BEIPGOKBAEI,method_00);
        if (pSVar1 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((pSVar1->fields)._size < 1) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_9849/*"OnBalancerSettingsLoaded - empty json"*/,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).EAFGMIMPOCE;
          if (pSVar3 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
        }
        else {
          ppSVar2 = &(__this->fields).AJNMDODJJFD;
          *ppSVar2 = pSVar1;
          thunk_FUN_01c20e04(ppSVar2,pSVar1);
          pSVar3 = (__this->fields).JNBAAFICFDI;
          if (pSVar3 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
        }
        return;
      }
      NFNBHPOJFNJ__KCBJCLNBGAO(6,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_9850/*"OnBalancerSettingsLoaded - failed to load"*/,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).EAFGMIMPOCE;
      if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0348d3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar3->fields).super.super.invoke_impl)
                  ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private HEOCHMFJJLH BEOEPIJJCKD()  [RVA 0x338CD38]
// AJJPCMDCAOB$$BEOEPIJJCKD @ RVA 0x338CD38

HEOCHMFJJLH_o * AJJPCMDCAOB__BEOEPIJJCKD(AJJPCMDCAOB_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  int iVar3;
  HEOCHMFJJLH_o *pHVar4;
  bool bVar5;
  System_Collections_Generic_List_HEOCHMFJJLH__o *__this_00;
  int iVar6;
  HEOCHMFJJLH_o *pHVar7;
  float fVar8;
  float fVar9;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 0348cd3c to 0358cd43 has its CatchHandler @ 0348d0f8 */
                    /* try { // try from 0348cd48 to 0358cd4f has its CatchHandler @ 0348d0f4 */
  if ((DAT_04567bf3 & 1) == 0) {
                    /* try { // try from 0348cd60 to 0358cd67 has its CatchHandler @ 0348d0f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_Dispose__);
                    /* try { // try from 0348cd68 to 0358cd7b has its CatchHandler @ 0348d140 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_get_Current__);
                    /* try { // try from 0348cd80 to 0358cd8b has its CatchHandler @ 0348d0ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Count__);
                    /* try { // try from 0348cd9c to 0358cda7 has its CatchHandler @ 0348d178 */
    DAT_04567bf3 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJNMDODJJFD;
  if (__this_00 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) {
LAB_0348ce78:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0348cdb0 to 0358cdb7 has its CatchHandler @ 0348d138 */
  if ((__this_00->fields)._size == 0) {
    pHVar7 = (HEOCHMFJJLH_o *)0x0;
  }
  else {
                    /* try { // try from 0348cdbc to 0358cdc3 has its CatchHandler @ 0348d134 */
                    /* try { // try from 0348cdc8 to 0358cdd7 has its CatchHandler @ 0348d0e8 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HEOCHMFJJLH>_GetEnumerator__);
                    /* try { // try from 0348cddc to 0358cde3 has its CatchHandler @ 0348d130 */
                    /* try { // try from 0348cde8 to 0358ce07 has its CatchHandler @ 0348d12c */
    fVar2 = 3.4028235e+38;
    iVar3 = 0x7fffffff;
    pHVar4 = (HEOCHMFJJLH_o *)0x0;
    while (pHVar7 = pHVar4, iVar6 = iVar3, fVar8 = fVar2,
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_48,
                             Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_MoveNext__
                            ), bVar5) {
      if ((HEOCHMFJJLH_o *)local_48.fields._current == (HEOCHMFJJLH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->MAOCPNLGKLP;
      fVar2 = fVar8;
      iVar3 = iVar6;
      pHVar4 = pHVar7;
                    /* try { // try from 0348ce24 to 0358ce2b has its CatchHandler @ 0348d174 */
      if (((iVar1 <= iVar6) &&
          (fVar9 = ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->BKCFPHNEONL,
          fVar2 = fVar9, iVar3 = iVar1, pHVar4 = (HEOCHMFJJLH_o *)local_48.fields._current,
          iVar1 < 1)) && (fVar2 = fVar8, iVar3 = iVar6, pHVar4 = pHVar7, fVar9 < fVar8)) {
        fVar2 = fVar9;
        iVar3 = iVar1;
        pHVar4 = (HEOCHMFJJLH_o *)local_48.fields._current;
      }
    }
                    /* try { // try from 0348ce34 to 0358ce3b has its CatchHandler @ 0348d170 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_Dispose__);
                    /* try { // try from 0348ce40 to 0358ce47 has its CatchHandler @ 0348d124 */
    if (pHVar7 == (HEOCHMFJJLH_o *)0x0) goto LAB_0348ce78;
    (pHVar7->fields).MAOCPNLGKLP = (pHVar7->fields).MAOCPNLGKLP + 1;
  }
  return pHVar7;
}


// ===== private int HPPMALFPDJI(HEOCHMFJJLH FMPJLBLNHMC, HEOCHMFJJLH IHEPHBIPLPM)  [RVA 0x338D724]
// AJJPCMDCAOB$$HPPMALFPDJI @ RVA 0x338D724

int32_t AJJPCMDCAOB__HPPMALFPDJI
                  (AJJPCMDCAOB_o *__this,HEOCHMFJJLH_o *FMPJLBLNHMC,HEOCHMFJJLH_o *IHEPHBIPLPM,
                  MethodInfo *method)

{
  int32_t iVar1;
  float in_s1;
  
                    /* try { // try from 0348d728 to 0358d72f has its CatchHandler @ 0348d8d8 */
                    /* try { // try from 0348d730 to 0358d8bf has its CatchHandler @ 0348d43c */
  if ((FMPJLBLNHMC != (HEOCHMFJJLH_o *)0x0) && (IHEPHBIPLPM != (HEOCHMFJJLH_o *)0x0)) {
    iVar1 = System_Int32__CompareTo
                      ((int)FMPJLBLNHMC + 0x20,(IHEPHBIPLPM->fields).MAOCPNLGKLP,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = System_Single__CompareTo
                      ((IHEPHBIPLPM->fields).BKCFPHNEONL,in_s1,
                       (MethodInfo *)&(FMPJLBLNHMC->fields).BKCFPHNEONL);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ()  [RVA 0x338D778]
// AJJPCMDCAOB$$GIENGNEGHPJ @ RVA 0x338D778

void AJJPCMDCAOB__GIENGNEGHPJ(AJJPCMDCAOB_o *__this,MethodInfo *method)

{
  ushort uVar1;
  BKMILGLGFCM_IFBNAEMJLJL_o *pBVar2;
  JMDPBFOCHHP_o *__this_00;
  System_String_o *CJFAPGEEPLM;
  ServerProviderBase_BNPEHNICKPJ_o *__this_01;
  UnityEngine_WWWForm_o *OFOIILMAIPG;
  System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF;
  BKMILGLGFCM_o *pBVar3;
  MOBODMIBMKA_o *pMVar4;
  VirtualInvokeData *pVVar5;
  MOBODMIBMKA_c *pMVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04567bf4 & 1) == 0) {
    FUN_01bab630(&Method_AJJPCMDCAOB_OHKAAEMIIOD__);
    FUN_01bab630(&System_Action<DMKKAPNMDKJ>_TypeInfo);
    FUN_01bab630(&ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&MOBODMIBMKA_TypeInfo);
    DAT_04567bf4 = 1;
  }
  pBVar2 = BKMILGLGFCM_IFBNAEMJLJL__EOHMFJFFFIN((MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this_00 != (JMDPBFOCHHP_o *)0x0) &&
     (CJFAPGEEPLM = JMDPBFOCHHP__BBIAIOFGMEA(__this_00,(MethodInfo *)0x0),
     pBVar2 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) {
    pBVar2 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
             PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                       ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar2,CJFAPGEEPLM,
                        Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
    __this_01 = (ServerProviderBase_BNPEHNICKPJ_o *)
                thunk_FUN_01bda818(ServerProviderBase_BNPEHNICKPJ_TypeInfo);
    ServerProviderBase_BNPEHNICKPJ___ctor
              (__this_01,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
    if ((ServerProviderBase_BNPEHNICKPJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OFOIILMAIPG = ServerProviderBase_BNPEHNICKPJ__ALBJPLAPOBO(__this_01,(MethodInfo *)0x0);
    if (pBVar2 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
      pBVar2 = BKMILGLGFCM_IFBNAEMJLJL__EMCCAHPOFDA(pBVar2,OFOIILMAIPG,(MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_DMKKAPNMDKJ__o *)
                    thunk_FUN_01bda818(System_Action<DMKKAPNMDKJ>_TypeInfo);
                    /* try { // try from 0348d8c0 to 0358d8c3 has its CatchHandler @ 0348d8d0 */
                    /* try { // try from 0348d8c4 to 0358d8c7 has its CatchHandler @ 0348d8cc */
                    /* try { // try from 0348d8c8 to 0358d8f3 has its CatchHandler @ 0348d43c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0348d8c4 with catch @ 0348d8cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0348d8c0 with catch @ 0348d8d0
                        */
      System_Action<object>___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0348d710 with catch @ 0348d8d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0348d728 with catch @ 0348d8d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0348d6f4 with catch @ 0348d8dc
                        */
      if ((pBVar2 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) &&
         (pBVar2 = BKMILGLGFCM_IFBNAEMJLJL__JLDAALDPGIE(pBVar2,BLMFLPJJMPF,(MethodInfo *)0x0),
         pBVar2 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) {
                    /* try { // try from 0348d8f4 to 0358d8f7 has its CatchHandler @ 0348d918 */
                    /* try { // try from 0348d8f8 to 0358d91f has its CatchHandler @ 0348d43c */
        pBVar3 = BKMILGLGFCM_IFBNAEMJLJL__HFMIGKLONNL(pBVar2,(MethodInfo *)0x0);
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
        }
                    /* catch() { ... } // from try @ 0348d8f4 with catch @ 0348d918 */
        pMVar4 = IFAMAAGNCBJ__IAPGOOIGJLK((MethodInfo *)0x0);
        if (pMVar4 != (MOBODMIBMKA_o *)0x0) {
                    /* try { // try from 0348d920 to 0358d927 has its CatchHandler @ 0348d93c */
          pMVar6 = pMVar4->klass;
          uVar1._0_1_ = (pMVar6->_2).rank;
          uVar1._1_1_ = (pMVar6->_2).minimumAlignment;
                    /* try { // try from 0348d928 to 0358d933 has its CatchHandler @ 0348d43c */
          uVar7 = (ulong)uVar1;
                    /* try { // try from 0348d934 to 0358d93b has its CatchHandler @ 0348d93c */
          if (uVar7 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0348d920 with catch @ 0348d93c
                       catch(type#2 @ 00000000) { ... } // from try @ 0348d934 with catch @ 0348d93c
                        */
            piVar8 = &((pMVar6->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)MOBODMIBMKA_TypeInfo) {
                pVVar5 = pMVar6->vtable + *piVar8;
                goto LAB_0348d978;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar4,MOBODMIBMKA_TypeInfo,0);
LAB_0348d978:
                    /* WARNING: Could not recover jumptable at 0x0348d990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar5->methodPtr)(pMVar4,pBVar3,pVVar5->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<HEOCHMFJJLH> KAOMHFAJAJB(string IMMNELPBGIF)  [RVA 0x338D4DC]
// AJJPCMDCAOB$$KAOMHFAJAJB @ RVA 0x338D4DC

System_Collections_Generic_List_HEOCHMFJJLH__o *
AJJPCMDCAOB__KAOMHFAJAJB(AJJPCMDCAOB_o *__this,System_String_o *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int32_t iVar5;
  SimpleJSON_JSONObject_o *__this_00;
  System_Collections_Generic_List_HEOCHMFJJLH__o *__this_01;
  System_String_o *__this_02;
  System_String_array *pSVar6;
  HEOCHMFJJLH_o *__this_03;
  SimpleJSON_JSONNode_o *JHMENEKPIBO;
  HEOCHMFJJLH_array *pHVar7;
  uint aIndex;
  float fVar8;
  
  if ((DAT_04567bf5 & 1) == 0) {
    FUN_01bab630(&HEOCHMFJJLH_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEOCHMFJJLH>_TypeInfo);
    DAT_04567bf5 = 1;
  }
  __this_00 = (SimpleJSON_JSONObject_o *)SimpleJSON_JSON__Parse(IMMNELPBGIF,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSON_JSONObject_o *)0x0) {
    bVar1 = (SimpleJSON_JSONObject_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (__this_00->klass->_2).naturalAligment) {
      if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)SimpleJSON_JSONObject_TypeInfo) {
        __this_00 = (SimpleJSON_JSONObject_o *)0x0;
      }
      goto LAB_0348d59c;
    }
  }
  __this_00 = (SimpleJSON_JSONObject_o *)0x0;
LAB_0348d59c:
  __this_01 = (System_Collections_Generic_List_HEOCHMFJJLH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HEOCHMFJJLH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HEOCHMFJJLH>__ctor__);
  if (__this_00 == (SimpleJSON_JSONObject_o *)0x0) {
LAB_0348d71c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar4 = (*(__this_00->klass->vtable)._11_get_Count.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._11_get_Count.method);
  if (0 < iVar4) {
    aIndex = 0;
    do {
      __this_02 = SimpleJSON_JSONObject__Key(__this_00,aIndex,(MethodInfo *)0x0);
      if ((__this_02 == (System_String_o *)0x0) ||
         (pSVar6 = System_String__Split(__this_02,0x3a,0,(MethodInfo *)0x0),
         pSVar6 == (System_String_array *)0x0)) goto LAB_0348d71c;
      if ((int)pSVar6->max_length == 2) {
        __this_03 = (HEOCHMFJJLH_o *)thunk_FUN_01bda818(HEOCHMFJJLH_TypeInfo);
        HEOCHMFJJLH___ctor(__this_03,(MethodInfo *)0x0);
        if ((int)pSVar6->max_length == 0) {
LAB_0348d720:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (__this_03 == (HEOCHMFJJLH_o *)0x0) goto LAB_0348d71c;
        (__this_03->fields).NBFOAEAPGIO = pSVar6->m_Items[0];
        thunk_FUN_01c20e04();
        if ((uint)pSVar6->max_length < 2) goto LAB_0348d720;
        iVar5 = System_Int32__Parse(pSVar6->m_Items[1],(MethodInfo *)0x0);
        (__this_03->fields).HJHJIDOIHNL = iVar5;
        JHMENEKPIBO = (SimpleJSON_JSONNode_o *)
                      (*(__this_00->klass->vtable)._5_get_Item.methodPtr)
                                (__this_00,(ulong)aIndex,
                                 (__this_00->klass->vtable)._5_get_Item.method);
        fVar8 = OGMFFOMHGIA__GICIEKCGOHA(JHMENEKPIBO,0.0,(MethodInfo *)0x0);
        (__this_03->fields).BKCFPHNEONL = fVar8;
        lVar3 = Method_System_Collections_Generic_List<HEOCHMFJJLH>_Add__;
        if (__this_01 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) goto LAB_0348d71c;
        pHVar7 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pHVar7 == (HEOCHMFJJLH_array *)0x0) goto LAB_0348d71c;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pHVar7->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pHVar7->m_Items[(int)uVar2] = __this_03;
          thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar2,__this_03);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_03,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      aIndex = aIndex + 1;
                    /* try { // try from 0348d6f4 to 0358d6fb has its CatchHandler @ 0348d8dc */
      iVar4 = (*(__this_00->klass->vtable)._11_get_Count.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._11_get_Count.method);
    } while ((int)aIndex < iVar4);
  }
                    /* try { // try from 0348d710 to 0358d717 has its CatchHandler @ 0348d8d4 */
  return __this_01;
}


// ===== public void INLAIHLANEL(Action CJNHFNHJHPE)  [RVA 0x338D998]
// AJJPCMDCAOB$$INLAIHLANEL @ RVA 0x338D998

void AJJPCMDCAOB__INLAIHLANEL(AJJPCMDCAOB_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_04567bf6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567bf6 = 1;
  }
  a = (__this->fields).JNBAAFICFDI;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void KMCEEDPMHMJ(Action CJNHFNHJHPE)  [RVA 0x338DA34]
// AJJPCMDCAOB$$KMCEEDPMHMJ @ RVA 0x338DA34

void AJJPCMDCAOB__KMCEEDPMHMJ(AJJPCMDCAOB_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_04567bf7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567bf7 = 1;
  }
  source = (__this->fields).JNBAAFICFDI;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

