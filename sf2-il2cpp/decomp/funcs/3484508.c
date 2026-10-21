// Nekki.SF2.GUI.Dialogs.SettingsDialog$$BDFKOFFLBME @ RVA 0x3484508

void Nekki_SF2_GUI_Dialogs_SettingsDialog__BDFKOFFLBME
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_ResolutionButton_o *LGHOMHOPNEP;
  undefined8 *puVar3;
  
  if ((DAT_045683a2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&StringLiteral_11940);
    FUN_01bab630(&StringLiteral_11938);
    DAT_045683a2 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar2 != 0xb) {
    return;
  }
  LGHOMHOPNEP = (__this->fields).btnGameCenter;
  bVar1 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
  puVar3 = &StringLiteral_11940;
  if (bVar1) {
    bVar1 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0);
    puVar3 = &StringLiteral_11938;
    if (!bVar1) {
      puVar3 = &StringLiteral_11940;
    }
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            (__this,LGHOMHOPNEP,(System_String_o *)*puVar3,0.0,0.0,5,in_x4);
  return;
}

