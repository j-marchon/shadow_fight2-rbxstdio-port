// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$remove_OnRefreshPlayer @ RVA 0x31728A4

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__remove_OnRefreshPlayer
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,
               System_Action_EOLFEKNCPLM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_EOLFEKNCPLM__o *pSVar5;
  System_Action_EOLFEKNCPLM__o **ppSVar6;
  System_Action_EOLFEKNCPLM__o *source;
  
  if ((DAT_0456692f & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    DAT_0456692f = 1;
  }
  ppSVar6 = &(__this->fields).BADMDODBKLB;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<EOLFEKNCPLM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<EOLFEKNCPLM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_EOLFEKNCPLM__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

