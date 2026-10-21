// KICJDJCJLKJ$$JBFDIIJDEBC @ RVA 0x348CC28

void KICJDJCJLKJ__JBFDIIJDEBC
               (KICJDJCJLKJ_o *__this,System_Action_MPAKDCNMLEG__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_045683ec & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_045683ec = 1;
  }
  pKVar6 = (__this->fields).FOIMNIOLPDJ;
                    /* try { // try from 0358cc5c to 0368cc63 has its CatchHandler @ 0358ccd4 */
  if (pKVar6 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358ccc8 with catch @ 0358ccd0
                        */
    FUN_01bab8c8();
  }
                    /* try { // try from 0358cc64 to 0368ccc7 has its CatchHandler @ 0358cbb4 */
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 5);
        goto LAB_0358ccb8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,5);
LAB_0358ccb8:
                    /* try { // try from 0358ccc8 to 0368cccb has its CatchHandler @ 0358ccd0 */
                    /* WARNING: Could not recover jumptable at 0x0358cccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0358cccc to 0368cceb has its CatchHandler @ 0358cbb4 */
  (*pVVar2->methodPtr)(pKVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

