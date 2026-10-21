// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$remove_OnExitBtnClick @ RVA 0x30E2284

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnExitBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *source;
  
  if ((DAT_045663bf & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    DAT_045663bf = 1;
  }
  ppSVar6 = &(__this->fields).HNHLJHHKELD;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

