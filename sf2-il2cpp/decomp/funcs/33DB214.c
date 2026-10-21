// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$TableViewDidSelectCellForRow @ RVA 0x33DB214

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN
               ,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ScrollToCell
              (__this_00,HAJDGFPLGNK,(__this->fields)._ScrollDuration,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

