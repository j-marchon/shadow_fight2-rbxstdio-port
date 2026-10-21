// ACHLOMELAJE$$LJDDDMFPMDF @ RVA 0x3067E24

void ACHLOMELAJE__LJDDDMFPMDF
               (ACHLOMELAJE_o *__this,System_Action_BNKBGIIJNLF__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BNKBGIIJNLF__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BNKBGIIJNLF__o *pSVar5;
  System_Action_BNKBGIIJNLF__o **ppSVar6;
  System_Action_BNKBGIIJNLF__o *source;
  
                    /* try { // try from 03167e34 to 03267e3b has its CatchHandler @ 03167f48 */
                    /* try { // try from 03167e3c to 03267e57 has its CatchHandler @ 03168080 */
  if ((DAT_04565f02 & 1) == 0) {
    FUN_01bab630(&System_Action<BNKBGIIJNLF>_TypeInfo);
    DAT_04565f02 = 1;
  }
  ppSVar6 = &(__this->fields).MMCHECDCGKF;
  source = *ppSVar6;
  do {
                    /* try { // try from 03167e6c to 03267e6f has its CatchHandler @ 03167f58 */
                    /* try { // try from 03167e70 to 03267e77 has its CatchHandler @ 03167f5c */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BNKBGIIJNLF>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 03167e7c to 03267e83 has its CatchHandler @ 03167f44 */
                    /* try { // try from 03167e88 to 03267e93 has its CatchHandler @ 03167f40 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BNKBGIIJNLF>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BNKBGIIJNLF__o *)FUN_01c07368(ppSVar6,lVar4,source);
                    /* try { // try from 03167ea8 to 03267eaf has its CatchHandler @ 03167f3c */
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 03167ec0 to 03267ecb has its CatchHandler @ 03167f38 */
  return;
}

