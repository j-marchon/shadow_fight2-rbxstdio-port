// Nekki.SF2.GUI.Shop.ShopScene$$RefreshItems @ RVA 0x3432394

void Nekki_SF2_GUI_Shop_ShopScene__RefreshItems
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__UpdateNewItemsCounters(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

