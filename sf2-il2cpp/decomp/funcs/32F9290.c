// EEOMEMBBGNA$$OKAMOFKHOLK @ RVA 0x32F9290

void EEOMEMBBGNA__OKAMOFKHOLK
               (EEOMEMBBGNA_o *__this,System_Action_OJEHKJHEBID__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OJEHKJHEBID__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OJEHKJHEBID__o *pSVar5;
  System_Action_OJEHKJHEBID__o *source;
  
                    /* catch() { ... } // from try @ 033f90d4 with catch @ 033f9290 */
                    /* catch() { ... } // from try @ 033f9274 with catch @ 033f9294 */
                    /* catch() { ... } // from try @ 033f90ac with catch @ 033f9298 */
                    /* catch() { ... } // from try @ 033f913c with catch @ 033f929c */
                    /* catch() { ... } // from try @ 033f926c with catch @ 033f92a8 */
                    /* catch() { ... } // from try @ 033f9128 with catch @ 033f92ac */
                    /* catch() { ... } // from try @ 033f9264 with catch @ 033f92b0 */
  if ((DAT_045676b1 & 1) == 0) {
                    /* catch() { ... } // from try @ 033f9078 with catch @ 033f92b4 */
                    /* catch() { ... } // from try @ 033f9068 with catch @ 033f92b8 */
                    /* catch() { ... } // from try @ 033f925c with catch @ 033f92bc */
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
                    /* catch() { ... } // from try @ 033f9040 with catch @ 033f92c0 */
                    /* catch() { ... } // from try @ 033f9028 with catch @ 033f92c4 */
    DAT_045676b1 = 1;
  }
  source = (__this->fields).JNCKDHJJBPM;
  do {
                    /* try { // try from 033f92dc to 034f92df has its CatchHandler @ 033f9430 */
                    /* try { // try from 033f92e0 to 034f943f has its CatchHandler @ 033f8e3c */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OJEHKJHEBID>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OJEHKJHEBID>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OJEHKJHEBID__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

