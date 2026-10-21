// Nekki.SF2.GUI.Fight.ScreenModel$$Init @ RVA 0x355DEB4

void Nekki_SF2_GUI_Fight_ScreenModel__Init
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,
               bool BFANHMIHMGA,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  
  (__this->fields)._parameters = OKBIKHHKOEN;
  thunk_FUN_01c20e04();
  (__this->fields)._showRounds = BFANHMIHMGA;
  (__this->fields)._IsNoBlock_k__BackingField = true;
  Nekki_SF2_GUI_Fight_ScreenModel__LBGEOIOINOM(__this,method_00);
  Nekki_SF2_GUI_Fight_ScreenModel__KIJPPGNCOEN(__this,method_01);
  Nekki_SF2_GUI_Fight_ScreenModel__KPECLAGHALL(__this,method_02);
  method_04 = method_03;
  if ((__this->fields)._showRounds != false) {
    Nekki_SF2_GUI_Fight_ScreenModel__LFHCGPJGDLG(__this,method_03);
    method_04 = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenModel__CPJNKKGEHHN(__this,method_04);
  Nekki_SF2_GUI_Fight_ScreenModel__IMLPLEDCBIP(__this,method_05);
  __this_00 = (__this->fields)._activePerkModel;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ActivePerkModel__Init(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_ScreenModel__ICEODDLGPEC(__this,method_06);
    Nekki_SF2_GUI_Fight_ScreenModel__JENEOLKJABD(__this,method_07);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

