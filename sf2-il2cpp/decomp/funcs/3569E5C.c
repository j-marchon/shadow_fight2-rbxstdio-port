// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$OnHide @ RVA 0x3569E5C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__OnHide
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c1d & 1) == 0) {
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    DAT_04568c1d = 1;
    method = extraout_x1;
  }
  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo,method);
  }
  MDFGJKBMECA__OIECFKNAJEA((MethodInfo *)0x0);
  return;
}

