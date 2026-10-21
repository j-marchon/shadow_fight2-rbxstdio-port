// JIBAEMHNBOF.<>c$$LEFEHLFGNHL @ RVA 0x30CC8B0

int32_t JIBAEMHNBOF_<>c__LEFEHLFGNHL(JIBAEMHNBOF___c_o *__this,NCCFNKMICGK_o *x,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045662e0 & 1) == 0) {
    __this = (JIBAEMHNBOF___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662e0 = 1;
  }
  if (x != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = x->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_031cc938;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(x,NCCFNKMICGK_TypeInfo,1);
LAB_031cc938:
    lVar3 = (*pVVar2->methodPtr)(x,pVVar2->method);
    __this = (JIBAEMHNBOF___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int32_t *)(lVar3 + 0x2c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

