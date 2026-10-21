// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$NeedToRefreshAll @ RVA 0x34C3CC8

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshContent(__this,method);
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons(__this,method_00);
                    /* try { // try from 035c3ce4 to 036c3ce7 has its CatchHandler @ 035c3cf4 */
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers(__this,method_01);
  return;
}

