// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$EKCBICOGJMJ @ RVA 0x358DF70

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__EKCBICOGJMJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_GameController_o *__this_00;
  
  if ((DAT_04568d5a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d5a = 1;
    method = extraout_x1;
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo,method);
    DAT_04565c84 = '\x01';
  }
  __this_00 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_GameController__UpdateTouchControlsScale
                (__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

