// Nekki.SF2.GUI.Fight.ScreenModel$$add_OnComboUp @ RVA 0x355E608

void Nekki_SF2_GUI_Fight_ScreenModel__add_OnComboUp
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,
               System_Action_ScreenModel_MPGAFKNLIPG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_ScreenModel_MPGAFKNLIPG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ScreenModel_MPGAFKNLIPG__o *pSVar5;
  System_Action_ScreenModel_MPGAFKNLIPG__o **ppSVar6;
  System_Action_ScreenModel_MPGAFKNLIPG__o *a;
  
  if ((DAT_04568ba0 & 1) == 0) {
    FUN_01bab630(&System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
    DAT_04568ba0 = 1;
  }
  ppSVar6 = &(__this->fields).OnComboUp;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_ScreenModel_MPGAFKNLIPG__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

