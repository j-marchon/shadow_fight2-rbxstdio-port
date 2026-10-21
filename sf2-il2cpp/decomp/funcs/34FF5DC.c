// LHKALFIIJKB$$EMABNEMMNON @ RVA 0x34FF5DC

void LHKALFIIJKB__EMABNEMMNON(MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  System_Collections_IEnumerator_o **ppSVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456884e & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456884e = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (LHKALFIIJKB_TypeInfo->static_fields->AFAKLFEDLPE == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  pSVar8 = LHKALFIIJKB_TypeInfo->static_fields->AFAKLFEDLPE;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_035ff6cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_035ff6cc:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  ppSVar4 = &LHKALFIIJKB_TypeInfo->static_fields->AFAKLFEDLPE;
  *ppSVar4 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar4,0);
  return;
}

