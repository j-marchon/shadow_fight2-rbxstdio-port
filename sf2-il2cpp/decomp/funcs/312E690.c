// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$OnDestroy @ RVA 0x312E690

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  MethodInfo *extraout_x1;
  System_Action_string__o *pSVar4;
  System_Action_string__o **ppSVar5;
  
  if ((DAT_045666ab & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_HGKMIBMBLLG__);
    DAT_045666ab = 1;
    method = extraout_x1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo,method);
  }
  pSVar4 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar2 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  pSVar2 = System_Delegate__Remove((System_Delegate_o *)pSVar4,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Action<string>_TypeInfo;
  if (pSVar2 == (System_Delegate_o *)0x0) {
    lVar3 = 0;
    ppSVar5 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar5 = (System_Action_string__o *)0x0;
  }
  else {
    pSVar4 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar2,System_Action<string>_TypeInfo);
    if (pSVar4 == (System_Action_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
    ppSVar5 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar5 = pSVar4;
    pSVar1 = System_Action<string>_TypeInfo;
    lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<string>_TypeInfo);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
  thunk_FUN_01c20e04(ppSVar5,lVar3);
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

