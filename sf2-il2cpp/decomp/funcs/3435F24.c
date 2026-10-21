// Nekki.SF2.GUI.Shop.ShopScene$$GLCEGKANFNO @ RVA 0x3435F24

void Nekki_SF2_GUI_Shop_ShopScene__GLCEGKANFNO
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar1;
  MethodInfo *method_00;
  
  pNVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent
                     (__this,(MethodInfo *)NDLOGJOGFCA);
  if (pNVar1 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
    Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons(pNVar1,(MethodInfo *)0x0);
    pNVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
    if (pNVar1 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
      Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

