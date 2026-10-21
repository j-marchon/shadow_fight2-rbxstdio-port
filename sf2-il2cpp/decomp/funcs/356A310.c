// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$OnDestroy @ RVA 0x356A310

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__OnDestroy
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

