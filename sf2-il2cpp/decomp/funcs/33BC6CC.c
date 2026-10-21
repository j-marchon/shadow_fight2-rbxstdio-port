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

