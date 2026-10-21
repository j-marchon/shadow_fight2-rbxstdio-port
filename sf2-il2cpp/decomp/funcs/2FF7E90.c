// JMDPBFOCHHP$$OPKHHDFGOAB @ RVA 0x2FF7E90

void JMDPBFOCHHP__OPKHHDFGOAB(JMDPBFOCHHP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  JMDPBFOCHHP_AEDJNABHPOF_c *pJVar3;
  ulong uVar4;
  int32_t *piVar5;
  JMDPBFOCHHP_AEDJNABHPOF_o *pJVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
                    /* catch() { ... } // from try @ 030f7b40 with catch @ 030f7e90 */
                    /* catch() { ... } // from try @ 030f77a8 with catch @ 030f7e94 */
                    /* catch() { ... } // from try @ 030f7b3c with catch @ 030f7e98 */
                    /* catch() { ... } // from try @ 030f775c with catch @ 030f7e9c */
                    /* catch() { ... } // from try @ 030f7b34 with catch @ 030f7ea0 */
                    /* catch() { ... } // from try @ 030f7b00 with catch @ 030f7ea4 */
  if ((DAT_04565aad & 1) == 0) {
                    /* catch() { ... } // from try @ 030f79f4 with catch @ 030f7ea8
                       catch() { ... } // from try @ 030f7b80 with catch @ 030f7ea8 */
                    /* catch() { ... } // from try @ 030f777c with catch @ 030f7eac */
                    /* catch() { ... } // from try @ 030f7888 with catch @ 030f7eb0 */
    auVar7 = FUN_01bab630(&JMDPBFOCHHP_AEDJNABHPOF_TypeInfo);
                    /* catch() { ... } // from try @ 030f7920 with catch @ 030f7eb4 */
                    /* catch() { ... } // from try @ 030f78bc with catch @ 030f7eb8 */
    DAT_04565aad = 1;
  }
                    /* catch() { ... } // from try @ 030f7adc with catch @ 030f7ebc */
  pJVar6 = (__this->fields).ICGFIOLHAMK;
                    /* catch() { ... } // from try @ 030f7ad8 with catch @ 030f7ec0 */
  if (pJVar6 == (JMDPBFOCHHP_AEDJNABHPOF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
                    /* catch() { ... } // from try @ 030f7ad4 with catch @ 030f7ec4 */
                    /* catch() { ... } // from try @ 030f7acc with catch @ 030f7ec8 */
  pJVar3 = pJVar6->klass;
  uVar1._0_1_ = (pJVar3->_2).rank;
  uVar1._1_1_ = (pJVar3->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 030f7ae8 with catch @ 030f7ecc */
                    /* catch() { ... } // from try @ 030f7ae0 with catch @ 030f7ed0
                       catch() { ... } // from try @ 030f7af4 with catch @ 030f7ed0 */
  uVar4 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 030f77e8 with catch @ 030f7ed4 */
  if (uVar4 != 0) {
    piVar5 = &((pJVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)JMDPBFOCHHP_AEDJNABHPOF_TypeInfo) {
        pVVar2 = pJVar3->vtable + (*piVar5 + 1);
        goto LAB_030f7f1c;
      }
                    /* try { // try from 030f7ef0 to 031f7f07 has its CatchHandler @ 030f7f3c */
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pJVar6,JMDPBFOCHHP_AEDJNABHPOF_TypeInfo,1);
                    /* try { // try from 030f7f08 to 031f7f2b has its CatchHandler @ 030f7598 */
LAB_030f7f1c:
                    /* WARNING: Could not recover jumptable at 0x030f7f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 030f7f2c to 031f7f3b has its CatchHandler @ 030f7f3c */
  (*pVVar2->methodPtr)(pJVar6,pVVar2->method);
  return;
}

