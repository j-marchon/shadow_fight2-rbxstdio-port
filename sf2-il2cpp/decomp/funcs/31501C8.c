// KKFCECOPJJF.<>c$$FBBKEBJIHAN @ RVA 0x31501C8

System_IObservable_string____o *
KKFCECOPJJF_<>c__FBBKEBJIHAN(KKFCECOPJJF___c_o *__this,CGLDCCGBNMP_o *p,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_string____o *pSVar3;
  CGLDCCGBNMP_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04566801 & 1) == 0) {
    __this = (KKFCECOPJJF___c_o *)FUN_01bab630(&CGLDCCGBNMP_TypeInfo);
    DAT_04566801 = 1;
  }
  if (p == (CGLDCCGBNMP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pCVar4 = p->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CGLDCCGBNMP_TypeInfo) {
        pVVar2 = pCVar4->vtable + *piVar6;
        goto LAB_0325024c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(p,CGLDCCGBNMP_TypeInfo,0);
LAB_0325024c:
                    /* WARNING: Could not recover jumptable at 0x0325025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_IObservable_string____o *)(*pVVar2->methodPtr)(p,pVVar2->method);
  return pSVar3;
}

