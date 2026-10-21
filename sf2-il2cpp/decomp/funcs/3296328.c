// ILEHGDDFOJP$$FNHHLCOFCBI @ RVA 0x3296328

System_String_o * ILEHGDDFOJP__FNHHLCOFCBI(IEJKLPPLHMO_o *EFENHAFFBAG,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_String_o *pSVar3;
  IEJKLPPLHMO_c *pIVar4;
  ulong uVar5;
  int32_t *piVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = EFENHAFFBAG;
                    /* try { // try from 0339633c to 0349633f has its CatchHandler @ 03396350 */
  if ((DAT_0456736c & 1) == 0) {
    FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
                    /* catch() { ... } // from try @ 0339633c with catch @ 03396350 */
    auVar7 = FUN_01bab630(&StringLiteral_14482);
    DAT_0456736c = 1;
  }
  if (EFENHAFFBAG == (IEJKLPPLHMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pIVar4 = EFENHAFFBAG->klass;
  uVar1._0_1_ = (pIVar4->_2).rank;
  uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
                    /* try { // try from 03396388 to 034963af has its CatchHandler @ 033963c4 */
    piVar6 = &((pIVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
                    /* try { // try from 033963bc to 034963c3 has its CatchHandler @ 033963c4 */
        pVVar2 = pIVar4->vtable + (*piVar6 + 2);
        goto LAB_033963c4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(EFENHAFFBAG,IEJKLPPLHMO_TypeInfo,2);
                    /* try { // try from 033963b0 to 034963bb has its CatchHandler @ 0339616c */
LAB_033963c4:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03396388 with catch @ 033963c4
                       catch(type#2 @ 00000000) { ... } // from try @ 033963bc with catch @ 033963c4
                        */
  pSVar3 = (System_String_o *)(*pVVar2->methodPtr)(EFENHAFFBAG,pVVar2->method);
  pSVar3 = System_String__Concat(StringLiteral_14482,pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}

