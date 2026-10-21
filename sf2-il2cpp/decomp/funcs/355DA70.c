// Nekki.SF2.GUI.Fight.ScreenModel$$LFHCGPJGDLG @ RVA 0x355DA70

void Nekki_SF2_GUI_Fight_ScreenModel__LFHCGPJGDLG
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  int32_t DKLNFMKFLFJ;
  PJKHAJKEHEL_o *pPVar1;
  Nekki_SF2_GUI_Fight_RoundsPanel_o *__this_00;
  
  pPVar1 = (__this->fields)._parameters;
  if (pPVar1 == (PJKHAJKEHEL_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._roundsPanel;
  DKLNFMKFLFJ = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pPVar1->fields).AGFNMOMJCGB.fields,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Fight_RoundsPanel_o *)0x0) {
    Nekki_SF2_GUI_Fight_RoundsPanel__Init(__this_00,DKLNFMKFLFJ,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

