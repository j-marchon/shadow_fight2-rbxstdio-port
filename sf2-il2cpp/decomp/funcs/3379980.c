// LLDOMGIEPNE$$OGMDDKMLMKO @ RVA 0x3379980

void LLDOMGIEPNE__OGMDDKMLMKO
               (LLDOMGIEPNE_o *__this,System_Action_PCJHNLGCCOB__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
                    /* catch() { ... } // from try @ 034793fc with catch @ 03479980 */
                    /* catch() { ... } // from try @ 0347947c with catch @ 03479984 */
                    /* catch() { ... } // from try @ 034796f0 with catch @ 03479988 */
                    /* catch() { ... } // from try @ 034796fc with catch @ 0347998c */
                    /* catch() { ... } // from try @ 03479910 with catch @ 03479990
                       catch() { ... } // from try @ 03479918 with catch @ 03479990 */
                    /* catch() { ... } // from try @ 03479900 with catch @ 03479994 */
                    /* catch() { ... } // from try @ 03479418 with catch @ 03479998 */
  if ((DAT_04567b6d & 1) == 0) {
                    /* catch() { ... } // from try @ 034798f8 with catch @ 0347999c */
                    /* catch() { ... } // from try @ 034790fc with catch @ 034799a0 */
                    /* catch() { ... } // from try @ 034790ec with catch @ 034799a4 */
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
                    /* catch() { ... } // from try @ 0347916c with catch @ 034799a8 */
                    /* catch() { ... } // from try @ 034793d8 with catch @ 034799ac */
    DAT_04567b6d = 1;
  }
                    /* catch() { ... } // from try @ 034793e4 with catch @ 034799b0 */
  pMVar6 = (__this->fields).IOPFMDCMMLD;
                    /* catch() { ... } // from try @ 03479904 with catch @ 034799b4
                       catch() { ... } // from try @ 0347990c with catch @ 034799b4 */
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 034798e8 with catch @ 034799b8 */
                    /* catch() { ... } // from try @ 03479108 with catch @ 034799bc */
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 03479688 with catch @ 034799c0 */
                    /* catch() { ... } // from try @ 034798e0 with catch @ 034799c4 */
  uVar4 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 03478e04 with catch @ 034799c8 */
                    /* catch() { ... } // from try @ 03478df4 with catch @ 034799cc */
  if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 03478e74 with catch @ 034799d0 */
                    /* catch() { ... } // from try @ 0347962c with catch @ 034799d4 */
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 034798d4 with catch @ 034799d8 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
                    /* catch() { ... } // from try @ 034799f0 with catch @ 03479a08 */
        pVVar2 = pMVar3->vtable + *piVar5;
        goto LAB_03479a0c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 034799f0 to 035799f3 has its CatchHandler @ 03479a08 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,0);
LAB_03479a0c:
                    /* try { // try from 03479a18 to 03579a93 has its CatchHandler @ 0347a0ac */
                    /* WARNING: Could not recover jumptable at 0x03479a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

