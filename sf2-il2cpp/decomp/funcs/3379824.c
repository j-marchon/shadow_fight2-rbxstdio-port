// LLDOMGIEPNE$$AJMEOKKLDPF @ RVA 0x3379824

void LLDOMGIEPNE__AJMEOKKLDPF
               (LLDOMGIEPNE_o *__this,System_Action_string__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
  if ((DAT_04567b6b & 1) == 0) {
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
                    /* try { // try from 03479850 to 03579857 has its CatchHandler @ 03479fe4 */
    DAT_04567b6b = 1;
  }
  pMVar6 = (__this->fields).IOPFMDCMMLD;
                    /* try { // try from 03479858 to 0357985f has its CatchHandler @ 03479f1c */
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034798cc to 035798cf has its CatchHandler @ 03479c80 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03479860 to 03579863 has its CatchHandler @ 03479f10 */
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
                    /* try { // try from 03479864 to 0357986b has its CatchHandler @ 03479e50 */
  uVar4 = (ulong)uVar1;
                    /* try { // try from 0347986c to 03579873 has its CatchHandler @ 03479d90 */
  if (uVar4 != 0) {
                    /* try { // try from 03479874 to 03579877 has its CatchHandler @ 03479d78 */
                    /* try { // try from 03479878 to 0357987b has its CatchHandler @ 03477bc4 */
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0347987c to 03579883 has its CatchHandler @ 03479cb4 */
                    /* try { // try from 03479884 to 03579887 has its CatchHandler @ 03479f0c */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
                    /* try { // try from 034798a4 to 035798a7 has its CatchHandler @ 03479ba4 */
                    /* try { // try from 034798a8 to 035798ab has its CatchHandler @ 03479d74 */
                    /* try { // try from 034798ac to 035798af has its CatchHandler @ 03479b94 */
                    /* try { // try from 034798b0 to 035798b7 has its CatchHandler @ 03479ad0 */
        pVVar2 = pMVar3->vtable + (*piVar5 + 3);
        goto LAB_034798b4;
      }
                    /* try { // try from 03479888 to 0357988b has its CatchHandler @ 03479ca0 */
      uVar4 = uVar4 - 1;
                    /* try { // try from 0347988c to 0357988f has its CatchHandler @ 03479f0c */
      piVar5 = piVar5 + 4;
                    /* try { // try from 03479890 to 03579893 has its CatchHandler @ 03479c94 */
    } while (uVar4 != 0);
  }
                    /* try { // try from 03479894 to 03579897 has its CatchHandler @ 03479c84 */
                    /* try { // try from 03479898 to 0357989f has its CatchHandler @ 03479bb8 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,3);
                    /* try { // try from 034798a0 to 035798a3 has its CatchHandler @ 03479d74 */
LAB_034798b4:
                    /* try { // try from 034798b8 to 035798bb has its CatchHandler @ 03479c90 */
                    /* try { // try from 034798bc to 035798bf has its CatchHandler @ 03479abc */
                    /* try { // try from 034798c0 to 035798c3 has its CatchHandler @ 03479c90 */
                    /* try { // try from 034798c4 to 035798c7 has its CatchHandler @ 03479c80 */
                    /* WARNING: Could not recover jumptable at 0x034798c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034798c8 to 035798cb has its CatchHandler @ 03479aac */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

