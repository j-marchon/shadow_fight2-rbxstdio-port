// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$OnClose @ RVA 0x358D548

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  FGKGKDEJCOG_o *pFVar2;
  
  method_00 = (MethodInfo *)IMMNELPBGIF;
  if ((DAT_04568d52 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d52 = 1;
    method_00 = extraout_x1;
  }
  iVar1 = (__this->fields).GAKFEKMMFLB;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    method_00 = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_02;
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
    if (iVar1 == (pFVar2->fields).FIIKIHJHLNJ) {
      Nekki_SF2_GUI_Dialogs_SettingsDialog__OnClose
                ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
      return;
    }
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OGPCODNAIIH(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

