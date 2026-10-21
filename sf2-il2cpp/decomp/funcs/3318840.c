// MKFAKELPPAC$$CILBDKCKPIM @ RVA 0x3318840

void MKFAKELPPAC__CILBDKCKPIM
               (MKFAKELPPAC_o *__this,System_Action_MPAKDCNMLEG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MPAKDCNMLEG__o *pSVar5;
  System_Action_MPAKDCNMLEG__o **ppSVar6;
  System_Action_MPAKDCNMLEG__o *source;
  
                    /* try { // try from 03418860 to 03518867 has its CatchHandler @ 03418bd4 */
  if ((DAT_045677f2 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    DAT_045677f2 = 1;
  }
  ppSVar6 = &(__this->fields).NEKJNNBFECK;
  source = *ppSVar6;
  do {
                    /* try { // try from 03418888 to 0351888b has its CatchHandler @ 03418ae0 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<MPAKDCNMLEG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 034188a0 to 035188a7 has its CatchHandler @ 03418b44 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MPAKDCNMLEG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034188ec to 035188ef has its CatchHandler @ 03418b18 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MPAKDCNMLEG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
                    /* try { // try from 034188cc to 035188cf has its CatchHandler @ 03418ad8 */
  } while (bVar2);
                    /* try { // try from 034188dc to 035188e3 has its CatchHandler @ 03418b0c */
  return;
}

