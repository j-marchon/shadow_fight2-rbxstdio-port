// Nekki.SF2.GUI.Shop.ItemsPanel$$SetSelection @ RVA 0x310FE0C

void Nekki_SF2_GUI_Shop_ItemsPanel__SetSelection
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToDiscountItem(__this,method);
  if ((((!bVar1) &&
       (bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToNewItem(__this,method_00), !bVar1)) &&
      (bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastSelection(__this,method_01), !bVar1)) &&
     ((bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToEquippedItem(__this,method_02), !bVar1 &&
      (bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToBestPaymentItem(__this,method_03), !bVar1))))
  {
    __this_00 = (__this->fields)._TableView;
    if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,0,0.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

