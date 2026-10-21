// Nekki.SF2.GUI.Shop.ItemsPanel$$TableViewDidSelectCellForRow @ RVA 0x310F4A0

void Nekki_SF2_GUI_Shop_ItemsPanel__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
               int32_t JDEFJPHCNMM,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,0.5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

