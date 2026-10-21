// HFLKAPIOLHF$$KEMGPEDFALK @ RVA 0x3050690

bool HFLKAPIOLHF__KEMGPEDFALK(HFLKAPIOLHF_o *__this,IEJKLPPLHMO_o *EFENHAFFBAG,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  IEJKLPPLHMO_c *pIVar3;
  ulong uVar4;
  int32_t *piVar5;
  
  if ((DAT_04565e48 & 1) == 0) {
    __this = (HFLKAPIOLHF_o *)FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    DAT_04565e48 = 1;
  }
  if (EFENHAFFBAG == (IEJKLPPLHMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pIVar3 = EFENHAFFBAG->klass;
  uVar1._0_1_ = (pIVar3->_2).rank;
  uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pIVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
        pVVar2 = pIVar3->vtable + (*piVar5 + 3);
        goto LAB_03150718;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(EFENHAFFBAG,IEJKLPPLHMO_TypeInfo,3);
LAB_03150718:
  uVar4 = (*pVVar2->methodPtr)(EFENHAFFBAG,pVVar2->method);
  return (uVar4 & 1) == 0;
}

