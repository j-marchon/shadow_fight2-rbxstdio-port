// Nekki.SF2.GUI.Profile.UserPerksPanel$$Init @ RVA 0x34A8AEC

void Nekki_SF2_GUI_Profile_UserPerksPanel__Init
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* try { // try from 035a8af4 to 036a8af7 has its CatchHandler @ 035a8c88 */
  pNVar1 = (__this->fields)._TableView;
                    /* try { // try from 035a8af8 to 036a8c27 has its CatchHandler @ 035a81ac */
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    (pNVar1->fields).KFCHMBGIPJK = (__this->fields)._CellPrefab;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields)._TableView;
    method = extraout_x1;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__Init
                (pNVar1,(CPFMNHBNOEN_o *)__this,(MLIIECFHJAM_o *)__this,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_UserPerksPanel__FMMCPKHOPFK(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

