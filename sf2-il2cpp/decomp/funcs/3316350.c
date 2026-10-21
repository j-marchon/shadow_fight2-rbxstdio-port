// MKFAKELPPAC$$CKBMGIOBIFN @ RVA 0x3316350

void MKFAKELPPAC__CKBMGIOBIFN(MethodInfo *method)

{
  ushort uVar1;
  MKFAKELPPAC_c *pMVar2;
  MKFAKELPPAC_o *pMVar3;
  HIAPEMMEAFP_o *pHVar4;
  VirtualInvokeData *pVVar5;
  UniRx_ReactiveProperty_KKEKKPIDGBK__o *__this;
  HIAPEMMEAFP_o **ppHVar6;
  HIAPEMMEAFP_c *pHVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_045677da & 1) == 0) {
    FUN_01bab630(&HIAPEMMEAFP_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<KKEKKPIDGBK>_set_Value__);
    DAT_045677da = 1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (MKFAKELPPAC_TypeInfo->static_fields->CBDMFFMCJBK != (MKFAKELPPAC_o *)0x0) {
    return;
  }
  pMVar2 = MKFAKELPPAC_TypeInfo;
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    pMVar2 = (MKFAKELPPAC_c *)thunk_FUN_01ba7564();
  }
  pMVar3 = MKFAKELPPAC__LKIDGCEFAMD((MethodInfo *)pMVar2);
  MKFAKELPPAC_TypeInfo->static_fields->CBDMFFMCJBK = pMVar3;
  thunk_FUN_01c20e04(MKFAKELPPAC_TypeInfo->static_fields,pMVar3);
  pMVar3 = MKFAKELPPAC_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pMVar3 != (MKFAKELPPAC_o *)0x0) {
    (*(pMVar3->klass->vtable)._31_unknown.methodPtr)
              (pMVar3,(pMVar3->klass->vtable)._31_unknown.method);
  }
  pMVar2 = MKFAKELPPAC_TypeInfo;
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    pMVar2 = (MKFAKELPPAC_c *)thunk_FUN_01ba7564();
  }
  pHVar4 = MKFAKELPPAC__NNPPMPBCMJB((MethodInfo *)pMVar2);
  ppHVar6 = &MKFAKELPPAC_TypeInfo->static_fields->AGCDAPOLHBL;
  *ppHVar6 = pHVar4;
  thunk_FUN_01c20e04(ppHVar6,pHVar4);
  pHVar4 = MKFAKELPPAC_TypeInfo->static_fields->AGCDAPOLHBL;
  if (pHVar4 != (HIAPEMMEAFP_o *)0x0) {
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pHVar7 = pHVar4->klass;
    pMVar3 = MKFAKELPPAC_TypeInfo->static_fields->CBDMFFMCJBK;
    uVar1._0_1_ = (pHVar7->_2).rank;
    uVar1._1_1_ = (pHVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pHVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HIAPEMMEAFP_TypeInfo) {
          pVVar5 = pHVar7->vtable + *piVar9;
          goto LAB_034164bc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pHVar4,HIAPEMMEAFP_TypeInfo,0);
LAB_034164bc:
    (*pVVar5->methodPtr)(pHVar4,pMVar3,pVVar5->method);
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = MKFAKELPPAC_TypeInfo->static_fields->HIINAEEPCDO;
  if (__this != (UniRx_ReactiveProperty_KKEKKPIDGBK__o *)0x0) {
    UniRx_ReactiveProperty<object>__set_Value
              ((UniRx_ReactiveProperty_T__o *)__this,
               (Il2CppObject *)MKFAKELPPAC_TypeInfo->static_fields->CBDMFFMCJBK,
               Method_UniRx_ReactiveProperty<KKEKKPIDGBK>_set_Value__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

