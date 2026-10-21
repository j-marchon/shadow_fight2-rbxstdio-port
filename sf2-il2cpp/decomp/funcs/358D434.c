// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$OIAIFGDLFHJ @ RVA 0x358D434

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OIAIFGDLFHJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  
  if ((DAT_04568d54 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11948);
    FUN_01bab630(&StringLiteral_11949);
    DAT_04568d54 = 1;
  }
  bVar2 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *)0x0) {
    puVar1 = &StringLiteral_11949;
    if (!bVar2) {
      puVar1 = &StringLiteral_11948;
    }
    Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
              ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,(__this->fields).btnSoundAdv,
               (System_String_o *)*puVar1,0xf,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

