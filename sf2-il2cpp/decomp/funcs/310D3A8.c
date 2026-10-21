// Nekki.SF2.GUI.Shop.ItemsPanel$$get_Spacing @ RVA 0x310D3A8

float Nekki_SF2_GUI_Shop_ItemsPanel__get_Spacing
                (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    return (pNVar1->fields)._spacing;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

