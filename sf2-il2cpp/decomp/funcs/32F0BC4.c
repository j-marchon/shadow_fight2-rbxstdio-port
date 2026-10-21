// BJFOKHADDPO$$BBDBMLMOMDN @ RVA 0x32F0BC4

System_String_o * BJFOKHADDPO__BBDBMLMOMDN(KADDELABILH_o *PCMFDDODKED,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_String_o *pSVar3;
  KADDELABILH_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = PCMFDDODKED;
                    /* try { // try from 033f0bc4 to 034f0be7 has its CatchHandler @ 033f1f04 */
  if ((DAT_0456766c & 1) == 0) {
    auVar7 = FUN_01bab630(&KADDELABILH_TypeInfo);
    DAT_0456766c = 1;
  }
  if (PCMFDDODKED == (KADDELABILH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f0c60 to 034f0c67 has its CatchHandler @ 033f1ee4 */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pKVar4 = PCMFDDODKED->klass;
  uVar1._0_1_ = (pKVar4->_2).rank;
  uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
                    /* try { // try from 033f0c00 to 034f0c07 has its CatchHandler @ 033f1f34 */
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
                    /* try { // try from 033f0c10 to 034f0c17 has its CatchHandler @ 033f1f3c */
    piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 033f0c1c to 034f0c27 has its CatchHandler @ 033f1f28 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)KADDELABILH_TypeInfo) {
                    /* try { // try from 033f0c48 to 034f0c4f has its CatchHandler @ 033f1ee0 */
        pVVar2 = pKVar4->vtable + (*piVar6 + 1);
        goto LAB_033f0c4c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 033f0c2c to 034f0c37 has its CatchHandler @ 033f1f30 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(PCMFDDODKED,KADDELABILH_TypeInfo,1);
LAB_033f0c4c:
                    /* WARNING: Could not recover jumptable at 0x033f0c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_String_o *)(*pVVar2->methodPtr)(PCMFDDODKED,pVVar2->method);
  return pSVar3;
}

