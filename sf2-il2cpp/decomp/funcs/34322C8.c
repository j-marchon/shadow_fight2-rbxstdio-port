// Nekki.SF2.GUI.Shop.ShopScene$$ScrollToItemByName @ RVA 0x34322C8

void Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t HONPNKFABKF,
               System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  
  Nekki_SF2_GUI_Shop_ShopScene__GoToSlider(__this,HONPNKFABKF,true,method);
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this_00,CNIELFLIKJB,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

