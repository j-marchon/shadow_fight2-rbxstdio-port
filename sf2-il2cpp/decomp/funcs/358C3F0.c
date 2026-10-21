// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$IJCCOHCPGIM @ RVA 0x358C3F0

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IJCCOHCPGIM
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  
  if ((DAT_04568d4b & 1) == 0) {
    FUN_01bab630(&StringLiteral_11946);
    FUN_01bab630(&StringLiteral_11945);
    DAT_04568d4b = 1;
  }
  bVar2 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)0x0) {
    puVar1 = &StringLiteral_11946;
    if (!bVar2) {
      puVar1 = &StringLiteral_11945;
    }
    Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
              ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnMusicAdv,
               (System_String_o *)*puVar1,0xe,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

