// LLDOMGIEPNE$$GJCJCCHFDKG @ RVA 0x3379774

void LLDOMGIEPNE__GJCJCCHFDKG
               (LLDOMGIEPNE_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *source;
  
                    /* try { // try from 03479794 to 035797b7 has its CatchHandler @ 03479970 */
  if ((DAT_04567b6a & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04567b6a = 1;
  }
  ppSVar6 = &(__this->fields).CAMHBHJJKCD;
  source = *ppSVar6;
  do {
                    /* try { // try from 034797b8 to 0357984f has its CatchHandler @ 03477bc4 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<PCJHNLGCCOB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PCJHNLGCCOB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PCJHNLGCCOB__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

