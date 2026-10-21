// LLDOMGIEPNE$$BGEJPAJNJHI @ RVA 0x337A02C

void LLDOMGIEPNE__BGEJPAJNJHI(LLDOMGIEPNE_o *__this,System_Action_o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
  if ((DAT_04567b73 & 1) == 0) {
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
    DAT_04567b73 = 1;
  }
  pMVar6 = (__this->fields).IOPFMDCMMLD;
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
                    /* catch() { ... } // from try @ 03479a18 with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479b0c with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479bfc with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479cf0 with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479dd4 with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479e88 with catch @ 0347a0ac
                       catch() { ... } // from try @ 03479f60 with catch @ 0347a0ac
                       catch() { ... } // from try @ 0347a028 with catch @ 0347a0ac
                       catch() { ... } // from try @ 0347a0a4 with catch @ 0347a0ac */
                    /* try { // try from 0347a0b0 to 0357a553 has its CatchHandler @ 0347a0b0
                       catch() { ... } // from try @ 0347a0b0 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347acc4 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347ad44 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b404 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b674 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b6b0 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b6c0 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b848 with catch @ 0347a0b0
                       catch() { ... } // from try @ 0347b920 with catch @ 0347a0b0 */
        pVVar2 = pMVar3->vtable + (*piVar5 + 2);
        goto LAB_0347a0bc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
                    /* try { // try from 0347a098 to 0357a0a3 has its CatchHandler @ 03477bc4 */
    } while (uVar4 != 0);
  }
                    /* try { // try from 0347a0a4 to 0357a0ab has its CatchHandler @ 0347a0ac */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,2);
LAB_0347a0bc:
                    /* WARNING: Could not recover jumptable at 0x0347a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

