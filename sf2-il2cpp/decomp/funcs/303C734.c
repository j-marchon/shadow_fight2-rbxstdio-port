// CloseButton$$add_ClickAction @ RVA 0x303C734

void CloseButton__add_ClickAction
               (CloseButton_o *__this,System_Action_object__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_object__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_object__o *pSVar5;
  System_Action_object__o *a;
  
  if ((DAT_04565d92 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    DAT_04565d92 = 1;
  }
  a = (__this->fields).LKIMJCGKOHH;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<object>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<object>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_object__o *)FUN_01c07368(&(__this->fields).LKIMJCGKOHH,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

