// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$JHMNGFCLGGE @ RVA 0x358D25C

System_String_o *
Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__JHMNGFCLGGE
          (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d50 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_11960);
    FUN_01bab630(&StringLiteral_11958);
    DAT_04568d50 = 1;
    method = extraout_x1;
  }
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  bVar2 = LLKDCCJMFLE__JGNHBFFLBIB((MethodInfo *)0x0);
  puVar1 = &StringLiteral_11958;
  if (!bVar2) {
    puVar1 = &StringLiteral_11960;
  }
  return (System_String_o *)*puVar1;
}

