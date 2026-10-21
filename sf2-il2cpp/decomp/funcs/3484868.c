// Nekki.SF2.GUI.Dialogs.SettingsDialog$$OIAIFGDLFHJ @ RVA 0x3484868

void Nekki_SF2_GUI_Dialogs_SettingsDialog__OIAIFGDLFHJ
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_ResolutionButton_o *LGHOMHOPNEP;
  
  if ((DAT_045683a0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11948);
    FUN_01bab630(&StringLiteral_11949);
    DAT_045683a0 = 1;
  }
  LGHOMHOPNEP = (__this->fields).btnSound;
  bVar2 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  puVar1 = &StringLiteral_11949;
  if (!bVar2) {
    puVar1 = &StringLiteral_11948;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            (__this,LGHOMHOPNEP,(System_String_o *)*puVar1,-670.0,0.0,1,in_x4);
  return;
}

