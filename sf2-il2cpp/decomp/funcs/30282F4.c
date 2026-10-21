// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$JCJJOLALDGM @ RVA 0x30282F4

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JCJJOLALDGM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_EBEGCDCOHHJ_o *pJVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565ca5 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565ca5 = 1;
    method = extraout_x1;
  }
  pJVar1 = (__this->fields).MGIFEGEAHOB;
  __this_00 = (__this->fields)._taskTitleLbl;
  if (pJVar1 == (JMDPBFOCHHP_EBEGCDCOHHJ_o *)0x0) {
    ppSVar2 = &string_TypeInfo->static_fields->Empty;
  }
  else {
    ppSVar2 = &(pJVar1->fields).ABCHAOKFLGL;
  }
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,*ppSVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

