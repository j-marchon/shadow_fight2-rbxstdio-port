// Nekki.SF2.GUI.Shop.ShopScene$$FMBFAPGPDPF @ RVA 0x3433A4C

void Nekki_SF2_GUI_Shop_ShopScene__FMBFAPGPDPF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  HOOAAGABMBL_o *ANMFBABEMFD;
  System_Collections_Generic_List_HOOAAGABMBL__o *BCECKFJCLKB;
  
  pNVar1 = (__this->fields)._ItemsPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    ANMFBABEMFD = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ItemsPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      BCECKFJCLKB = Nekki_SF2_GUI_Shop_ItemsPanel__GetBoughtItems(pNVar1,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar1,BCECKFJCLKB,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._ItemsPanel;
      if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(pNVar1,ANMFBABEMFD,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

