// Nekki.SF2.GUI.Shop.ShopScene$$get_PropertiesPanelContent @ RVA 0x3433504

Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *
Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanelContent_o *__this_00;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar1;
  undefined8 uVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568185 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_SidePanelContent_As<PropertiesPanelContent>__);
    DAT_04568185 = 1;
  }
  uVar2 = auVar4._0_8_;
  pNVar3 = (__this->fields)._ItemProperties;
  if ((pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
     (__this_00 = (pNVar3->fields).LJBNCINMIIP, uVar2 = 0,
     __this_00 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0)) {
    pNVar1 = (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)
             Nekki_SF2_GUI_Shop_SidePanelContent__As<object>
                       (__this_00,
                        Method_Nekki_SF2_GUI_Shop_SidePanelContent_As<PropertiesPanelContent>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}

