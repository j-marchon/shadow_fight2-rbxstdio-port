// IBILBKNKKDG$$ACNFBPJGBDP @ RVA 0x31738E8

void IBILBKNKKDG__ACNFBPJGBDP(CFGLKHFFEKA_o *CEHOJOFLMFF,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  VirtualInvokeData *pVVar3;
  EOJBGBDLBKJ_c *pEVar4;
  ulong uVar5;
  int32_t *piVar6;
  EOJBGBDLBKJ_o *pEVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = CEHOJOFLMFF;
  if ((DAT_04566943 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    auVar8 = FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    DAT_04566943 = 1;
  }
  pEVar7 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
  if (pEVar7 == (EOJBGBDLBKJ_o *)0x0) {
    return;
  }
  if (CEHOJOFLMFF == (CFGLKHFFEKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  uVar2 = (*(CEHOJOFLMFF->klass->vtable)._3_ToString.methodPtr)
                    (CEHOJOFLMFF,(CEHOJOFLMFF->klass->vtable)._3_ToString.method);
  pEVar4 = pEVar7->klass;
  uVar1._0_1_ = (pEVar4->_2).rank;
  uVar1._1_1_ = (pEVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pEVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
        pVVar3 = pEVar4->vtable + (*piVar6 + 7);
        goto LAB_032739b4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar7,EOJBGBDLBKJ_TypeInfo,7);
LAB_032739b4:
                    /* WARNING: Could not recover jumptable at 0x032739c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pEVar7,uVar2,pVVar3->method);
  return;
}

