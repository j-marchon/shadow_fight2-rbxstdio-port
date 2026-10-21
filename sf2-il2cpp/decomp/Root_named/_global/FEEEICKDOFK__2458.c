// TypeDefIndex 2458
// Namespace: 
// [Extension]
// public static class FEEEICKDOFK
// Fields:

// ===== public static string PEKFIKKFOEP(BLEFOFGCKEF FPEEDALPDOF, string CNIELFLIKJB)  [RVA 0x336B80C]
// FEEEICKDOFK$$PEKFIKKFOEP @ RVA 0x336B80C

System_String_o *
FEEEICKDOFK__PEKFIKKFOEP(BLEFOFGCKEF_o *FPEEDALPDOF,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  BLEFOFGCKEF_c *pBVar6;
  undefined8 uVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_String_o *pSVar10;
  uint uVar11;
  
  if ((DAT_04567aec & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9307/*"NO_ITEM_NAME"*/);
    FUN_01bab630(&StringLiteral_16195/*"_gp"*/);
    FUN_01bab630(&StringLiteral_16063/*"_Zone7"*/);
    FUN_01bab630(&StringLiteral_16064/*"_Zone7_gp"*/);
    FUN_01bab630(&StringLiteral_16221/*"_s"*/);
    DAT_04567aec = 1;
  }
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(CNIELFLIKJB,(MethodInfo *)0x0);
  if (bVar3) {
    return StringLiteral_9307/*"NO_ITEM_NAME"*/;
  }
  if (FPEEDALPDOF != (BLEFOFGCKEF_o *)0x0) {
    pBVar6 = FPEEDALPDOF->klass;
    uVar1._0_1_ = (pBVar6->_2).rank;
    uVar1._1_1_ = (pBVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pBVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar4 = pBVar6->vtable + (*piVar9 + 0xb);
          goto LAB_0346b908;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(FPEEDALPDOF,BLEFOFGCKEF_TypeInfo,0xb);
LAB_0346b908:
    uVar8 = (*pVVar4->methodPtr)(FPEEDALPDOF,CNIELFLIKJB,pVVar4->method);
    if ((uVar8 & 1) != 0) {
      return CNIELFLIKJB;
    }
    lVar5 = FUN_01bab718(string___TypeInfo,4);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = StringLiteral_16221/*"_s"*/;
        thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x20));
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = StringLiteral_16063/*"_Zone7"*/;
          thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x28));
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = StringLiteral_16195/*"_gp"*/;
            thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x30));
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) = StringLiteral_16064/*"_Zone7_gp"*/;
              thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x38));
              uVar7 = *(undefined8 *)(lVar5 + 0x18);
              if ((int)uVar7 < 1) {
                return StringLiteral_9307/*"NO_ITEM_NAME"*/;
              }
              uVar11 = 0;
              while (uVar11 < (uint)uVar7) {
                if ((CNIELFLIKJB == (System_String_o *)0x0) ||
                   (pSVar10 = *(System_String_o **)(lVar5 + (long)(int)uVar11 * 8 + 0x20),
                   pSVar10 == (System_String_o *)0x0)) goto LAB_0346badc;
                if ((pSVar10->fields)._stringLength < (CNIELFLIKJB->fields)._stringLength) {
                  bVar3 = System_String__EndsWith(CNIELFLIKJB,pSVar10,(MethodInfo *)0x0);
                  if (bVar3) {
                    pSVar10 = System_String__Substring
                                        (CNIELFLIKJB,0,
                                         (CNIELFLIKJB->fields)._stringLength -
                                         (pSVar10->fields)._stringLength,(MethodInfo *)0x0);
                    pBVar6 = FPEEDALPDOF->klass;
                    uVar2._0_1_ = (pBVar6->_2).rank;
                    uVar2._1_1_ = (pBVar6->_2).minimumAlignment;
                    uVar8 = (ulong)uVar2;
                    if (uVar8 == 0) goto LAB_0346ba9c;
                    piVar9 = &((pBVar6->_1).interfaceOffsets)->offset;
                    goto LAB_0346ba84;
                  }
                  uVar7 = *(undefined8 *)(lVar5 + 0x18);
                }
                uVar11 = uVar11 + 1;
                if ((int)uVar7 <= (int)uVar11) {
                  return StringLiteral_9307/*"NO_ITEM_NAME"*/;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0346badc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0346ba84:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
        (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
      pVVar4 = pBVar6->vtable + (*piVar9 + 0xb);
      goto LAB_0346babc;
    }
  }
LAB_0346ba9c:
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(FPEEDALPDOF,BLEFOFGCKEF_TypeInfo,0xb);
LAB_0346babc:
  uVar8 = (*pVVar4->methodPtr)(FPEEDALPDOF,pSVar10,pVVar4->method);
  if ((uVar8 & 1) == 0) {
    pSVar10 = StringLiteral_9307/*"NO_ITEM_NAME"*/;
  }
  return pSVar10;
}


// ===== public static string PEKFIKKFOEP(BLEFOFGCKEF FPEEDALPDOF, IGFGDDANEPE IKKAMAMLIKA)  [RVA 0x336BAE4]
// FEEEICKDOFK$$PEKFIKKFOEP @ RVA 0x336BAE4

System_String_o *
FEEEICKDOFK__PEKFIKKFOEP(BLEFOFGCKEF_o *FPEEDALPDOF,IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  Il2CppObject *FPEEDALPDOF_00;
  System_String_o *pSVar1;
  
  if ((DAT_04567aed & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567aed = 1;
  }
  FPEEDALPDOF_00 =
       EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                 (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (IKKAMAMLIKA != (IGFGDDANEPE_o *)0x0) {
    pSVar1 = FEEEICKDOFK__PEKFIKKFOEP
                       ((BLEFOFGCKEF_o *)FPEEDALPDOF_00,(IKKAMAMLIKA->fields).NPFMOEOIEKM,method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string PEKFIKKFOEP(BLEFOFGCKEF FPEEDALPDOF, HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x336BB38]
// FEEEICKDOFK$$PEKFIKKFOEP @ RVA 0x336BB38

System_String_o *
FEEEICKDOFK__PEKFIKKFOEP(BLEFOFGCKEF_o *FPEEDALPDOF,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  Il2CppObject *FPEEDALPDOF_00;
  System_String_o *pSVar1;
  
  if ((DAT_04567aee & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567aee = 1;
  }
  FPEEDALPDOF_00 =
       EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                 (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    pSVar1 = FEEEICKDOFK__PEKFIKKFOEP
                       ((BLEFOFGCKEF_o *)FPEEDALPDOF_00,
                        (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static IObservable<Unit> CICIPAHCKDB(BLEFOFGCKEF FPEEDALPDOF)  [RVA 0x336BB8C]
// FEEEICKDOFK$$CICIPAHCKDB @ RVA 0x336BB8C

System_IObservable_Unit__o * FEEEICKDOFK__CICIPAHCKDB(BLEFOFGCKEF_o *FPEEDALPDOF,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0346bb94 to 0356bc37 has its CatchHandler @ 0346bb94
                       catch() { ... } // from try @ 0346bb94 with catch @ 0346bb94
                       catch() { ... } // from try @ 0346bcbc with catch @ 0346bb94
                       catch() { ... } // from try @ 0346bd24 with catch @ 0346bb94
                       catch() { ... } // from try @ 0346bd68 with catch @ 0346bb94
                       catch() { ... } // from try @ 0346bda8 with catch @ 0346bb94 */
  if ((DAT_04567aef & 1) == 0) {
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_FEEEICKDOFK_EJLEDCDEOMI_GNOJGMBLBNH__);
    FUN_01bab630(&Method_FEEEICKDOFK_EJLEDCDEOMI_HCOAEHCMAIM__);
    FUN_01bab630(&FEEEICKDOFK_EJLEDCDEOMI_TypeInfo);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04567aef = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(FEEEICKDOFK_EJLEDCDEOMI_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)FPEEDALPDOF;
                    /* try { // try from 0346bc38 to 0356bc3f has its CatchHandler @ 0346bd4c */
    thunk_FUN_01c20e04(__this + 1,FPEEDALPDOF);
    addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* try { // try from 0346bc4c to 0356bc53 has its CatchHandler @ 0346bd48 */
    System_Action<object>___ctor();
    removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* try { // try from 0346bc64 to 0356bc6b has its CatchHandler @ 0346bd30 */
                    /* try { // try from 0346bc74 to 0356bc7b has its CatchHandler @ 0346bd44 */
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0346bc8c to 0356bc93 has its CatchHandler @ 0346bd2c */
                    /* try { // try from 0346bc9c to 0356bca3 has its CatchHandler @ 0346bd40 */
    pSVar1 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

