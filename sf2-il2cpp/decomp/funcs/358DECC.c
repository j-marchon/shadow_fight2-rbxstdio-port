// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$EDOGILFHCPD @ RVA 0x358DECC

System_String_o *
Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__EDOGILFHCPD
          (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d57 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_11965);
    FUN_01bab630(&StringLiteral_11966);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568d57 = 1;
    method = extraout_x1;
  }
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  iVar3 = LLKDCCJMFLE__HEHLBJLOCOO((MethodInfo *)0x0);
  puVar1 = &StringLiteral_11965;
  if (iVar3 != 1) {
    puVar1 = &StringLiteral_1;
  }
  puVar2 = &StringLiteral_11966;
  if (iVar3 != 0) {
    puVar2 = puVar1;
  }
  return (System_String_o *)*puVar2;
}

