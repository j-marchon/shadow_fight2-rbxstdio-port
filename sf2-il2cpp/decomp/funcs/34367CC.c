// Nekki.SF2.GUI.Shop.ShopScene$$BNBJGGEIIHM @ RVA 0x34367CC

void Nekki_SF2_GUI_Shop_ShopScene__BNBJGGEIIHM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  int32_t CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Common_Indicator_o *pNVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  
  CJNHFNHJHPE = HCAICJLDDJO__IEALNGPAPAF(CNDPGGAFHEA,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._EnchantmentsIndicator;
  if (pNVar2 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    Nekki_SF2_GUI_Common_Indicator__set_State(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemProperties;
    if (pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
      if ((pNVar3->fields).DBNELADJPIJ == false) {
        return;
      }
      pNVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
      if ((pNVar1 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) &&
         (pNVar2 = (pNVar1->fields)._EnchantmentsIndicator,
         pNVar2 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0)) {
        Nekki_SF2_GUI_Common_Indicator__set_State(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

