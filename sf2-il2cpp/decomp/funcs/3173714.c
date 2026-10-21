// IBILBKNKKDG$$CLNAOMIIBLH @ RVA 0x3173714

void IBILBKNKKDG__CLNAOMIIBLH(MethodInfo *method)

{
  ushort uVar1;
  IBILBKNKKDG_StaticFields *pIVar2;
  VirtualInvokeData *pVVar3;
  EOJBGBDLBKJ_c *pEVar4;
  ulong uVar5;
  int32_t *piVar6;
  EOJBGBDLBKJ_o *pEVar7;
  
  if ((DAT_04566941 & 1) == 0) {
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    DAT_04566941 = 1;
  }
  pIVar2 = IBILBKNKKDG_TypeInfo->static_fields;
  pEVar7 = pIVar2->IOPFMDCMMLD;
  if (pEVar7 != (EOJBGBDLBKJ_o *)0x0) {
    pEVar4 = pEVar7->klass;
    uVar1._0_1_ = (pEVar4->_2).rank;
    uVar1._1_1_ = (pEVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pEVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar3 = pEVar4->vtable + *piVar6;
          goto LAB_032737b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar7,System_IDisposable_TypeInfo,0);
LAB_032737b4:
    (*pVVar3->methodPtr)(pEVar7,pVVar3->method);
    pIVar2 = IBILBKNKKDG_TypeInfo->static_fields;
  }
  pIVar2->IOPFMDCMMLD = (EOJBGBDLBKJ_o *)0x0;
  thunk_FUN_01c20e04(&pIVar2->IOPFMDCMMLD,0);
  pIVar2 = IBILBKNKKDG_TypeInfo->static_fields;
  if (pIVar2->BAMNHCAKCIG != (NHOILKKCIMI_o *)0x0) {
    NHOILKKCIMI__Dispose(pIVar2->BAMNHCAKCIG,(MethodInfo *)0x0);
    pIVar2 = IBILBKNKKDG_TypeInfo->static_fields;
  }
  pIVar2->BAMNHCAKCIG = (NHOILKKCIMI_o *)0x0;
  thunk_FUN_01c20e04(&pIVar2->BAMNHCAKCIG,0);
  return;
}

