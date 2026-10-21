// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$OENBNJFBLEE @ RVA 0x312DDD0

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__OENBNJFBLEE
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  System_Delegate_o *pSVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  System_Action_string__o *pSVar3;
  System_Action_string__o **ppSVar4;
  System_Action_string__c *pSVar5;
  
  if ((DAT_045666a5 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_HGKMIBMBLLG__);
    DAT_045666a5 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BtnSave;
  if (__this_00 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Remove((System_Delegate_o *)pSVar3,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<string>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar4 = (System_Action_string__o *)0x0;
  }
  else {
    pSVar3 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar1,System_Action<string>_TypeInfo);
    if (pSVar3 == (System_Action_string__o *)0x0) goto LAB_0322dfe0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar4 = pSVar3;
    pSVar5 = System_Action<string>_TypeInfo;
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<string>_TypeInfo);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
  }
  thunk_FUN_01c20e04(ppSVar4,lVar2);
  pSVar3 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Combine((System_Delegate_o *)pSVar3,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<string>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar4 = (System_Action_string__o *)0x0;
  }
  else {
    pSVar3 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar1,System_Action<string>_TypeInfo);
    if (pSVar3 == (System_Action_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar4 = pSVar3;
    pSVar5 = System_Action<string>_TypeInfo;
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<string>_TypeInfo);
    if (lVar2 == 0) {
LAB_0322dfe0:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
  }
  thunk_FUN_01c20e04(ppSVar4,lVar2);
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__JPNONJJNIFE(false,(MethodInfo *)0x0);
  return;
}

