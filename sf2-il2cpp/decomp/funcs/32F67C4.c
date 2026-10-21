// EEOMEMBBGNA$$BLGMCMLEBDI @ RVA 0x32F67C4

void EEOMEMBBGNA__BLGMCMLEBDI
               (EEOMEMBBGNA_o *__this,System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MGDJPGGPDJI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MGDJPGGPDJI__o *pSVar5;
  System_Action_MGDJPGGPDJI__o **ppSVar6;
  System_Action_MGDJPGGPDJI__o *source;
  
                    /* try { // try from 033f67c4 to 034f67cb has its CatchHandler @ 033f69b0 */
                    /* try { // try from 033f67cc to 034f682f has its CatchHandler @ 033f66f8 */
  if ((DAT_0456769c & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    DAT_0456769c = 1;
  }
  ppSVar6 = &(__this->fields).FAEDLDIIDMG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<MGDJPGGPDJI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* try { // try from 033f6838 to 034f689b has its CatchHandler @ 033f66f8 */
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MGDJPGGPDJI>_TypeInfo);
                    /* try { // try from 033f6830 to 034f6837 has its CatchHandler @ 033f6958 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MGDJPGGPDJI__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

