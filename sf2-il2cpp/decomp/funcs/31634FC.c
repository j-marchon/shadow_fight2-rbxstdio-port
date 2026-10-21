// MCEIBCKPIAD$$JPOHHBPJMON @ RVA 0x31634FC

void MCEIBCKPIAD__JPOHHBPJMON
               (MCEIBCKPIAD_o *__this,System_Action_FAIJGJCCKJC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FAIJGJCCKJC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FAIJGJCCKJC__o *pSVar5;
  System_Action_FAIJGJCCKJC__o **ppSVar6;
  System_Action_FAIJGJCCKJC__o *source;
  
  if ((DAT_04566895 & 1) == 0) {
                    /* try { // try from 03263520 to 03363527 has its CatchHandler @ 032635f0 */
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    DAT_04566895 = 1;
  }
  ppSVar6 = &(__this->fields).BJPKLLHHPAO;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FAIJGJCCKJC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FAIJGJCCKJC>_TypeInfo);
      if (lVar4 == 0) {
                    /* try { // try from 032635a0 to 033635c7 has its CatchHandler @ 0326342c */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 0326357c to 0336359f has its CatchHandler @ 032635e4 */
    pSVar5 = (System_Action_FAIJGJCCKJC__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

