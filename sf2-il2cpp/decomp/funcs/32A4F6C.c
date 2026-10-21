// GDGNDNPEHIG$$BEDDKHEOMPA @ RVA 0x32A4F6C

void GDGNDNPEHIG__BEDDKHEOMPA(GDGNDNPEHIG_o *__this,OHAHOONNEIC_o *HOKBHLPPCAH,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  HCOKCPNMKFK_c *pHVar3;
  ulong uVar4;
  int32_t *piVar5;
  HCOKCPNMKFK_o *pHVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = HOKBHLPPCAH;
  auVar7._0_8_ = __this;
  if ((DAT_045673e5 & 1) == 0) {
    auVar7 = FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    DAT_045673e5 = 1;
  }
  pHVar6 = (__this->fields).BCHLEFPBFHO;
  if (pHVar6 == (HCOKCPNMKFK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pHVar3 = pHVar6->klass;
  uVar1._0_1_ = (pHVar3->_2).rank;
  uVar1._1_1_ = (pHVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pHVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
        pVVar2 = pHVar3->vtable + (*piVar5 + 4);
        goto LAB_033a4ff8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pHVar6,HCOKCPNMKFK_TypeInfo,4);
LAB_033a4ff8:
                    /* WARNING: Could not recover jumptable at 0x033a5008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pHVar6,pVVar2->method);
  return;
}

