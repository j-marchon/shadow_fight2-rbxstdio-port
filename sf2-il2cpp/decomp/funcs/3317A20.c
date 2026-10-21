// MKFAKELPPAC$$GLCCMKGFLMN @ RVA 0x3317A20

void MKFAKELPPAC__GLCCMKGFLMN
               (MKFAKELPPAC_o *__this,System_Action_MPAKDCNMLEG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MPAKDCNMLEG__o *pSVar5;
  System_Action_MPAKDCNMLEG__o **ppSVar6;
  System_Action_MPAKDCNMLEG__o *source;
  
  if ((DAT_045677e6 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    DAT_045677e6 = 1;
  }
  ppSVar6 = &(__this->fields).MNEPPPPEJKF;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<MPAKDCNMLEG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MPAKDCNMLEG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MPAKDCNMLEG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

