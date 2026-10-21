// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnStartOpening @ RVA 0x34C4D30

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnStartOpening
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).super._HLLLGIDPLEN_k__BackingField = true;
  (__this->fields).super._JHGIPNHGGOK_k__BackingField = false;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP(__this,method);
  if ((__this->fields).BKLPHMPJEFA != false) {
    Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this,method_00);
    return;
  }
  return;
}

