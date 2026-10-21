// TypeDefIndex 2659
// Namespace: 
// public class KHFOHGKPBFN : FCMAKNBEJDA
// Fields:
//   private readonly OCKCFHKADLN BDFFBHLCFOP; // 0x50
//   private TJPlacement ONHDDHPECEL; // 0x58
//   private bool BIMDPCEEHJD; // 0x60

// ===== public override void BFCCEGGDJEF(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x33BC610]
// KHFOHGKPBFN$$BFCCEGGDJEF @ RVA 0x33BC610

void KHFOHGKPBFN__BFCCEGGDJEF(KHFOHGKPBFN_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  bool_conflict bVar1;
  TapjoyUnity_TJPlacement_o *__this_00;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  
  bVar1 = (__this->fields).BIMDPCEEHJD;
  (__this->fields).super.JBNGADJBDHB = BKFOLMBMFNP;
  if ((bVar1 != false) &&
     (__this_00 = (__this->fields).ONHDDHPECEL, __this_00 != (TapjoyUnity_TJPlacement_o *)0x0)) {
    TapjoyUnity_TJPlacement__ShowContent(__this_00,(MethodInfo *)0x0);
    return;
  }
  pSVar2 = (__this->fields).super.NBEAOEDKFLO;
  if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034bc650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,BKFOLMBMFNP,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool BPHNBPHFDLM()  [RVA 0x33BC658]
// KHFOHGKPBFN$$BPHNBPHFDLM @ RVA 0x33BC658

bool KHFOHGKPBFN__BPHNBPHFDLM(KHFOHGKPBFN_o *__this,MethodInfo *method)

{
  bool bVar1;
  TapjoyUnity_TJPlacement_o *__this_00;
  
  __this_00 = (__this->fields).ONHDDHPECEL;
  if ((__this_00 != (TapjoyUnity_TJPlacement_o *)0x0) && ((__this->fields).BIMDPCEEHJD != false)) {
    bVar1 = TapjoyUnity_TJPlacement__IsContentReady(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== private void NEPFHCEJIOI(TJPlacement APCOBBHIFAF, string GPJHCIPBFOG)  [RVA 0x33BC67C]
// KHFOHGKPBFN$$NEPFHCEJIOI @ RVA 0x33BC67C

void KHFOHGKPBFN__NEPFHCEJIOI
               (KHFOHGKPBFN_o *__this,TapjoyUnity_TJPlacement_o *APCOBBHIFAF,
               System_String_o *GPJHCIPBFOG,MethodInfo *method)

{
  bool bVar1;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  
  if (APCOBBHIFAF != (TapjoyUnity_TJPlacement_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((APCOBBHIFAF->fields)._placementName,
                       (__this->fields).super._DGPEEKHPKHO_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).super.HABJODEHCNL;
    (__this->fields).BIMDPCEEHJD = false;
    if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034bc6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void FDKDJJJDKKK(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x33BC6CC]
// KHFOHGKPBFN$$FDKDJJJDKKK @ RVA 0x33BC6CC

void KHFOHGKPBFN__FDKDJJJDKKK(KHFOHGKPBFN_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  TapjoyUnity_TJPlacement_o *pTVar4;
  OCKCFHKADLN_c *pOVar5;
  System_Action_MPAKDCNMLEG__o *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  OCKCFHKADLN_o *pOVar9;
  TapjoyUnity_TJPlacement_o **ppTVar10;
  System_String_o *placementName;
  
  if ((DAT_04567daf & 1) == 0) {
    FUN_01bab630(&OCKCFHKADLN_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_TypeInfo);
    DAT_04567daf = 1;
  }
  pOVar9 = (__this->fields).BDFFBHLCFOP;
  (__this->fields).super.JBNGADJBDHB = BKFOLMBMFNP;
  if (pOVar9 != (OCKCFHKADLN_o *)0x0) {
    pOVar5 = pOVar9->klass;
    uVar1._0_1_ = (pOVar5->_2).rank;
    uVar1._1_1_ = (pOVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pOVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)OCKCFHKADLN_TypeInfo) {
          pVVar3 = pOVar5->vtable + (*piVar8 + 1);
          goto LAB_034bc76c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pOVar9,OCKCFHKADLN_TypeInfo,1);
LAB_034bc76c:
    uVar7 = (*pVVar3->methodPtr)(pOVar9,pVVar3->method);
    if ((uVar7 & 1) != 0) {
      ppTVar10 = &(__this->fields).ONHDDHPECEL;
      pTVar4 = *ppTVar10;
      if (pTVar4 == (TapjoyUnity_TJPlacement_o *)0x0) {
        placementName = (__this->fields).super._DGPEEKHPKHO_k__BackingField;
        if ((TapjoyUnity_TJPlacement_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pTVar4 = TapjoyUnity_TJPlacement__CreatePlacement(placementName,(MethodInfo *)0x0);
        (__this->fields).ONHDDHPECEL = pTVar4;
        thunk_FUN_01c20e04(ppTVar10,pTVar4);
        pTVar4 = (__this->fields).ONHDDHPECEL;
        (__this->fields).BIMDPCEEHJD = false;
        if (pTVar4 == (TapjoyUnity_TJPlacement_o *)0x0) goto LAB_034bc868;
      }
      else {
        (__this->fields).BIMDPCEEHJD = false;
      }
      TapjoyUnity_TJPlacement__RequestContent(pTVar4,(MethodInfo *)0x0);
      return;
    }
    pOVar9 = (__this->fields).BDFFBHLCFOP;
    if (pOVar9 != (OCKCFHKADLN_o *)0x0) {
      pOVar5 = pOVar9->klass;
      uVar2._0_1_ = (pOVar5->_2).rank;
      uVar2._1_1_ = (pOVar5->_2).minimumAlignment;
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pOVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)OCKCFHKADLN_TypeInfo) {
            pVVar3 = pOVar5->vtable + *piVar8;
            goto LAB_034bc838;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pOVar9,OCKCFHKADLN_TypeInfo,0);
LAB_034bc838:
      (*pVVar3->methodPtr)(pOVar9,pVVar3->method);
      pSVar6 = (__this->fields).super.HABJODEHCNL;
      if (pSVar6 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034bc864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar6->fields).super.super.invoke_impl)
                  ((pSVar6->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
                   (pSVar6->fields).super.super.method);
        return;
      }
    }
  }
LAB_034bc868:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KAMECPNAAIA(TJPlacement APCOBBHIFAF)  [RVA 0x33BC86C]
// KHFOHGKPBFN$$KAMECPNAAIA @ RVA 0x33BC86C

void KHFOHGKPBFN__KAMECPNAAIA
               (KHFOHGKPBFN_o *__this,TapjoyUnity_TJPlacement_o *APCOBBHIFAF,MethodInfo *method)

{
  bool bVar1;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  
  if (APCOBBHIFAF != (TapjoyUnity_TJPlacement_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((APCOBBHIFAF->fields)._placementName,
                       (__this->fields).super._DGPEEKHPKHO_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).super.EDPLNAAICPE;
    (__this->fields).BIMDPCEEHJD = false;
    if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034bc8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool OLHHONOHBMB()  [RVA 0x33BC8BC]
// KHFOHGKPBFN$$OLHHONOHBMB @ RVA 0x33BC8BC

bool KHFOHGKPBFN__OLHHONOHBMB(KHFOHGKPBFN_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor(OCKCFHKADLN FIOLDFEBONA, string HHNBKECFFPJ)  [RVA 0x33BC8C4]
// KHFOHGKPBFN$$.ctor @ RVA 0x33BC8C4

void KHFOHGKPBFN___ctor(KHFOHGKPBFN_o *__this,OCKCFHKADLN_o *FIOLDFEBONA,
                       System_String_o *HHNBKECFFPJ,MethodInfo *method)

{
  OCKCFHKADLN_o **ppOVar1;
  System_String_o **ppSVar2;
  TapjoyUnity_TJPlacement_OnRequestSuccessHandler_o *value;
  TapjoyUnity_TJPlacement_OnRequestFailureHandler_o *value_00;
  TapjoyUnity_TJPlacement_OnContentShowHandler_o *value_01;
  TapjoyUnity_TJPlacement_OnContentDismissHandler_o *value_02;
  
  if ((DAT_04567db0 & 1) == 0) {
    FUN_01bab630(&Method_KHFOHGKPBFN_EAGPILFCOGF__);
    FUN_01bab630(&Method_KHFOHGKPBFN_KAMECPNAAIA__);
    FUN_01bab630(&Method_KHFOHGKPBFN_NEPFHCEJIOI__);
    FUN_01bab630(&Method_KHFOHGKPBFN_PIPGLBKDGCB__);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnContentDismissHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnContentShowHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnRequestFailureHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnRequestSuccessHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_TypeInfo);
    DAT_04567db0 = 1;
  }
  FCMAKNBEJDA___ctor((FCMAKNBEJDA_o *)__this,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).BDFFBHLCFOP;
  *ppOVar1 = FIOLDFEBONA;
  thunk_FUN_01c20e04(ppOVar1,FIOLDFEBONA);
  ppSVar2 = &(__this->fields).super._DGPEEKHPKHO_k__BackingField;
  *ppSVar2 = HHNBKECFFPJ;
  thunk_FUN_01c20e04(ppSVar2,HHNBKECFFPJ);
  value = (TapjoyUnity_TJPlacement_OnRequestSuccessHandler_o *)
          thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnRequestSuccessHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnRequestSuccessHandler___ctor();
  if ((TapjoyUnity_TJPlacement_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  TapjoyUnity_TJPlacement__add_OnRequestSuccess(value,(MethodInfo *)0x0);
  value_00 = (TapjoyUnity_TJPlacement_OnRequestFailureHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnRequestFailureHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnRequestFailureHandler___ctor();
  TapjoyUnity_TJPlacement__add_OnRequestFailure(value_00,(MethodInfo *)0x0);
  value_01 = (TapjoyUnity_TJPlacement_OnContentShowHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnContentShowHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnContentShowHandler___ctor();
  TapjoyUnity_TJPlacement__add_OnContentShow(value_01,(MethodInfo *)0x0);
  value_02 = (TapjoyUnity_TJPlacement_OnContentDismissHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnContentDismissHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnContentDismissHandler___ctor();
  TapjoyUnity_TJPlacement__add_OnContentDismiss(value_02,(MethodInfo *)0x0);
  return;
}


// ===== private void EAGPILFCOGF(TJPlacement APCOBBHIFAF)  [RVA 0x33BCAA4]
// KHFOHGKPBFN$$EAGPILFCOGF @ RVA 0x33BCAA4

void KHFOHGKPBFN__EAGPILFCOGF
               (KHFOHGKPBFN_o *__this,TapjoyUnity_TJPlacement_o *APCOBBHIFAF,MethodInfo *method)

{
  bool bVar1;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  
  if (APCOBBHIFAF != (TapjoyUnity_TJPlacement_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((APCOBBHIFAF->fields)._placementName,
                       (__this->fields).super._DGPEEKHPKHO_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    bVar1 = TapjoyUnity_TJPlacement__IsContentAvailable(APCOBBHIFAF,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).super.NEKJNNBFECK;
      (__this->fields).BIMDPCEEHJD = true;
    }
    else {
      pSVar2 = (__this->fields).super.HABJODEHCNL;
      (__this->fields).BIMDPCEEHJD = false;
    }
    if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034bcb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Dispose()  [RVA 0x33BCB24]
// KHFOHGKPBFN$$Dispose @ RVA 0x33BCB24

void KHFOHGKPBFN__Dispose(KHFOHGKPBFN_o *__this,MethodInfo *method)

{
  TapjoyUnity_TJPlacement_OnRequestSuccessHandler_o *value;
  TapjoyUnity_TJPlacement_OnRequestFailureHandler_o *value_00;
  TapjoyUnity_TJPlacement_OnContentShowHandler_o *value_01;
  TapjoyUnity_TJPlacement_OnContentDismissHandler_o *value_02;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567db1 & 1) == 0) {
    FUN_01bab630(&Method_KHFOHGKPBFN_EAGPILFCOGF__);
    FUN_01bab630(&Method_KHFOHGKPBFN_KAMECPNAAIA__);
    FUN_01bab630(&Method_KHFOHGKPBFN_NEPFHCEJIOI__);
    FUN_01bab630(&Method_KHFOHGKPBFN_PIPGLBKDGCB__);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnContentDismissHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnContentShowHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnRequestFailureHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_OnRequestSuccessHandler_TypeInfo);
    FUN_01bab630(&TapjoyUnity_TJPlacement_TypeInfo);
    DAT_04567db1 = 1;
    method = extraout_x1;
  }
  value = (TapjoyUnity_TJPlacement_OnRequestSuccessHandler_o *)
          thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnRequestSuccessHandler_TypeInfo,method);
  TapjoyUnity_TJPlacement_OnRequestSuccessHandler___ctor();
  if ((TapjoyUnity_TJPlacement_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  TapjoyUnity_TJPlacement__remove_OnRequestSuccess(value,(MethodInfo *)0x0);
  value_00 = (TapjoyUnity_TJPlacement_OnRequestFailureHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnRequestFailureHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnRequestFailureHandler___ctor();
  TapjoyUnity_TJPlacement__remove_OnRequestFailure(value_00,(MethodInfo *)0x0);
  value_01 = (TapjoyUnity_TJPlacement_OnContentShowHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnContentShowHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnContentShowHandler___ctor();
  TapjoyUnity_TJPlacement__remove_OnContentShow(value_01,(MethodInfo *)0x0);
  value_02 = (TapjoyUnity_TJPlacement_OnContentDismissHandler_o *)
             thunk_FUN_01bda818(TapjoyUnity_TJPlacement_OnContentDismissHandler_TypeInfo);
  TapjoyUnity_TJPlacement_OnContentDismissHandler___ctor();
  TapjoyUnity_TJPlacement__remove_OnContentDismiss(value_02,(MethodInfo *)0x0);
  return;
}


// ===== private void PIPGLBKDGCB(TJPlacement APCOBBHIFAF)  [RVA 0x33BCCC8]
// KHFOHGKPBFN$$PIPGLBKDGCB @ RVA 0x33BCCC8

/* WARNING: Type propagation algorithm not settling */

void KHFOHGKPBFN__PIPGLBKDGCB
               (KHFOHGKPBFN_o *__this,TapjoyUnity_TJPlacement_o *APCOBBHIFAF,MethodInfo *method)

{
  bool bVar1;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  
  if (APCOBBHIFAF != (TapjoyUnity_TJPlacement_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((APCOBBHIFAF->fields)._placementName,
                       (__this->fields).super._DGPEEKHPKHO_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).super.IIEIOOACJJL;
    if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034bcd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool CDEIMFELDHP()  [RVA 0x33BCD14]
// KHFOHGKPBFN$$CDEIMFELDHP @ RVA 0x33BCD14

bool KHFOHGKPBFN__CDEIMFELDHP(KHFOHGKPBFN_o *__this,MethodInfo *method)

{
  return false;
}

