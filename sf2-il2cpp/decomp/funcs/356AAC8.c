// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$Init @ RVA 0x356AAC8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  EOLFEKNCPLM_o *ACNOGKFFDEG;
  EOLFEKNCPLM_o **ppEVar2;
  
  ppEVar2 = &(__this->fields).MLAAJICBOAD;
  ACNOGKFFDEG = *ppEVar2;
  *ppEVar2 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar2);
  __this_00 = (__this->fields)._header;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__Init(__this_00,*ppEVar2,(MethodInfo *)0x0);
    bVar1 = PEEIMHCMDND__FJIPCBOKHFC(*ppEVar2,ACNOGKFFDEG,(MethodInfo *)0x0);
    method_01 = method_00;
    if (bVar1) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__LOCGOCHBNFM(__this,method_00);
      method_01 = extraout_x1;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__IDLCAAOONHG(__this,method_01);
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__IMGIKOELJFM(__this,method_02);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

