// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$GOEMGHIJHMB @ RVA 0x312E590

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__GOEMGHIJHMB
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Action_o *AFOFPOOEFHF;
  
  if ((DAT_045666aa & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_PAPADHCFIBN__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo);
    DAT_045666aa = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  AFOFPOOEFHF = Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo->static_fields->__9__8_0;
  if (AFOFPOOEFHF == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo,method);
    }
    AFOFPOOEFHF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = AFOFPOOEFHF;
    thunk_FUN_01c20e04(ppSVar1,AFOFPOOEFHF);
    method = extraout_x1_01;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  LHKALFIIJKB__KNNAJOALOGD(AFOFPOOEFHF,(MethodInfo *)0x0);
  return;
}

