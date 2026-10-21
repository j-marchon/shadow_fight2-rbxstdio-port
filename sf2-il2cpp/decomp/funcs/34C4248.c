// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnPanelOpened @ RVA 0x34C4248

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnPanelOpened
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).super._DDIEMKPIMAJ_k__BackingField = true;
  (__this->fields).super._HLLLGIDPLEN_k__BackingField = false;
  (__this->fields).super._JHGIPNHGGOK_k__BackingField = false;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__FBPHKFLELNP(__this,method);
                    /* try { // try from 035c4264 to 036c426b has its CatchHandler @ 035c4374 */
  if ((__this->fields).BKLPHMPJEFA != false) {
    Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this,method_00);
    return;
  }
                    /* try { // try from 035c4274 to 036c427b has its CatchHandler @ 035c4378 */
  return;
}

