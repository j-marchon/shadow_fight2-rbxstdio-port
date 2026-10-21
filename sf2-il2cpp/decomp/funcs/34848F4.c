// Nekki.SF2.GUI.Dialogs.SettingsDialog$$IJCCOHCPGIM @ RVA 0x34848F4

void Nekki_SF2_GUI_Dialogs_SettingsDialog__IJCCOHCPGIM
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_ResolutionButton_o *LGHOMHOPNEP;
  
  if ((DAT_0456839f & 1) == 0) {
    FUN_01bab630(&StringLiteral_11946);
    FUN_01bab630(&StringLiteral_11945);
    DAT_0456839f = 1;
  }
  LGHOMHOPNEP = (__this->fields).btnMusic;
  bVar2 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
  puVar1 = &StringLiteral_11946;
  if (!bVar2) {
    puVar1 = &StringLiteral_11945;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            (__this,LGHOMHOPNEP,(System_String_o *)*puVar1,-670.0,200.0,0,in_x4);
  return;
}

