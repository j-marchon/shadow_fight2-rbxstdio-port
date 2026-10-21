// Original name: Nekki.SF2.Core.AD.RewardHelpers.DailyRefreshRewardHelper  (obfuscated LHEANFBMAAI)
// TypeDefIndex 1570
// Namespace: 
// public static class DailyRefreshRewardHelper
// Fields:
//   private const MPAKDCNMLEG IGEBDJFBDJI = 13;
//   private static Action OBDBCPILHKI; // 0x0
//   private static Action AEDKMCHPODL; // 0x8
//   private static Action<int, int> HILLNHJFECF; // 0x10

// ===== private static void IKAAFAICDMD()  [RVA 0x31AE9C0]
// DailyRefreshRewardHelper$$IKAAFAICDMD @ RVA 0x31AE9C0

void DailyRefreshRewardHelper__IKAAFAICDMD(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  KKEKKPIDGBK_o *pKVar6;
  undefined8 uVar7;
  VirtualInvokeData *pVVar8;
  KKEKKPIDGBK_c *pKVar9;
  ulong uVar10;
  int32_t *piVar11;
  
                    /* try { // try from 032ae9cc to 033ae9df has its CatchHandler @ 032aeaac */
  if ((DAT_04566b6b & 1) == 0) {
                    /* try { // try from 032ae9e0 to 033aea77 has its CatchHandler @ 032ae788 */
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&Method_LHEANFBMAAI_BHCOJOPEOHH__);
    FUN_01bab630(&Method_LHEANFBMAAI_EFDGBPJANAC__);
    FUN_01bab630(&Method_LHEANFBMAAI_PLOLMAENPOJ__);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04566b6b = 1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
                    /* try { // try from 032aea78 to 033aea7f has its CatchHandler @ 032aeac4 */
                    /* try { // try from 032aea80 to 033aea83 has its CatchHandler @ 032aeab8 */
                    /* try { // try from 032aea84 to 033aea87 has its CatchHandler @ 032aeaa4 */
  System_Action<Int32Enum,_int,_int>___ctor();
                    /* try { // try from 032aea88 to 033aea8b has its CatchHandler @ 032ae788 */
  if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
                    /* try { // try from 032aea8c to 033aea8f has its CatchHandler @ 032aea98 */
                    /* try { // try from 032aea90 to 033aead3 has its CatchHandler @ 032ae788 */
    pKVar9 = pKVar6->klass;
    uVar1._0_1_ = (pKVar9->_2).rank;
    uVar1._1_1_ = (pKVar9->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 032aea8c with catch @ 032aea98 */
                    /* catch() { ... } // from try @ 032ae9b0 with catch @ 032aea9c */
                    /* catch() { ... } // from try @ 032ae994 with catch @ 032aeaa0 */
    uVar10 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 032aea84 with catch @ 032aeaa4 */
                    /* catch() { ... } // from try @ 032ae9a4 with catch @ 032aeaa8 */
                    /* catch() { ... } // from try @ 032ae9cc with catch @ 032aeaac */
                    /* catch() { ... } // from try @ 032ae970 with catch @ 032aeab0 */
    if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 032ae97c with catch @ 032aeab4 */
                    /* catch() { ... } // from try @ 032aea80 with catch @ 032aeab8 */
      piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
      do {
                    /* catch() { ... } // from try @ 032ae908 with catch @ 032aeabc */
                    /* catch() { ... } // from try @ 032ae8ac with catch @ 032aeac0 */
                    /* catch() { ... } // from try @ 032aea78 with catch @ 032aeac4 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                    /* catch() { ... } // from try @ 032aead4 with catch @ 032aeae8 */
                    /* try { // try from 032aeaf0 to 033aeb57 has its CatchHandler @ 032aeb6c */
          pVVar8 = pKVar9->vtable + (*piVar11 + 0xe);
          goto LAB_032aeaf4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 032aead4 to 033aead7 has its CatchHandler @ 032aeae8 */
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xe);
LAB_032aeaf4:
    (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
    pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
    uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
      pKVar9 = pKVar6->klass;
      uVar2._0_1_ = (pKVar9->_2).rank;
      uVar2._1_1_ = (pKVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 032aeb58 to 033aeb63 has its CatchHandler @ 032ae788 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
            pVVar8 = pKVar9->vtable + (*piVar11 + 0x11);
            goto LAB_032aeb8c;
          }
          uVar10 = uVar10 - 1;
                    /* try { // try from 032aeb64 to 033aeb6b has its CatchHandler @ 032aeb6c */
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
                    /* catch() { ... } // from try @ 032aeaf0 with catch @ 032aeb6c
                       catch() { ... } // from try @ 032aeb64 with catch @ 032aeb6c */
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x11);
LAB_032aeb8c:
      (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
      pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
      uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
        pKVar9 = pKVar6->klass;
        uVar3._0_1_ = (pKVar9->_2).rank;
        uVar3._1_1_ = (pKVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar3;
        if (uVar10 != 0) {
          piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar8 = pKVar9->vtable + (*piVar11 + 5);
              goto LAB_032aec1c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,5);
LAB_032aec1c:
        (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
        pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
          pKVar9 = pKVar6->klass;
          uVar4._0_1_ = (pKVar9->_2).rank;
          uVar4._1_1_ = (pKVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar4;
          if (uVar10 != 0) {
            piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                pVVar8 = pKVar9->vtable + (*piVar11 + 0x16);
                goto LAB_032aecac;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x16);
LAB_032aecac:
          (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
          pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
          uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
          System_Action<Int32Enum>___ctor();
          if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
            pKVar9 = pKVar6->klass;
            uVar5._0_1_ = (pKVar9->_2).rank;
            uVar5._1_1_ = (pKVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar5;
            if (uVar10 != 0) {
              piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                  pVVar8 = pKVar9->vtable + (*piVar11 + 0xf);
                  goto LAB_032aed3c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xf);
LAB_032aed3c:
                    /* WARNING: Could not recover jumptable at 0x032aed54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void POBKBKBKBEM()  [RVA 0x31AED5C]
// DailyRefreshRewardHelper$$POBKBKBKBEM @ RVA 0x31AED5C

void DailyRefreshRewardHelper__POBKBKBKBEM(MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this,0x3c,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MALGBADKPKB(int JEGMMDPFNIL, int KMOHFJKJBMK)  [RVA 0x31AED80]
// DailyRefreshRewardHelper$$MALGBADKPKB @ RVA 0x31AED80

void DailyRefreshRewardHelper__MALGBADKPKB(int32_t JEGMMDPFNIL,int32_t KMOHFJKJBMK,MethodInfo *method)

{
  long lVar1;
  System_Action_int__int__o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_04566b6c & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__,KMOHFJKJBMK);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&DailyRefreshRewardHelper_TypeInfo);
    FUN_01bab630(&StringLiteral_15452/*"[DailyRefreshRewardHelper] UpdateViews"*/);
    DAT_04566b6c = 1;
  }
  pSVar2 = DailyRefreshRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
  if (pSVar2 != (System_Action_int__int__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,JEGMMDPFNIL,KMOHFJKJBMK,
               (pSVar2->fields).super.super.method);
  }
  lVar1 = Method_System_Array_Empty<object>__;
  lVar3 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
  if (lVar3 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<object>__);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  args = (System_Object_array *)**(undefined8 **)(lVar1 + 0xb8);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogFormat(StringLiteral_15452/*"[DailyRefreshRewardHelper] UpdateViews"*/,args,(MethodInfo *)0x0);
  return;
}


// ===== private static void BHCOJOPEOHH(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x31AEEA0]
// DailyRefreshRewardHelper$$BHCOJOPEOHH @ RVA 0x31AEEA0

void DailyRefreshRewardHelper__BHCOJOPEOHH(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar1;
  
  method_00 = (MethodInfo *)(ulong)(uint)BKFOLMBMFNP;
  if ((DAT_04566b6d & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&DailyRefreshRewardHelper_TypeInfo);
    DAT_04566b6d = 1;
  }
  if (BKFOLMBMFNP == 0xd) {
    pSVar1 = DailyRefreshRewardHelper_TypeInfo->static_fields->AEDKMCHPODL;
    if (pSVar1 != (System_Action_o *)0x0) {
      method_00 = (MethodInfo *)
                  (*(code *)(pSVar1->fields).super.super.invoke_impl)
                            ((pSVar1->fields).super.super.method_code,
                             (pSVar1->fields).super.super.method);
    }
    DailyRefreshRewardHelper__DGLJCGNHLIG(method_00);
    DailyRefreshRewardHelper__IKAAFAICDMD(method_01);
    return;
  }
  return;
}


// ===== public static void FAAJFKFKBOL(Action PJDPEGNLFHH, Action IECMGNKMACB, Action<int, int> HLBLIDOPBJJ)  [RVA 0x31AEF94]
// DailyRefreshRewardHelper$$FAAJFKFKBOL @ RVA 0x31AEF94

void DailyRefreshRewardHelper__FAAJFKFKBOL
               (System_Action_o *PJDPEGNLFHH,System_Action_o *IECMGNKMACB,
               System_Action_int__int__o *HLBLIDOPBJJ,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_int__int__o **ppSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566b6e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&DailyRefreshRewardHelper_TypeInfo);
    FUN_01bab630(&StringLiteral_15451/*"[DailyRefreshRewardHelper] ShowAD"*/);
    DAT_04566b6e = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_15451/*"[DailyRefreshRewardHelper] ShowAD"*/,(MethodInfo *)0x0);
  DailyRefreshRewardHelper_TypeInfo->static_fields->OBDBCPILHKI = PJDPEGNLFHH;
  thunk_FUN_01c20e04(DailyRefreshRewardHelper_TypeInfo->static_fields,PJDPEGNLFHH);
  ppSVar1 = &DailyRefreshRewardHelper_TypeInfo->static_fields->AEDKMCHPODL;
  *ppSVar1 = IECMGNKMACB;
  thunk_FUN_01c20e04(ppSVar1,IECMGNKMACB);
  ppSVar2 = &DailyRefreshRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar2 = HLBLIDOPBJJ;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar2,HLBLIDOPBJJ);
  DailyRefreshRewardHelper__LJGJPNGHGGM(method_00);
  DailyRefreshRewardHelper__POBKBKBKBEM(method_01);
  return;
}


// ===== private static void EFDGBPJANAC(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x31AF40C]
// DailyRefreshRewardHelper$$EFDGBPJANAC @ RVA 0x31AF40C

void DailyRefreshRewardHelper__EFDGBPJANAC(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  if (BKFOLMBMFNP == 0xd) {
    DailyRefreshRewardHelper__MBLOPJIFOMC((MethodInfo *)0xd);
    return;
  }
                    /* try { // try from 032af418 to 033af41f has its CatchHandler @ 032af5a4 */
  return;
}


// ===== private static void LJGJPNGHGGM()  [RVA 0x31AF070]
// DailyRefreshRewardHelper$$LJGJPNGHGGM @ RVA 0x31AF070

void DailyRefreshRewardHelper__LJGJPNGHGGM(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  KKEKKPIDGBK_o *pKVar6;
  undefined8 uVar7;
  VirtualInvokeData *pVVar8;
  KKEKKPIDGBK_c *pKVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_04566b6f & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&Method_LHEANFBMAAI_BHCOJOPEOHH__);
    FUN_01bab630(&Method_LHEANFBMAAI_EFDGBPJANAC__);
    FUN_01bab630(&Method_LHEANFBMAAI_PLOLMAENPOJ__);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04566b6f = 1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
  System_Action<Int32Enum,_int,_int>___ctor();
  if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
    pKVar9 = pKVar6->klass;
    uVar1._0_1_ = (pKVar9->_2).rank;
    uVar1._1_1_ = (pKVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar8 = pKVar9->vtable + (*piVar11 + 0xd);
          goto LAB_032af1a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xd);
LAB_032af1a4:
    (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
    pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
    uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
      pKVar9 = pKVar6->klass;
      uVar2._0_1_ = (pKVar9->_2).rank;
      uVar2._1_1_ = (pKVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
            pVVar8 = pKVar9->vtable + (*piVar11 + 0x18);
            goto LAB_032af23c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x18);
LAB_032af23c:
      (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
      pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
      uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
                    /* try { // try from 032af268 to 033af3cb has its CatchHandler @ 032af268
                       catch() { ... } // from try @ 032af268 with catch @ 032af268
                       catch() { ... } // from try @ 032af520 with catch @ 032af268
                       catch() { ... } // from try @ 032af588 with catch @ 032af268
                       catch() { ... } // from try @ 032af5f0 with catch @ 032af268
                       catch() { ... } // from try @ 032af630 with catch @ 032af268 */
      System_Action<Int32Enum>___ctor();
      if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
        pKVar9 = pKVar6->klass;
        uVar3._0_1_ = (pKVar9->_2).rank;
        uVar3._1_1_ = (pKVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar3;
        if (uVar10 != 0) {
          piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar8 = pKVar9->vtable + (*piVar11 + 0x10);
              goto LAB_032af2cc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x10);
LAB_032af2cc:
        (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
        pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
          pKVar9 = pKVar6->klass;
          uVar4._0_1_ = (pKVar9->_2).rank;
          uVar4._1_1_ = (pKVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar4;
          if (uVar10 != 0) {
            piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                pVVar8 = pKVar9->vtable + (*piVar11 + 0x14);
                goto LAB_032af35c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x14);
LAB_032af35c:
          (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
          pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
          uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
          System_Action<Int32Enum>___ctor();
          if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
            pKVar9 = pKVar6->klass;
            uVar5._0_1_ = (pKVar9->_2).rank;
            uVar5._1_1_ = (pKVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar5;
            if (uVar10 != 0) {
              piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                  pVVar8 = pKVar9->vtable + (*piVar11 + 1);
                  goto LAB_032af3ec;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
                    /* try { // try from 032af3cc to 033af3d3 has its CatchHandler @ 032af5c4 */
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,1);
LAB_032af3ec:
                    /* try { // try from 032af3f8 to 033af3fb has its CatchHandler @ 032af58c */
                    /* WARNING: Could not recover jumptable at 0x032af404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 032af404 to 033af407 has its CatchHandler @ 032af5bc */
            (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DGLJCGNHLIG()  [RVA 0x31AEF18]
// DailyRefreshRewardHelper$$DGLJCGNHLIG @ RVA 0x31AEF18

void DailyRefreshRewardHelper__DGLJCGNHLIG(MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_int__int__o **ppSVar2;
  
  if ((DAT_04566b70 & 1) == 0) {
    FUN_01bab630(&DailyRefreshRewardHelper_TypeInfo);
    DAT_04566b70 = 1;
  }
  DailyRefreshRewardHelper_TypeInfo->static_fields->OBDBCPILHKI = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(DailyRefreshRewardHelper_TypeInfo->static_fields,0);
  ppSVar1 = &DailyRefreshRewardHelper_TypeInfo->static_fields->AEDKMCHPODL;
  *ppSVar1 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  ppSVar2 = &DailyRefreshRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar2 = (System_Action_int__int__o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}


// ===== private static void MBLOPJIFOMC()  [RVA 0x31AF41C]
// DailyRefreshRewardHelper$$MBLOPJIFOMC @ RVA 0x31AF41C

void DailyRefreshRewardHelper__MBLOPJIFOMC(MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_04566b71 & 1) == 0) {
                    /* try { // try from 032af43c to 033af43f has its CatchHandler @ 032af5b8 */
    FUN_01bab630(&Method_System_Array_Empty<object>__);
                    /* try { // try from 032af444 to 033af46b has its CatchHandler @ 032af5d0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&DailyRefreshRewardHelper_TypeInfo);
    FUN_01bab630(&StringLiteral_15450/*"[DailyRefreshRewardHelper] GiveReward"*/);
    DAT_04566b71 = 1;
  }
                    /* try { // try from 032af470 to 033af497 has its CatchHandler @ 032af5c8 */
  pSVar2 = DailyRefreshRewardHelper_TypeInfo->static_fields->OBDBCPILHKI;
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
  }
  lVar1 = Method_System_Array_Empty<object>__;
                    /* try { // try from 032af49c to 033af4c3 has its CatchHandler @ 032af5cc */
  lVar3 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
  if (lVar3 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<object>__);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
                    /* try { // try from 032af4dc to 033af4df has its CatchHandler @ 032af5b4 */
                    /* try { // try from 032af4e0 to 033af4ef has its CatchHandler @ 032af598 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
                    /* try { // try from 032af4f4 to 033af4ff has its CatchHandler @ 032af59c */
  args = (System_Object_array *)**(undefined8 **)(lVar1 + 0xb8);
                    /* try { // try from 032af500 to 033af50f has its CatchHandler @ 032af590 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 032af514 to 033af51f has its CatchHandler @ 032af5a0 */
  UnityEngine_Debug__LogFormat(StringLiteral_15450/*"[DailyRefreshRewardHelper] GiveReward"*/,args,(MethodInfo *)0x0);
  DailyRefreshRewardHelper__DGLJCGNHLIG(method_00);
                    /* try { // try from 032af520 to 033af56b has its CatchHandler @ 032af268 */
  DailyRefreshRewardHelper__IKAAFAICDMD(method_01);
  return;
}


// ===== private static void PLOLMAENPOJ(MPAKDCNMLEG BKFOLMBMFNP, int BHOMLBDEPOK, int LOANACDECHO)  [RVA 0x31AF52C]
// DailyRefreshRewardHelper$$PLOLMAENPOJ @ RVA 0x31AF52C

void DailyRefreshRewardHelper__PLOLMAENPOJ
               (int32_t BKFOLMBMFNP,int32_t BHOMLBDEPOK,int32_t LOANACDECHO,MethodInfo *method)

{
  if (BKFOLMBMFNP == 0xd) {
    DailyRefreshRewardHelper__MALGBADKPKB(BHOMLBDEPOK,LOANACDECHO,(MethodInfo *)(ulong)(uint)LOANACDECHO);
    return;
  }
  return;
}

