// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$remove_OnFightBtnClick @ RVA 0x3428480

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnFightBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,
               System_Action_RaidInfoSprite__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidInfoSprite__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidInfoSprite__o *pSVar5;
  System_Action_RaidInfoSprite__o **ppSVar6;
  System_Action_RaidInfoSprite__o *source;
  
  if ((DAT_0456811e & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    DAT_0456811e = 1;
  }
  ppSVar6 = &(__this->fields).FCHKBFCNOJL;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RaidInfoSprite>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidInfoSprite>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidInfoSprite__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

