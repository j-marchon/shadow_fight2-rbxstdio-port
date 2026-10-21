// BIELHCFJAMH.KHDMOCKBDNF$$NPCPLLJJGIB @ RVA 0x351F03C

void BIELHCFJAMH_KHDMOCKBDNF__NPCPLLJJGIB
               (BIELHCFJAMH_KHDMOCKBDNF_o *__this,System_Action_bool__o *h,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CPABHCDGLPI_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CPABHCDGLPI_o *pCVar6;
  
                    /* catch() { ... } // from try @ 0361ebb8 with catch @ 0361f04c
                       try { // try from 0361f04c to 0371f063 has its CatchHandler @ 0361e3e4 */
  if ((DAT_045689ae & 1) == 0) {
    FUN_01bab630(&CPABHCDGLPI_TypeInfo);
                    /* try { // try from 0361f064 to 0371f067 has its CatchHandler @ 0361f088 */
                    /* try { // try from 0361f068 to 0371f08f has its CatchHandler @ 0361e3e4 */
    DAT_045689ae = 1;
  }
  pCVar6 = (__this->fields).plugin;
  if (pCVar6 == (CPABHCDGLPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 0361f064 with catch @ 0361f088 */
  if (uVar4 != 0) {
                    /* try { // try from 0361f090 to 0371f0a3 has its CatchHandler @ 0361f174 */
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
        pVVar2 = pCVar3->vtable + (*piVar5 + 3);
        goto LAB_0361f0cc;
      }
      uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 0361edfc with catch @ 0361f0a4
                       try { // try from 0361f0a4 to 0371f0cb has its CatchHandler @ 0361e3e4 */
      piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 0361eda0 with catch @ 0361f0a8 */
    } while (uVar4 != 0);
  }
                    /* catch() { ... } // from try @ 0361ef78 with catch @ 0361f0ac */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CPABHCDGLPI_TypeInfo,3);
LAB_0361f0cc:
                    /* try { // try from 0361f0cc to 0371f0cf has its CatchHandler @ 0361f0e0 */
                    /* WARNING: Could not recover jumptable at 0x0361f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 0361f0cc with catch @ 0361f0e0 */
  (*pVVar2->methodPtr)(pCVar6,h,pVVar2->method);
  return;
}

