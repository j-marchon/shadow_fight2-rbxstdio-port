// JMDPBFOCHHP$$JBIIFMPKKEK @ RVA 0x2FF7F3C

void JMDPBFOCHHP__JBIIFMPKKEK
               (JMDPBFOCHHP_o *__this,JMDPBFOCHHP_NFKNNOPFJEE_o *HLDACJIELGJ,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  JMDPBFOCHHP_AEDJNABHPOF_c *pJVar3;
  ulong uVar4;
  int32_t *piVar5;
  JMDPBFOCHHP_AEDJNABHPOF_o *pJVar6;
  
                    /* catch() { ... } // from try @ 030f7ef0 with catch @ 030f7f3c
                       catch() { ... } // from try @ 030f7f2c with catch @ 030f7f3c */
                    /* try { // try from 030f7f40 to 031f7f43 has its CatchHandler @ 030f7f4c */
                    /* try { // try from 030f7f44 to 031f7f4f has its CatchHandler @ 030f7598 */
                    /* catch() { ... } // from try @ 030f7e7c with catch @ 030f7f4c
                       catch() { ... } // from try @ 030f7f40 with catch @ 030f7f4c */
  if ((DAT_04565aae & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_AEDJNABHPOF_TypeInfo);
    DAT_04565aae = 1;
  }
  pJVar6 = (__this->fields).ICGFIOLHAMK;
  if (pJVar6 == (JMDPBFOCHHP_AEDJNABHPOF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar3 = pJVar6->klass;
  uVar1._0_1_ = (pJVar3->_2).rank;
  uVar1._1_1_ = (pJVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pJVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)JMDPBFOCHHP_AEDJNABHPOF_TypeInfo) {
        pVVar2 = pJVar3->vtable + *piVar5;
        goto LAB_030f7fc8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pJVar6,JMDPBFOCHHP_AEDJNABHPOF_TypeInfo,0);
LAB_030f7fc8:
                    /* WARNING: Could not recover jumptable at 0x030f7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pJVar6,HLDACJIELGJ,pVVar2->method);
  return;
}

