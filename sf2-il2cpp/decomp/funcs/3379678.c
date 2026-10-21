// LLDOMGIEPNE$$BCEAEOIODAP @ RVA 0x3379678

void LLDOMGIEPNE__BCEAEOIODAP
               (LLDOMGIEPNE_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
                    /* try { // try from 03479688 to 035796b3 has its CatchHandler @ 034799c0 */
  if ((DAT_04567b68 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04567b68 = 1;
  }
  ppSVar6 = &(__this->fields).EBFCGDOJJEM;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03479724 to 0357972b has its CatchHandler @ 03479968 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 034796f0 to 035796f7 has its CatchHandler @ 03479988 */
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,source);
                    /* try { // try from 034796fc to 03579703 has its CatchHandler @ 0347998c */
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 03479714 to 0357971b has its CatchHandler @ 0347996c */
  return;
}

