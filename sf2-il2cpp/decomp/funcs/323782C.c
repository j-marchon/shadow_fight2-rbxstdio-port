// JKGLCCGGPBJ.FNLLMMMNOPE$$CBNLIOPBGKC @ RVA 0x323782C

void JKGLCCGGPBJ_FNLLMMMNOPE__CBNLIOPBGKC
               (JKGLCCGGPBJ_FNLLMMMNOPE_o *__this,System_Action_o *h,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  LAJPNJAAODE_c *pLVar3;
  ulong uVar4;
  int32_t *piVar5;
  LAJPNJAAODE_o *pLVar6;
  
  if ((DAT_04567033 & 1) == 0) {
    FUN_01bab630(&LAJPNJAAODE_TypeInfo);
    DAT_04567033 = 1;
  }
  pLVar6 = (__this->fields).requestHandler;
  if (pLVar6 == (LAJPNJAAODE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pLVar3 = pLVar6->klass;
  uVar1._0_1_ = (pLVar3->_2).rank;
  uVar1._1_1_ = (pLVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pLVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)LAJPNJAAODE_TypeInfo) {
        pVVar2 = pLVar3->vtable + *piVar5;
        goto LAB_033378b8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pLVar6,LAJPNJAAODE_TypeInfo,0);
LAB_033378b8:
                    /* WARNING: Could not recover jumptable at 0x033378cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pLVar6,h,pVVar2->method);
  return;
}

