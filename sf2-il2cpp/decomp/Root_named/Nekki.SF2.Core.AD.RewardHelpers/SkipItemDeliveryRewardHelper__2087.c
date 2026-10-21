// Original name: Nekki.SF2.Core.AD.RewardHelpers.SkipItemDeliveryRewardHelper  (obfuscated FEPCHKMAIBL)
// TypeDefIndex 2087
// Namespace: 
// public static class SkipItemDeliveryRewardHelper
// Fields:
//   public static long JKIEAGJNDFE; // 0x0
//   public static long PDNICPKGDOL; // 0x8
//   private const MPAKDCNMLEG IGEBDJFBDJI = 10;
//   private static HOOAAGABMBL AIGNPODKOAH; // 0x10
//   private static Action OBDBCPILHKI; // 0x18
//   private static Action<int, int> HILLNHJFECF; // 0x20

// ===== private static void JHDFNPOBMKH()  [RVA 0x32C33D0]
// SkipItemDeliveryRewardHelper$$JHDFNPOBMKH @ RVA 0x32C33D0

void SkipItemDeliveryRewardHelper__JHDFNPOBMKH(MethodInfo *method)

{
  IGFGDDANEPE_o *__this;
  int64_t iVar1;
  System_Object_array *args;
  undefined8 uVar2;
  Roster_o *pAVar3;
  HOOAAGABMBL_o *pHVar4;
  GGHCLMEFIGO_o *__this_00;
  int64_t val1;
  System_String_o *pSVar5;
  long lVar6;
  
  if ((DAT_045674dc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15587/*"[SkipItemDeliveryRewardHelper] GiveReward: ItemName='{0}'"*/);
    DAT_045674dc = 1;
  }
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (Roster_o *)0x0) {
    __this_00 = (pAVar3->fields).OIDPLCLELEN;
    if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_00 != (GGHCLMEFIGO_o *)0x0) {
      __this = GGHCLMEFIGO__JNFIBDBHNOA
                         (__this_00,SkipItemDeliveryRewardHelper_TypeInfo->static_fields->AIGNPODKOAH,
                          (MethodInfo *)0x0);
      if (__this != (IGFGDDANEPE_o *)0x0) {
        iVar1 = IGFGDDANEPE__OMMIKNKEKJN(__this,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM <= iVar1) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b87 == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b87 = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          val1 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
          iVar1 = IGFGDDANEPE__OMMIKNKEKJN(__this,(MethodInfo *)0x0);
          if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(SkipItemDeliveryRewardHelper_TypeInfo);
          }
          lVar6 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields->JKIEAGJNDFE;
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar1 = System_Math__Max(val1,iVar1 - lVar6,(MethodInfo *)0x0);
          IGFGDDANEPE__DOOKHLFKCAI(__this,iVar1,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar3 != (Roster_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            pHVar4 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields->AIGNPODKOAH;
            if ((pHVar4 != (HOOAAGABMBL_o *)0x0) && (args != (System_Object_array *)0x0)) {
              pSVar5 = (pHVar4->fields)._COIPKAKHDFP_k__BackingField;
              if ((pSVar5 != (System_String_o *)0x0) &&
                 (lVar6 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class),
                 lVar6 == 0)) {
                uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar2,0);
              }
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)pSVar5;
                thunk_FUN_01c20e04(args->m_Items,pSVar5);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogFormat(StringLiteral_15587/*"[SkipItemDeliveryRewardHelper] GiveReward: ItemName='{0}'"*/,args,(MethodInfo *)0x0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
          goto LAB_033c36e0;
        }
      }
      return;
    }
  }
LAB_033c36e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MALGBADKPKB(int JEGMMDPFNIL, int KMOHFJKJBMK)  [RVA 0x32C36F4]
// SkipItemDeliveryRewardHelper$$MALGBADKPKB @ RVA 0x32C36F4

void SkipItemDeliveryRewardHelper__MALGBADKPKB(int32_t JEGMMDPFNIL,int32_t KMOHFJKJBMK,MethodInfo *method)

{
  long lVar1;
  System_Action_int__int__o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_045674dd & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__,KMOHFJKJBMK);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    FUN_01bab630(&StringLiteral_15590/*"[SkipItemDeliveryRewardHelper] UpdateViews"*/);
    DAT_045674dd = 1;
  }
  if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
  if (pSVar2 != (System_Action_int__int__o *)0x0) {
    if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pSVar2 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
      if (pSVar2 == (System_Action_int__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,JEGMMDPFNIL,KMOHFJKJBMK,
               (pSVar2->fields).super.super.method);
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
    UnityEngine_Debug__LogFormat(StringLiteral_15590/*"[SkipItemDeliveryRewardHelper] UpdateViews"*/,args,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x32C3854]
// SkipItemDeliveryRewardHelper$$.cctor @ RVA 0x32C3854

void SkipItemDeliveryRewardHelper___cctor(MethodInfo *method)

{
  SkipItemDeliveryRewardHelper_StaticFields *pFVar1;
  
  if ((DAT_045674de & 1) == 0) {
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    DAT_045674de = 1;
  }
  pFVar1 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields;
  pFVar1->PDNICPKGDOL = 0x4b0;
  pFVar1->JKIEAGJNDFE = 0xb4;
  return;
}


// ===== private static void IKAAFAICDMD()  [RVA 0x32C38A4]
// SkipItemDeliveryRewardHelper$$IKAAFAICDMD @ RVA 0x32C38A4

void SkipItemDeliveryRewardHelper__IKAAFAICDMD(MethodInfo *method)

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
  
  if ((DAT_045674df & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
    FUN_01bab630(&Method_FEPCHKMAIBL_BHCOJOPEOHH__);
    FUN_01bab630(&Method_FEPCHKMAIBL_EFDGBPJANAC__);
    FUN_01bab630(&Method_FEPCHKMAIBL_PLOLMAENPOJ__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_045674df = 1;
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
          goto LAB_033c39d8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xe);
LAB_033c39d8:
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
            goto LAB_033c3a70;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x11);
LAB_033c3a70:
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
              goto LAB_033c3b00;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,5);
LAB_033c3b00:
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
                goto LAB_033c3b90;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x16);
LAB_033c3b90:
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
                  goto LAB_033c3c20;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xf);
LAB_033c3c20:
                    /* WARNING: Could not recover jumptable at 0x033c3c38. Too many branches */
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


// ===== private static void HNCHAGOGMBL()  [RVA 0x32C3C40]
// SkipItemDeliveryRewardHelper$$HNCHAGOGMBL @ RVA 0x32C3C40

void SkipItemDeliveryRewardHelper__HNCHAGOGMBL(MethodInfo *method)

{
  IGFGDDANEPE_o *__this;
  int64_t iVar1;
  System_Object_array *args;
  undefined8 uVar2;
  Roster_o *pAVar3;
  HOOAAGABMBL_o *pHVar4;
  GGHCLMEFIGO_o *__this_00;
  int64_t val1;
  System_String_o *pSVar5;
  long lVar6;
  
  if ((DAT_045674e0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15587/*"[SkipItemDeliveryRewardHelper] GiveReward: ItemName='{0}'"*/);
    DAT_045674e0 = 1;
  }
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (Roster_o *)0x0) {
    __this_00 = (pAVar3->fields).OIDPLCLELEN;
    if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_00 != (GGHCLMEFIGO_o *)0x0) {
      __this = GGHCLMEFIGO__JNFIBDBHNOA
                         (__this_00,SkipItemDeliveryRewardHelper_TypeInfo->static_fields->AIGNPODKOAH,
                          (MethodInfo *)0x0);
      if ((__this != (IGFGDDANEPE_o *)0x0) && ((__this->fields).HJLEJIJKJKD != (AMJMGFCCAKN_o *)0x0)
         ) {
        iVar1 = IGFGDDANEPE__HJNDKMKFGIP(__this,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM <= iVar1) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b87 == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b87 = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          val1 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
          iVar1 = IGFGDDANEPE__HJNDKMKFGIP(__this,(MethodInfo *)0x0);
          if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(SkipItemDeliveryRewardHelper_TypeInfo);
          }
          lVar6 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields->PDNICPKGDOL;
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar1 = System_Math__Max(val1,iVar1 - lVar6,(MethodInfo *)0x0);
          IGFGDDANEPE__JONJCPBEJDP(__this,iVar1,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar3 != (Roster_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            pHVar4 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields->AIGNPODKOAH;
            if ((pHVar4 != (HOOAAGABMBL_o *)0x0) && (args != (System_Object_array *)0x0)) {
              pSVar5 = (pHVar4->fields)._COIPKAKHDFP_k__BackingField;
              if ((pSVar5 != (System_String_o *)0x0) &&
                 (lVar6 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class),
                 lVar6 == 0)) {
                uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar2,0);
              }
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)pSVar5;
                thunk_FUN_01c20e04(args->m_Items,pSVar5);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogFormat(StringLiteral_15587/*"[SkipItemDeliveryRewardHelper] GiveReward: ItemName='{0}'"*/,args,(MethodInfo *)0x0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
          goto LAB_033c3f5c;
        }
      }
      return;
    }
  }
LAB_033c3f5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void DGLJCGNHLIG()  [RVA 0x32C3F70]
// SkipItemDeliveryRewardHelper$$DGLJCGNHLIG @ RVA 0x32C3F70

void SkipItemDeliveryRewardHelper__DGLJCGNHLIG(MethodInfo *method)

{
  HOOAAGABMBL_o **ppHVar1;
  System_Action_o **ppSVar2;
  System_Action_int__int__o **ppSVar3;
  
  if ((DAT_045674e1 & 1) == 0) {
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    DAT_045674e1 = 1;
  }
  if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppHVar1 = &SkipItemDeliveryRewardHelper_TypeInfo->static_fields->AIGNPODKOAH;
  *ppHVar1 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar1,0);
  ppSVar2 = &SkipItemDeliveryRewardHelper_TypeInfo->static_fields->OBDBCPILHKI;
  *ppSVar2 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  ppSVar3 = &SkipItemDeliveryRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar3 = (System_Action_int__int__o *)0x0;
  thunk_FUN_01c20e04(ppSVar3,0);
  return;
}


// ===== public static void DDKMAJOBNFM(HOOAAGABMBL ANMFBABEMFD, Action<int, int> HLBLIDOPBJJ)  [RVA 0x32C3FF4]
// SkipItemDeliveryRewardHelper$$DDKMAJOBNFM @ RVA 0x32C3FF4

void SkipItemDeliveryRewardHelper__DDKMAJOBNFM
               (HOOAAGABMBL_o *ANMFBABEMFD,System_Action_int__int__o *HLBLIDOPBJJ,MethodInfo *method
               )

{
  FUN_03f93660(DAT_045674e2);
  return;
}


// ===== private static void EFDGBPJANAC(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x32C4578]
// SkipItemDeliveryRewardHelper$$EFDGBPJANAC @ RVA 0x32C4578

void SkipItemDeliveryRewardHelper__EFDGBPJANAC(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  SkipItemDeliveryRewardHelper_c *method_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674e3 & 1) == 0) {
                    /* catch() { ... } // from try @ 033c456c with catch @ 033c4594 */
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
                    /* try { // try from 033c459c to 034c45a3 has its CatchHandler @ 033c45b8 */
    DAT_045674e3 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033c45a4 to 034c45af has its CatchHandler @ 033c439c */
  if (BKFOLMBMFNP == 10) {
                    /* try { // try from 033c45b0 to 034c45b7 has its CatchHandler @ 033c45b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c459c with catch @ 033c45b8
                       catch(type#2 @ 00000000) { ... } // from try @ 033c45b0 with catch @ 033c45b8
                        */
    method_00 = SkipItemDeliveryRewardHelper_TypeInfo;
    if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (SkipItemDeliveryRewardHelper_c *)thunk_FUN_01ba7564(SkipItemDeliveryRewardHelper_TypeInfo,method);
    }
    SkipItemDeliveryRewardHelper__MBLOPJIFOMC((MethodInfo *)method_00);
    return;
  }
  return;
}


// ===== private static void BHCOJOPEOHH(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x32C4748]
// SkipItemDeliveryRewardHelper$$BHCOJOPEOHH @ RVA 0x32C4748

void SkipItemDeliveryRewardHelper__BHCOJOPEOHH(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  SkipItemDeliveryRewardHelper_c *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674e4 & 1) == 0) {
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    DAT_045674e4 = 1;
    method = extraout_x1;
  }
  if (BKFOLMBMFNP == 10) {
    method_00 = SkipItemDeliveryRewardHelper_TypeInfo;
    if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (SkipItemDeliveryRewardHelper_c *)thunk_FUN_01ba7564(SkipItemDeliveryRewardHelper_TypeInfo,method);
    }
    SkipItemDeliveryRewardHelper__DGLJCGNHLIG((MethodInfo *)method_00);
    SkipItemDeliveryRewardHelper__IKAAFAICDMD(method_01);
    return;
  }
  return;
}


// ===== private static void PLOLMAENPOJ(MPAKDCNMLEG BKFOLMBMFNP, int BHOMLBDEPOK, int LOANACDECHO)  [RVA 0x32C47B0]
// SkipItemDeliveryRewardHelper$$PLOLMAENPOJ @ RVA 0x32C47B0

void SkipItemDeliveryRewardHelper__PLOLMAENPOJ
               (int32_t BKFOLMBMFNP,int32_t BHOMLBDEPOK,int32_t LOANACDECHO,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)LOANACDECHO;
  if ((DAT_045674e5 & 1) == 0) {
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    DAT_045674e5 = 1;
  }
  if (BKFOLMBMFNP == 10) {
    if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SkipItemDeliveryRewardHelper__MALGBADKPKB(BHOMLBDEPOK,LOANACDECHO,method_00);
    return;
  }
  return;
}


// ===== private static void LJGJPNGHGGM()  [RVA 0x32C41B8]
// SkipItemDeliveryRewardHelper$$LJGJPNGHGGM @ RVA 0x32C41B8

void SkipItemDeliveryRewardHelper__LJGJPNGHGGM(MethodInfo *method)

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
  
                    /* try { // try from 033c41b8 to 034c41db has its CatchHandler @ 033c40d4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4188 with catch @ 033c41bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c41b4 with catch @ 033c41c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4168 with catch @ 033c41c4
                        */
  if ((DAT_045674e6 & 1) == 0) {
                    /* try { // try from 033c41dc to 034c41df has its CatchHandler @ 033c4208 */
                    /* try { // try from 033c41e0 to 034c4217 has its CatchHandler @ 033c40d4 */
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
    FUN_01bab630(&Method_FEPCHKMAIBL_BHCOJOPEOHH__);
    FUN_01bab630(&Method_FEPCHKMAIBL_EFDGBPJANAC__);
                    /* catch() { ... } // from try @ 033c41dc with catch @ 033c4208 */
    FUN_01bab630(&Method_FEPCHKMAIBL_PLOLMAENPOJ__);
                    /* try { // try from 033c4218 to 034c421f has its CatchHandler @ 033c4234 */
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
                    /* try { // try from 033c4220 to 034c422b has its CatchHandler @ 033c40d4 */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
                    /* try { // try from 033c422c to 034c4233 has its CatchHandler @ 033c4234 */
    DAT_045674e6 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c4218 with catch @ 033c4234
                       catch(type#2 @ 00000000) { ... } // from try @ 033c422c with catch @ 033c4234
                        */
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
          goto LAB_033c42ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xd);
LAB_033c42ec:
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
            goto LAB_033c4384;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x18);
LAB_033c4384:
      (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
      pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 033c439c to 034c4477 has its CatchHandler @ 033c439c
                       catch() { ... } // from try @ 033c439c with catch @ 033c439c
                       catch() { ... } // from try @ 033c44fc with catch @ 033c439c
                       catch() { ... } // from try @ 033c453c with catch @ 033c439c
                       catch() { ... } // from try @ 033c4570 with catch @ 033c439c
                       catch() { ... } // from try @ 033c45a4 with catch @ 033c439c */
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
              goto LAB_033c4414;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x10);
LAB_033c4414:
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
                goto LAB_033c44a4;
              }
                    /* try { // try from 033c4478 to 034c447f has its CatchHandler @ 033c455c */
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x14);
                    /* try { // try from 033c4490 to 034c4497 has its CatchHandler @ 033c4554 */
LAB_033c44a4:
          (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
          pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 033c44c0 to 034c44c3 has its CatchHandler @ 033c4540 */
                    /* try { // try from 033c44c4 to 034c44d3 has its CatchHandler @ 033c4558 */
          uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
          System_Action<Int32Enum>___ctor();
                    /* try { // try from 033c44e0 to 034c44eb has its CatchHandler @ 033c454c */
          if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
            pKVar9 = pKVar6->klass;
            uVar5._0_1_ = (pKVar9->_2).rank;
            uVar5._1_1_ = (pKVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar5;
                    /* try { // try from 033c44f0 to 034c44fb has its CatchHandler @ 033c4548 */
            if (uVar10 != 0) {
              piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 033c44fc to 034c4533 has its CatchHandler @ 033c439c */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                  pVVar8 = pKVar9->vtable + (*piVar11 + 1);
                  goto LAB_033c4534;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,1);
LAB_033c4534:
                    /* try { // try from 033c4534 to 034c4537 has its CatchHandler @ 033c4550 */
                    /* try { // try from 033c4538 to 034c453b has its CatchHandler @ 033c4544 */
                    /* try { // try from 033c453c to 034c456b has its CatchHandler @ 033c439c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c44c0 with catch @ 033c4540
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4538 with catch @ 033c4544
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c44f0 with catch @ 033c4548
                        */
                    /* WARNING: Could not recover jumptable at 0x033c454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c44e0 with catch @ 033c454c
                        */
            (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4534 with catch @ 033c4550
                        */
  FUN_01bab8c8();
}


// ===== private static void POBKBKBKBEM()  [RVA 0x32C4554]
// SkipItemDeliveryRewardHelper$$POBKBKBKBEM @ RVA 0x32C4554

void SkipItemDeliveryRewardHelper__POBKBKBKBEM(MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4490 with catch @ 033c4554
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c44c4 with catch @ 033c4558
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4478 with catch @ 033c455c
                        */
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 033c456c to 034c456f has its CatchHandler @ 033c4594 */
                    /* try { // try from 033c4570 to 034c459b has its CatchHandler @ 033c439c */
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this,0x3a,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MBLOPJIFOMC()  [RVA 0x32C45DC]
// SkipItemDeliveryRewardHelper$$MBLOPJIFOMC @ RVA 0x32C45DC

void SkipItemDeliveryRewardHelper__MBLOPJIFOMC(MethodInfo *method)

{
  long lVar1;
  SkipItemDeliveryRewardHelper_c *method_00;
  MethodInfo *method_01;
  SkipItemDeliveryRewardHelper_StaticFields *pFVar2;
  System_Action_o *pSVar3;
  long lVar4;
  System_Object_array *args;
  
  if ((DAT_045674e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    FUN_01bab630(&StringLiteral_15586/*"[SkipItemDeliveryRewardHelper] GiveReward"*/);
    DAT_045674e7 = 1;
  }
  if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar2 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields;
  if (pFVar2->AIGNPODKOAH != (HOOAAGABMBL_o *)0x0) {
    if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pFVar2 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields;
    }
    pSVar3 = pFVar2->OBDBCPILHKI;
    if (pSVar3 != (System_Action_o *)0x0) {
      if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar3 = SkipItemDeliveryRewardHelper_TypeInfo->static_fields->OBDBCPILHKI;
        if (pSVar3 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
    }
  }
  lVar1 = Method_System_Array_Empty<object>__;
  lVar4 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
  if (lVar4 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<object>__);
    lVar4 = *(long *)(lVar1 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
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
  UnityEngine_Debug__LogFormat(StringLiteral_15586/*"[SkipItemDeliveryRewardHelper] GiveReward"*/,args,(MethodInfo *)0x0);
  method_00 = SkipItemDeliveryRewardHelper_TypeInfo;
  if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (SkipItemDeliveryRewardHelper_c *)thunk_FUN_01ba7564();
  }
  SkipItemDeliveryRewardHelper__DGLJCGNHLIG((MethodInfo *)method_00);
  SkipItemDeliveryRewardHelper__IKAAFAICDMD(method_01);
  return;
}


// ===== public static void NDCCCHJDNFP(HOOAAGABMBL ANMFBABEMFD, Action<int, int> HLBLIDOPBJJ)  [RVA 0x32C4830]
// SkipItemDeliveryRewardHelper$$NDCCCHJDNFP @ RVA 0x32C4830

void SkipItemDeliveryRewardHelper__NDCCCHJDNFP
               (HOOAAGABMBL_o *ANMFBABEMFD,System_Action_int__int__o *HLBLIDOPBJJ,MethodInfo *method
               )

{
  System_String_o **ppSVar1;
  System_String_o *format;
  System_Object_array *args;
  long lVar2;
  HOOAAGABMBL_o **ppHVar3;
  System_Action_o *pSVar4;
  System_Action_o **ppSVar5;
  System_Action_int__int__o **ppSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar7;
  System_String_o *pSVar8;
  
                    /* try { // try from 033c484c to 034c4947 has its CatchHandler @ 033c484c
                       catch() { ... } // from try @ 033c484c with catch @ 033c484c
                       catch() { ... } // from try @ 033c49a8 with catch @ 033c484c
                       catch() { ... } // from try @ 033c49e0 with catch @ 033c484c
                       catch() { ... } // from try @ 033c4a1c with catch @ 033c484c
                       catch() { ... } // from try @ 033c4a4c with catch @ 033c484c */
  if ((DAT_045674e8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_FEPCHKMAIBL_HNCHAGOGMBL__);
    FUN_01bab630(&SkipItemDeliveryRewardHelper_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_19925/*"null"*/);
    FUN_01bab630(&StringLiteral_15588/*"[SkipItemDeliveryRewardHelper] SkipDeliverItemEnchant: ItemName='{0}'"*/);
    DAT_045674e8 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  format = StringLiteral_15588/*"[SkipItemDeliveryRewardHelper] SkipDeliverItemEnchant: ItemName='{0}'"*/;
  ppSVar1 = (System_String_o **)&StringLiteral_19925/*"null"*/;
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
    ppSVar1 = &(ANMFBABEMFD->fields)._COIPKAKHDFP_k__BackingField;
  }
  if (args != (System_Object_array *)0x0) {
    pSVar8 = *ppSVar1;
    if ((pSVar8 != (System_String_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c49dc with catch @ 033c49ec
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c49a0 with catch @ 033c49f0
                        */
      FUN_01bab798(uVar7,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar8;
      thunk_FUN_01c20e04(args->m_Items,pSVar8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033c4948 to 034c494f has its CatchHandler @ 033c4a00 */
      UnityEngine_Debug__LogFormat(format,args,(MethodInfo *)0x0);
      if ((SkipItemDeliveryRewardHelper_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppHVar3 = &SkipItemDeliveryRewardHelper_TypeInfo->static_fields->AIGNPODKOAH;
      *ppHVar3 = ANMFBABEMFD;
      thunk_FUN_01c20e04(ppHVar3,ANMFBABEMFD);
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 033c4990 to 034c499b has its CatchHandler @ 033c49f8 */
      System_Action___ctor();
                    /* try { // try from 033c49a0 to 034c49a7 has its CatchHandler @ 033c49f0 */
                    /* try { // try from 033c49a8 to 034c49d3 has its CatchHandler @ 033c484c */
      ppSVar5 = &SkipItemDeliveryRewardHelper_TypeInfo->static_fields->OBDBCPILHKI;
      *ppSVar5 = pSVar4;
      thunk_FUN_01c20e04(ppSVar5,pSVar4);
      ppSVar6 = &SkipItemDeliveryRewardHelper_TypeInfo->static_fields->HILLNHJFECF;
      *ppSVar6 = HLBLIDOPBJJ;
      method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar6,HLBLIDOPBJJ);
      SkipItemDeliveryRewardHelper__LJGJPNGHGGM(method_00);
                    /* try { // try from 033c49d4 to 034c49d7 has its CatchHandler @ 033c49fc */
                    /* try { // try from 033c49d8 to 034c49db has its CatchHandler @ 033c49f4 */
                    /* try { // try from 033c49dc to 034c49df has its CatchHandler @ 033c49ec */
      SkipItemDeliveryRewardHelper__POBKBKBKBEM(method_01);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033c49e0 to 034c4a17 has its CatchHandler @ 033c484c */
  FUN_01bab8c8();
}

