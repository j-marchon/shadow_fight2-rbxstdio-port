// GCIFMNHADDF$$DGKGLFOKOLG @ RVA 0x31AB068

void GCIFMNHADDF__DGKGLFOKOLG
               (GCIFMNHADDF_o *__this,System_Action_BaseDialog__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BaseDialog__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BaseDialog__o *pSVar5;
  System_Action_BaseDialog__o **ppSVar6;
  System_Action_BaseDialog__o *a;
  
                    /* catch() { ... } // from try @ 032aa60c with catch @ 032ab068 */
                    /* catch() { ... } // from try @ 032aa6d0 with catch @ 032ab06c */
                    /* catch() { ... } // from try @ 032aa8fc with catch @ 032ab070 */
                    /* catch() { ... } // from try @ 032aad54 with catch @ 032ab074 */
                    /* catch() { ... } // from try @ 032aad44 with catch @ 032ab078 */
                    /* catch() { ... } // from try @ 032aa5f0 with catch @ 032ab07c */
                    /* catch() { ... } // from try @ 032aad24 with catch @ 032ab088 */
  if ((DAT_04566b38 & 1) == 0) {
                    /* catch() { ... } // from try @ 032aa9b4 with catch @ 032ab08c */
                    /* catch() { ... } // from try @ 032aa8b8 with catch @ 032ab090 */
                    /* catch() { ... } // from try @ 032aacf8 with catch @ 032ab094 */
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    DAT_04566b38 = 1;
  }
                    /* catch() { ... } // from try @ 032aa784 with catch @ 032ab0a0 */
  ppSVar6 = &(__this->fields).FIDNHJLFPHC;
                    /* catch() { ... } // from try @ 032aa6cc with catch @ 032ab0a4 */
                    /* catch() { ... } // from try @ 032aacdc with catch @ 032ab0a8 */
  a = *ppSVar6;
  do {
                    /* catch() { ... } // from try @ 032aa984 with catch @ 032ab0ac */
                    /* catch() { ... } // from try @ 032aaccc with catch @ 032ab0b0 */
                    /* catch() { ... } // from try @ 032aa5c4 with catch @ 032ab0b4 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<BaseDialog>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 032aac8c with catch @ 032ab0dc */
      lVar4 = 0;
    }
    else {
                    /* try { // try from 032ab0c4 to 033ab10f has its CatchHandler @ 032aa15c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseDialog>_TypeInfo);
                    /* catch() { ... } // from try @ 032aa75c with catch @ 032ab0d0 */
                    /* catch() { ... } // from try @ 032aacac with catch @ 032ab0d4 */
      if (lVar4 == 0) {
                    /* try { // try from 032ab110 to 033ab113 has its CatchHandler @ 032ab180 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* catch() { ... } // from try @ 032aa8b4 with catch @ 032ab0e0 */
    pSVar5 = (System_Action_BaseDialog__o *)FUN_01c07368(ppSVar6,lVar4,a);
                    /* catch() { ... } // from try @ 032aacbc with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aad14 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aad34 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aad64 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aae60 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aae90 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aaecc with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aaefc with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aaf2c with catch @ 032ab0ec */
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* catch() { ... } // from try @ 032aac6c with catch @ 032ab0f8 */
                    /* catch() { ... } // from try @ 032aa4e0 with catch @ 032ab0fc */
  return;
}

