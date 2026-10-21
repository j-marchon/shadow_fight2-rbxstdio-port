// EEOMEMBBGNA$$PMFGHFNAOPK @ RVA 0x32FA7F4

void EEOMEMBBGNA__PMFGHFNAOPK
               (EEOMEMBBGNA_o *__this,System_Action_long__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_long__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_long__o *pSVar5;
  System_Action_long__o **ppSVar6;
  System_Action_long__o *source;
  
                    /* try { // try from 033fa808 to 034fa813 has its CatchHandler @ 033fa2ac */
                    /* try { // try from 033fa814 to 034fa81b has its CatchHandler @ 033fa81c */
  if ((DAT_045676ce & 1) == 0) {
                    /* catch() { ... } // from try @ 033fa7a0 with catch @ 033fa81c
                       catch() { ... } // from try @ 033fa814 with catch @ 033fa81c */
    FUN_01bab630(&System_Action<long>_TypeInfo);
    DAT_045676ce = 1;
  }
  ppSVar6 = &(__this->fields).HAHLDGJHODG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<long>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<long>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_long__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

