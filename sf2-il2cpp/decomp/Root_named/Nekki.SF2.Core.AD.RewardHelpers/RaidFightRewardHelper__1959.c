// Original name: Nekki.SF2.Core.AD.RewardHelpers.RaidFightRewardHelper  (obfuscated GALMANBEDCE)
// TypeDefIndex 1959
// Namespace: 
// public static class RaidFightRewardHelper
// Fields:
//   private const MPAKDCNMLEG IGEBDJFBDJI = 15;
//   private static Action OBDBCPILHKI; // 0x0
//   private static Action AEDKMCHPODL; // 0x8
//   private static Action<int, int> HILLNHJFECF; // 0x10

// ===== public static void FAAJFKFKBOL(Action PJDPEGNLFHH, Action IECMGNKMACB, Action<int, int> HLBLIDOPBJJ)  [RVA 0x3270560]
// RaidFightRewardHelper$$FAAJFKFKBOL @ RVA 0x3270560

void RaidFightRewardHelper__FAAJFKFKBOL
               (System_Action_o *PJDPEGNLFHH,System_Action_o *IECMGNKMACB,
               System_Action_int__int__o *HLBLIDOPBJJ,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_int__int__o **ppSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567296 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&RaidFightRewardHelper_TypeInfo);
    FUN_01bab630(&StringLiteral_15569/*"[RaidFightRewardHelper] ShowAD"*/);
    DAT_04567296 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_15569/*"[RaidFightRewardHelper] ShowAD"*/,(MethodInfo *)0x0);
  RaidFightRewardHelper_TypeInfo->static_fields->OBDBCPILHKI = PJDPEGNLFHH;
  thunk_FUN_01c20e04(RaidFightRewardHelper_TypeInfo->static_fields,PJDPEGNLFHH);
  ppSVar1 = &RaidFightRewardHelper_TypeInfo->static_fields->AEDKMCHPODL;
  *ppSVar1 = IECMGNKMACB;
  thunk_FUN_01c20e04(ppSVar1,IECMGNKMACB);
  ppSVar2 = &RaidFightRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar2 = HLBLIDOPBJJ;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar2,HLBLIDOPBJJ);
  RaidFightRewardHelper__LJGJPNGHGGM(method_00);
  RaidFightRewardHelper__POBKBKBKBEM(method_01);
  return;
}


// ===== private static void BHCOJOPEOHH(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x32813D4]
// RaidFightRewardHelper$$BHCOJOPEOHH @ RVA 0x32813D4

void RaidFightRewardHelper__BHCOJOPEOHH(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar1;
  
  method_00 = (MethodInfo *)(ulong)(uint)BKFOLMBMFNP;
  if ((DAT_04567297 & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&RaidFightRewardHelper_TypeInfo);
    DAT_04567297 = 1;
  }
  if (BKFOLMBMFNP == 0xf) {
    pSVar1 = RaidFightRewardHelper_TypeInfo->static_fields->AEDKMCHPODL;
    if (pSVar1 != (System_Action_o *)0x0) {
      method_00 = (MethodInfo *)
                  (*(code *)(pSVar1->fields).super.super.invoke_impl)
                            ((pSVar1->fields).super.super.method_code,
                             (pSVar1->fields).super.super.method);
    }
    RaidFightRewardHelper__DGLJCGNHLIG(method_00);
    RaidFightRewardHelper__IKAAFAICDMD(method_01);
    return;
  }
  return;
}


// ===== private static void LJGJPNGHGGM()  [RVA 0x3281014]
// RaidFightRewardHelper$$LJGJPNGHGGM @ RVA 0x3281014

void RaidFightRewardHelper__LJGJPNGHGGM(MethodInfo *method)

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
  
                    /* try { // try from 03381014 to 0348103b has its CatchHandler @ 03381050 */
  if ((DAT_04567298 & 1) == 0) {
                    /* try { // try from 0338103c to 03481047 has its CatchHandler @ 03380878 */
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
                    /* try { // try from 03381048 to 0348104f has its CatchHandler @ 03381050 */
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
                    /* catch() { ... } // from try @ 03380f84 with catch @ 03381050
                       catch() { ... } // from try @ 03381014 with catch @ 03381050
                       catch() { ... } // from try @ 03381048 with catch @ 03381050 */
    FUN_01bab630(&Method_GALMANBEDCE_BHCOJOPEOHH__);
    FUN_01bab630(&Method_GALMANBEDCE_EFDGBPJANAC__);
    FUN_01bab630(&Method_GALMANBEDCE_PLOLMAENPOJ__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04567298 = 1;
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
          goto LAB_03381148;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xd);
LAB_03381148:
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
            goto LAB_033811e0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x18);
LAB_033811e0:
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
              pVVar8 = pKVar9->vtable + (*piVar11 + 0x10);
              goto LAB_03381270;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x10);
LAB_03381270:
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
                goto LAB_03381300;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x14);
LAB_03381300:
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
                  goto LAB_03381390;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,1);
LAB_03381390:
                    /* WARNING: Could not recover jumptable at 0x033813a8. Too many branches */
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


// ===== public static void DGLJCGNHLIG()  [RVA 0x328144C]
// RaidFightRewardHelper$$DGLJCGNHLIG @ RVA 0x328144C

void RaidFightRewardHelper__DGLJCGNHLIG(MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_int__int__o **ppSVar2;
  
  if ((DAT_04567299 & 1) == 0) {
    FUN_01bab630(&RaidFightRewardHelper_TypeInfo);
    DAT_04567299 = 1;
  }
  RaidFightRewardHelper_TypeInfo->static_fields->OBDBCPILHKI = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(RaidFightRewardHelper_TypeInfo->static_fields,0);
  ppSVar1 = &RaidFightRewardHelper_TypeInfo->static_fields->AEDKMCHPODL;
  *ppSVar1 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  ppSVar2 = &RaidFightRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar2 = (System_Action_int__int__o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}


// ===== private static void POBKBKBKBEM()  [RVA 0x32813B0]
// RaidFightRewardHelper$$POBKBKBKBEM @ RVA 0x32813B0

void RaidFightRewardHelper__POBKBKBKBEM(MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this,0x3d,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void IKAAFAICDMD()  [RVA 0x32814C8]
// RaidFightRewardHelper$$IKAAFAICDMD @ RVA 0x32814C8

void RaidFightRewardHelper__IKAAFAICDMD(MethodInfo *method)

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
  
  if ((DAT_0456729a & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
    FUN_01bab630(&Method_GALMANBEDCE_BHCOJOPEOHH__);
    FUN_01bab630(&Method_GALMANBEDCE_EFDGBPJANAC__);
    FUN_01bab630(&Method_GALMANBEDCE_PLOLMAENPOJ__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_0456729a = 1;
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
          pVVar8 = pKVar9->vtable + (*piVar11 + 0xe);
          goto LAB_033815fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xe);
LAB_033815fc:
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
            pVVar8 = pKVar9->vtable + (*piVar11 + 0x11);
            goto LAB_03381694;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x11);
LAB_03381694:
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
              goto LAB_03381724;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,5);
LAB_03381724:
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
                goto LAB_033817b4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x16);
LAB_033817b4:
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
                  goto LAB_03381844;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xf);
LAB_03381844:
                    /* WARNING: Could not recover jumptable at 0x0338185c. Too many branches */
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


// ===== private static void EFDGBPJANAC(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x3281864]
// RaidFightRewardHelper$$EFDGBPJANAC @ RVA 0x3281864

void RaidFightRewardHelper__EFDGBPJANAC(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  if (BKFOLMBMFNP == 0xf) {
    RaidFightRewardHelper__MBLOPJIFOMC((MethodInfo *)0xf);
    return;
  }
  return;
}


// ===== private static void MBLOPJIFOMC()  [RVA 0x3281874]
// RaidFightRewardHelper$$MBLOPJIFOMC @ RVA 0x3281874

void RaidFightRewardHelper__MBLOPJIFOMC(MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_0456729b & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&RaidFightRewardHelper_TypeInfo);
    FUN_01bab630(&StringLiteral_15568/*"[RaidFightRewardHelper] GiveReward"*/);
    DAT_0456729b = 1;
  }
  pSVar2 = RaidFightRewardHelper_TypeInfo->static_fields->OBDBCPILHKI;
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
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
  UnityEngine_Debug__LogFormat(StringLiteral_15568/*"[RaidFightRewardHelper] GiveReward"*/,args,(MethodInfo *)0x0);
  RaidFightRewardHelper__DGLJCGNHLIG(method_00);
  RaidFightRewardHelper__IKAAFAICDMD(method_01);
  return;
}


// ===== private static void MALGBADKPKB(int JEGMMDPFNIL, int KMOHFJKJBMK)  [RVA 0x3281984]
// RaidFightRewardHelper$$MALGBADKPKB @ RVA 0x3281984

void RaidFightRewardHelper__MALGBADKPKB(int32_t JEGMMDPFNIL,int32_t KMOHFJKJBMK,MethodInfo *method)

{
  long lVar1;
  System_Action_int__int__o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_0456729c & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__,KMOHFJKJBMK);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&RaidFightRewardHelper_TypeInfo);
    FUN_01bab630(&StringLiteral_15570/*"[RaidFightRewardHelper] UpdateViews"*/);
    DAT_0456729c = 1;
  }
  pSVar2 = RaidFightRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
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
  UnityEngine_Debug__LogFormat(StringLiteral_15570/*"[RaidFightRewardHelper] UpdateViews"*/,args,(MethodInfo *)0x0);
  return;
}


// ===== private static void PLOLMAENPOJ(MPAKDCNMLEG BKFOLMBMFNP, int BHOMLBDEPOK, int LOANACDECHO)  [RVA 0x3281AA4]
// RaidFightRewardHelper$$PLOLMAENPOJ @ RVA 0x3281AA4

void RaidFightRewardHelper__PLOLMAENPOJ
               (int32_t BKFOLMBMFNP,int32_t BHOMLBDEPOK,int32_t LOANACDECHO,MethodInfo *method)

{
  if (BKFOLMBMFNP == 0xf) {
    RaidFightRewardHelper__MALGBADKPKB(BHOMLBDEPOK,LOANACDECHO,(MethodInfo *)(ulong)(uint)LOANACDECHO);
    return;
  }
  return;
}

