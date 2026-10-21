// Nekki.SF2.GUI.Profile.UserPerksPanel$$TableViewDidSelectCellForRow @ RVA 0x34A8D80

void Nekki_SF2_GUI_Profile_UserPerksPanel__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
               Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* try { // try from 035a8d98 to 036a8da3 has its CatchHandler @ 035a81ac */
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,HAJDGFPLGNK,0.5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

