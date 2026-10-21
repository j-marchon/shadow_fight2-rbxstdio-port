// TypeDefIndex 3231
// Namespace: 
// public static class FDEOKGMPLBK
// Fields:
//   private const MPAKDCNMLEG IGEBDJFBDJI = 12;
//   private static Action OBDBCPILHKI; // 0x0
//   private static Action<int, int> HILLNHJFECF; // 0x8

// ===== private static void MALGBADKPKB(int JEGMMDPFNIL, int KMOHFJKJBMK)  [RVA 0x35057E8]
// FDEOKGMPLBK$$MALGBADKPKB @ RVA 0x35057E8

void FDEOKGMPLBK__MALGBADKPKB(int32_t JEGMMDPFNIL,int32_t KMOHFJKJBMK,MethodInfo *method)

{
  long lVar1;
  System_Action_int__int__o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_04568896 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__,KMOHFJKJBMK);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FDEOKGMPLBK_TypeInfo);
    FUN_01bab630(&StringLiteral_15549/*"[LotterySpinRewardHelper] UpdateViews"*/);
    DAT_04568896 = 1;
  }
  pSVar2 = FDEOKGMPLBK_TypeInfo->static_fields->HILLNHJFECF;
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
  UnityEngine_Debug__LogFormat(StringLiteral_15549/*"[LotterySpinRewardHelper] UpdateViews"*/,args,(MethodInfo *)0x0);
  return;
}


// ===== private static void PLOLMAENPOJ(MPAKDCNMLEG BKFOLMBMFNP, int BHOMLBDEPOK, int LOANACDECHO)  [RVA 0x3505908]
// FDEOKGMPLBK$$PLOLMAENPOJ @ RVA 0x3505908

void FDEOKGMPLBK__PLOLMAENPOJ
               (int32_t BKFOLMBMFNP,int32_t BHOMLBDEPOK,int32_t LOANACDECHO,MethodInfo *method)

{
  if (BKFOLMBMFNP == 0xc) {
    FDEOKGMPLBK__MALGBADKPKB(BHOMLBDEPOK,LOANACDECHO,(MethodInfo *)(ulong)(uint)LOANACDECHO);
    return;
  }
  return;
}


// ===== private static void LJGJPNGHGGM()  [RVA 0x3505920]
// FDEOKGMPLBK$$LJGJPNGHGGM @ RVA 0x3505920

void FDEOKGMPLBK__LJGJPNGHGGM(MethodInfo *method)

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
  
  if ((DAT_04568897 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
                    /* try { // try from 0360595c to 03705abf has its CatchHandler @ 0360595c
                       catch() { ... } // from try @ 0360595c with catch @ 0360595c
                       catch() { ... } // from try @ 03605ac8 with catch @ 0360595c
                       catch() { ... } // from try @ 03605b04 with catch @ 0360595c
                       catch() { ... } // from try @ 03605b28 with catch @ 0360595c
                       catch() { ... } // from try @ 03605b68 with catch @ 0360595c */
    FUN_01bab630(&Method_FDEOKGMPLBK_BHCOJOPEOHH__);
    FUN_01bab630(&Method_FDEOKGMPLBK_EFDGBPJANAC__);
    FUN_01bab630(&Method_FDEOKGMPLBK_PLOLMAENPOJ__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04568897 = 1;
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
          goto LAB_03605a54;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xd);
LAB_03605a54:
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
            goto LAB_03605aec;
          }
                    /* try { // try from 03605ac0 to 03705ac7 has its CatchHandler @ 03605b0c */
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
                    /* try { // try from 03605ac8 to 03705aff has its CatchHandler @ 0360595c */
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x18);
LAB_03605aec:
      (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
                    /* try { // try from 03605b00 to 03705b03 has its CatchHandler @ 03605b08 */
      pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03605b04 to 03705b23 has its CatchHandler @ 0360595c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03605b00 with catch @ 03605b08
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03605ac0 with catch @ 03605b0c
                        */
      uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
                    /* try { // try from 03605b24 to 03705b27 has its CatchHandler @ 03605b50 */
      System_Action<Int32Enum>___ctor();
                    /* try { // try from 03605b28 to 03705b5f has its CatchHandler @ 0360595c */
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
                    /* try { // try from 03605b74 to 03705b7b has its CatchHandler @ 03605b7c */
              pVVar8 = pKVar9->vtable + (*piVar11 + 0x10);
              goto LAB_03605b7c;
            }
                    /* catch() { ... } // from try @ 03605b24 with catch @ 03605b50 */
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
                    /* try { // try from 03605b60 to 03705b67 has its CatchHandler @ 03605b7c */
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x10);
                    /* try { // try from 03605b68 to 03705b73 has its CatchHandler @ 0360595c */
LAB_03605b7c:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03605b60 with catch @ 03605b7c
                       catch(type#2 @ 00000000) { ... } // from try @ 03605b74 with catch @ 03605b7c
                        */
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
                goto LAB_03605c0c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x14);
LAB_03605c0c:
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
                  goto LAB_03605c9c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,1);
LAB_03605c9c:
                    /* WARNING: Could not recover jumptable at 0x03605cb4. Too many branches */
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


// ===== public static void DGLJCGNHLIG()  [RVA 0x3505CBC]
// FDEOKGMPLBK$$DGLJCGNHLIG @ RVA 0x3505CBC

void FDEOKGMPLBK__DGLJCGNHLIG(MethodInfo *method)

{
  System_Action_int__int__o **ppSVar1;
  
  if ((DAT_04568898 & 1) == 0) {
    FUN_01bab630(&FDEOKGMPLBK_TypeInfo);
    DAT_04568898 = 1;
  }
  FDEOKGMPLBK_TypeInfo->static_fields->OBDBCPILHKI = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(FDEOKGMPLBK_TypeInfo->static_fields,0);
  ppSVar1 = &FDEOKGMPLBK_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar1 = (System_Action_int__int__o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== private static void IKAAFAICDMD()  [RVA 0x3505D24]
// FDEOKGMPLBK$$IKAAFAICDMD @ RVA 0x3505D24

void FDEOKGMPLBK__IKAAFAICDMD(MethodInfo *method)

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
  
  if ((DAT_04568899 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
    FUN_01bab630(&Method_FDEOKGMPLBK_BHCOJOPEOHH__);
    FUN_01bab630(&Method_FDEOKGMPLBK_EFDGBPJANAC__);
    FUN_01bab630(&Method_FDEOKGMPLBK_PLOLMAENPOJ__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04568899 = 1;
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
          goto LAB_03605e58;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xe);
LAB_03605e58:
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
            goto LAB_03605ef0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x11);
LAB_03605ef0:
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
              goto LAB_03605f80;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,5);
LAB_03605f80:
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
                goto LAB_03606010;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x16);
LAB_03606010:
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
                  goto LAB_036060a0;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xf);
LAB_036060a0:
                    /* WARNING: Could not recover jumptable at 0x036060b8. Too many branches */
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


// ===== private static void BHCOJOPEOHH(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x35060C0]
// FDEOKGMPLBK$$BHCOJOPEOHH @ RVA 0x35060C0

void FDEOKGMPLBK__BHCOJOPEOHH(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (BKFOLMBMFNP == 0xc) {
    FDEOKGMPLBK__DGLJCGNHLIG((MethodInfo *)0xc);
    FDEOKGMPLBK__IKAAFAICDMD(method_00);
    return;
  }
  return;
}


// ===== private static void EFDGBPJANAC(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x35060DC]
// FDEOKGMPLBK$$EFDGBPJANAC @ RVA 0x35060DC

void FDEOKGMPLBK__EFDGBPJANAC(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  if (BKFOLMBMFNP == 0xc) {
    FDEOKGMPLBK__MBLOPJIFOMC((MethodInfo *)0xc);
    return;
  }
  return;
}


// ===== private static void POBKBKBKBEM()  [RVA 0x35061FC]
// FDEOKGMPLBK$$POBKBKBKBEM @ RVA 0x35061FC

void FDEOKGMPLBK__POBKBKBKBEM(MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this,0x3b,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MBLOPJIFOMC()  [RVA 0x35060EC]
// FDEOKGMPLBK$$MBLOPJIFOMC @ RVA 0x35060EC

void FDEOKGMPLBK__MBLOPJIFOMC(MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_0456889a & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FDEOKGMPLBK_TypeInfo);
    FUN_01bab630(&StringLiteral_15547/*"[LotterySpinRewardHelper] GiveReward"*/);
    DAT_0456889a = 1;
  }
  pSVar2 = FDEOKGMPLBK_TypeInfo->static_fields->OBDBCPILHKI;
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
  UnityEngine_Debug__LogFormat(StringLiteral_15547/*"[LotterySpinRewardHelper] GiveReward"*/,args,(MethodInfo *)0x0);
  FDEOKGMPLBK__DGLJCGNHLIG(method_00);
  FDEOKGMPLBK__IKAAFAICDMD(method_01);
  return;
}


// ===== public static void FAAJFKFKBOL(Action PJDPEGNLFHH, Action<int, int> HLBLIDOPBJJ)  [RVA 0x3506220]
// FDEOKGMPLBK$$FAAJFKFKBOL @ RVA 0x3506220

void FDEOKGMPLBK__FAAJFKFKBOL
               (System_Action_o *PJDPEGNLFHH,System_Action_int__int__o *HLBLIDOPBJJ,
               MethodInfo *method)

{
  System_Action_int__int__o **ppSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_0456889b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FDEOKGMPLBK_TypeInfo);
    FUN_01bab630(&StringLiteral_15548/*"[LotterySpinRewardHelper] ShowAD"*/);
    DAT_0456889b = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_15548/*"[LotterySpinRewardHelper] ShowAD"*/,(MethodInfo *)0x0);
  FDEOKGMPLBK_TypeInfo->static_fields->OBDBCPILHKI = PJDPEGNLFHH;
  thunk_FUN_01c20e04(FDEOKGMPLBK_TypeInfo->static_fields,PJDPEGNLFHH);
  ppSVar1 = &FDEOKGMPLBK_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar1 = HLBLIDOPBJJ;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar1,HLBLIDOPBJJ);
  FDEOKGMPLBK__LJGJPNGHGGM(method_00);
  FDEOKGMPLBK__POBKBKBKBEM(method_01);
  return;
}

