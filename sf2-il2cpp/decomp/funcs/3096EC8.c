// Nekki.SF2.Core.InputControllers.KeyboardController$$add_OnKeyDown @ RVA 0x3096EC8

void Nekki_SF2_Core_InputControllers_KeyboardController__add_OnKeyDown
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,
               System_Action_KeyCode__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_KeyCode__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_KeyCode__o *pSVar5;
  System_Action_KeyCode__o **ppSVar6;
  System_Action_KeyCode__o *a;
  
  if ((DAT_045660e4 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    DAT_045660e4 = 1;
  }
  ppSVar6 = &(__this->fields).AEKEGMAOOHO;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<KeyCode>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<KeyCode>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_KeyCode__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

