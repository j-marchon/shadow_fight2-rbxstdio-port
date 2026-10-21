// Nekki.SF2.GUI.Shop.ShopScene$$LCCGFCCNEGC @ RVA 0x34347D8

void Nekki_SF2_GUI_Shop_ShopScene__LCCGFCCNEGC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,
               System_Collections_Generic_List_IGFGDDANEPE__o *FLLGMBGJAIA,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  
  pNVar1 = (__this->fields)._ItemsPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    CNDPGGAFHEA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar1,(MethodInfo *)0x0);
    if (CNDPGGAFHEA != (HOOAAGABMBL_o *)0x0) {
      Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF(__this,CNDPGGAFHEA,method);
    }
    pNVar1 = (__this->fields)._ItemsPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

