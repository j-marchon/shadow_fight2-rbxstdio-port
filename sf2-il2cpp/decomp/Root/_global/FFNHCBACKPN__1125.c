// TypeDefIndex 1125
// Namespace: 
// public class FFNHCBACKPN : BOFEMGGNODC
// Fields:

// ===== public void .ctor()  [RVA 0x30F486C]
// FFNHCBACKPN$$.ctor @ RVA 0x30F486C

void FFNHCBACKPN___ctor(FFNHCBACKPN_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NKGIJKODGAN()  [RVA 0x30F4874]
// FFNHCBACKPN$$NKGIJKODGAN @ RVA 0x30F4874

void FFNHCBACKPN__NKGIJKODGAN(FFNHCBACKPN_o *__this,MethodInfo *method)

{
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30F487C]
// FFNHCBACKPN$$MAHFCKJGBPP @ RVA 0x30F487C

void FFNHCBACKPN__MAHFCKJGBPP(FFNHCBACKPN_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  GCIFMNHADDF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this_02;
  PBAKFOBIHEG_o *pPVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04566443 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_FFNHCBACKPN_NKGIJKODGAN__);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_10658/*"QuestActionRaidFightScrollToNextCharge::RunAction: no RaidBuyConsumablesDialog!"*/);
    DAT_04566443 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)
                GCIFMNHADDF__BFJGHKKGOJC<object>
                          (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10658/*"QuestActionRaidFightScrollToNextCharge::RunAction: no RaidBuyConsumablesDialog!"*/,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
    if ((__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) &&
       (__this_02 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetChargesContainer
                              (__this_01,(MethodInfo *)0x0),
       __this_02 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0)) {
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ForcedImmediateScrollForward
                (__this_02,(MethodInfo *)0x0);
      pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar4 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
        pPVar6 = pPVar3->klass;
        uVar1._0_1_ = (pPVar6->_2).rank;
        uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
          piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar5 = pPVar6->vtable + (*piVar8 + 2);
              goto LAB_031f4a48;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_031f4a48:
                    /* WARNING: Could not recover jumptable at 0x031f4a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar5->methodPtr)(0x3d4ccccd,pPVar3,uVar4,pVVar5->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

