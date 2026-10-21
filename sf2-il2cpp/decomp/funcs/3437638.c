// Nekki.SF2.GUI.Shop.ShopScene$$EICMBDFALCN @ RVA 0x3437638

void Nekki_SF2_GUI_Shop_ShopScene__EICMBDFALCN
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *ANMFBABEMFD,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  
  pNVar1 = (__this->fields)._ItemsPanel;
  if ((pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) &&
     (pNVar2 = (pNVar1->fields)._TableView, pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
    if ((pNVar2->fields).IsLockSelection != false) {
      return;
    }
    Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__JINDJMBNDGM(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__BCDNLJLKOCC(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__OEDCGMAAPLN(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__BNBJGGEIIHM(__this,ANMFBABEMFD,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

