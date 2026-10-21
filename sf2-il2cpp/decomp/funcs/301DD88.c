// Nekki.SF2.GUI.Profile.ItemsController$$TableViewDidSelectCellForRow @ RVA 0x301DD88

void Nekki_SF2_GUI_Profile_ItemsController__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
               Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,HAJDGFPLGNK,0.3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

