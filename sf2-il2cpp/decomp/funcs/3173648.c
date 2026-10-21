// IBILBKNKKDG$$DHAAGKPHJLA @ RVA 0x3173648

void IBILBKNKKDG__DHAAGKPHJLA(System_String_o *IHNKCJHDDKD,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  EOJBGBDLBKJ_c *pEVar3;
  ulong uVar4;
  int32_t *piVar5;
  EOJBGBDLBKJ_o *pEVar6;
  
  if ((DAT_04566940 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    DAT_04566940 = 1;
  }
  pEVar6 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
  if (pEVar6 == (EOJBGBDLBKJ_o *)0x0) {
    return;
  }
  pEVar3 = pEVar6->klass;
  uVar1._0_1_ = (pEVar3->_2).rank;
  uVar1._1_1_ = (pEVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pEVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
        pVVar2 = pEVar3->vtable + (*piVar5 + 5);
        goto LAB_032736fc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pEVar6,EOJBGBDLBKJ_TypeInfo,5);
LAB_032736fc:
                    /* WARNING: Could not recover jumptable at 0x03273710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pEVar6,IHNKCJHDDKD,pVVar2->method);
  return;
}

