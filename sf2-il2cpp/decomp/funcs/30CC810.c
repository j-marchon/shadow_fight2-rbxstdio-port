// JIBAEMHNBOF.<>c$$JGGMNIALIBF @ RVA 0x30CC810

bool JIBAEMHNBOF_<>c__JGGMNIALIBF(JIBAEMHNBOF___c_o *__this,NCCFNKMICGK_o *x,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045662df & 1) == 0) {
    __this = (JIBAEMHNBOF___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662df = 1;
  }
  if (x == (NCCFNKMICGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pNVar4 = x->klass;
  uVar1._0_1_ = (pNVar4->_2).rank;
  uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar3 = pNVar4->vtable + (*piVar6 + 3);
        goto LAB_031cc898;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(x,NCCFNKMICGK_TypeInfo,3);
LAB_031cc898:
                    /* WARNING: Could not recover jumptable at 0x031cc8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(x,pVVar3->method);
  return (bool)uVar2;
}

