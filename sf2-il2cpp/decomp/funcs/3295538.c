// LGPCBNIFHNN$$EBCIDPCILBA @ RVA 0x3295538

void LGPCBNIFHNN__EBCIDPCILBA
               (LGPCBNIFHNN_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *a;
  
  if ((DAT_04567360 & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04567360 = 1;
  }
  ppSVar6 = &(__this->fields).BHPIBGKHPCP;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
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
    pSVar5 = (System_Action_PCJHNLGCCOB__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

