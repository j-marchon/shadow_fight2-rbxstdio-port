// ACHLOMELAJE$$MDEDBDFIFEM @ RVA 0x30682E4

void ACHLOMELAJE__MDEDBDFIFEM
               (ACHLOMELAJE_o *__this,System_Action_Color__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_Color__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_Color__o *pSVar5;
  System_Action_Color__o **ppSVar6;
  System_Action_Color__o *source;
  
  if ((DAT_04565f08 & 1) == 0) {
    FUN_01bab630(&System_Action<Color>_TypeInfo);
    DAT_04565f08 = 1;
  }
  ppSVar6 = &(__this->fields).NICMCKIBIAC;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<Color>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<Color>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_Color__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

