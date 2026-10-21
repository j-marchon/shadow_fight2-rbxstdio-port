// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$CHJFOFKEHJB @ RVA 0x358D2F4

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CHJFOFKEHJB
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d51 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04568d51 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    CJNHFNHJHPE = Core_Configs_Models_BuildSettingsExtension__GetEULAUrl
                            (pIVar2[9].monitor,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Application__OpenURL(CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

