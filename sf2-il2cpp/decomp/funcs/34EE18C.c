// OLKKAIFGGAK$$MCKIEHCOCNO @ RVA 0x34EE18C

void OLKKAIFGGAK__MCKIEHCOCNO
               (OLKKAIFGGAK_o *__this,System_Action_FGDNDHOEMND__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FGDNDHOEMND__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FGDNDHOEMND__o *pSVar5;
  System_Action_FGDNDHOEMND__o **ppSVar6;
  System_Action_FGDNDHOEMND__o *source;
  
  if ((DAT_045687a0 & 1) == 0) {
    FUN_01bab630(&System_Action<FGDNDHOEMND>_TypeInfo);
    DAT_045687a0 = 1;
  }
  ppSVar6 = &(__this->fields).BEHHBIHGFHK;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FGDNDHOEMND>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FGDNDHOEMND>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 035ee204 to 036ee20b has its CatchHandler @ 035ee36c */
    pSVar5 = (System_Action_FGDNDHOEMND__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 035ee21c to 036ee22b has its CatchHandler @ 035ee310 */
                    /* try { // try from 035ee22c to 036ee27b has its CatchHandler @ 035ee08c */
  return;
}

