// BMBFOPNOLCF$$LLCONNGHGKD @ RVA 0x3251628

void BMBFOPNOLCF__LLCONNGHGKD(BMBFOPNOLCF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  HIMHPFNABJN_c *pHVar3;
  ulong uVar4;
  int32_t *piVar5;
  HIMHPFNABJN_o *pHVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_04567138 & 1) == 0) {
                    /* try { // try from 03351644 to 0345164b has its CatchHandler @ 03351694 */
    auVar7 = FUN_01bab630(&HIMHPFNABJN_TypeInfo);
    DAT_04567138 = 1;
  }
  pHVar6 = (__this->fields).FFOLFLCMFCH;
                    /* try { // try from 03351658 to 03451663 has its CatchHandler @ 03351690 */
  if (pHVar6 == (HIMHPFNABJN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pHVar3 = pHVar6->klass;
  uVar1._0_1_ = (pHVar3->_2).rank;
  uVar1._1_1_ = (pHVar3->_2).minimumAlignment;
                    /* try { // try from 03351664 to 03451683 has its CatchHandler @ 033515b0 */
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pHVar3->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03351684 to 03451687 has its CatchHandler @ 0335168c */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)HIMHPFNABJN_TypeInfo) {
                    /* try { // try from 033516ac to 034516af has its CatchHandler @ 033516d8 */
        pVVar2 = pHVar3->vtable + *piVar5;
        goto LAB_033516b0;
      }
                    /* try { // try from 03351688 to 034516ab has its CatchHandler @ 033515b0 */
      uVar4 = uVar4 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351684 with catch @ 0335168c
                        */
      piVar5 = piVar5 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351658 with catch @ 03351690
                        */
    } while (uVar4 != 0);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351644 with catch @ 03351694
                        */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pHVar6,HIMHPFNABJN_TypeInfo,0);
LAB_033516b0:
                    /* try { // try from 033516b0 to 034516e7 has its CatchHandler @ 033515b0 */
                    /* WARNING: Could not recover jumptable at 0x033516c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pHVar6,pVVar2->method);
  return;
}

