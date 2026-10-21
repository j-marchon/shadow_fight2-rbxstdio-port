// OJHODFIGFMA$$AJLGBKONJEO @ RVA 0x3243220

void OJHODFIGFMA__AJLGBKONJEO
               (OJHODFIGFMA_o *__this,System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar5;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *source;
  
  if ((DAT_04567099 & 1) == 0) {
    FUN_01bab630(&System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    DAT_04567099 = 1;
  }
  source = (__this->fields).LAFPPPABCJG;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

