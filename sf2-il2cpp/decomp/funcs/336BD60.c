// FEEEICKDOFK.EJLEDCDEOMI$$GNOJGMBLBNH @ RVA 0x336BD60

void FEEEICKDOFK_EJLEDCDEOMI__GNOJGMBLBNH
               (FEEEICKDOFK_EJLEDCDEOMI_o *__this,System_Action_o *h,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  BLEFOFGCKEF_c *pBVar3;
  ulong uVar4;
  int32_t *piVar5;
  BLEFOFGCKEF_o *pBVar6;
  
                    /* try { // try from 0346bd64 to 0356bd67 has its CatchHandler @ 0346bd90 */
                    /* try { // try from 0346bd68 to 0356bd9f has its CatchHandler @ 0346bb94 */
  if ((DAT_04567af1 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    DAT_04567af1 = 1;
  }
                    /* catch() { ... } // from try @ 0346bd64 with catch @ 0346bd90 */
  pBVar6 = (__this->fields).localizationManager;
  if (pBVar6 == (BLEFOFGCKEF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pBVar3 = pBVar6->klass;
  uVar1._0_1_ = (pBVar3->_2).rank;
  uVar1._1_1_ = (pBVar3->_2).minimumAlignment;
                    /* try { // try from 0346bda0 to 0356bda7 has its CatchHandler @ 0346bdbc */
  uVar4 = (ulong)uVar1;
                    /* try { // try from 0346bda8 to 0356bdb3 has its CatchHandler @ 0346bb94 */
  if (uVar4 != 0) {
                    /* try { // try from 0346bdb4 to 0356bdbb has its CatchHandler @ 0346bdbc */
    piVar5 = &((pBVar3->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0346bda0 with catch @ 0346bdbc
                       catch() { ... } // from try @ 0346bdb4 with catch @ 0346bdbc */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar2 = pBVar3->vtable + (*piVar5 + 1);
        goto LAB_0346bdf0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pBVar6,BLEFOFGCKEF_TypeInfo,1);
LAB_0346bdf0:
                    /* WARNING: Could not recover jumptable at 0x0346be04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pBVar6,h,pVVar2->method);
  return;
}

