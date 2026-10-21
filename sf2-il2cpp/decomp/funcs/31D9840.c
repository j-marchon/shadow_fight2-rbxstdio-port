// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$.ctor @ RVA 0x31D9840

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d09 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    DAT_04566d09 = 1;
    method = extraout_x1;
  }
  (__this->fields)._heightWithLine = 150.0;
  (__this->fields)._heightRegular = 125.0;
  if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo,method);
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  return;
}

