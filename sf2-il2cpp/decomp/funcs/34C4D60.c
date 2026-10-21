// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$set_Mode @ RVA 0x34C4D60

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__set_Mode
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).HLKBICFHFJM == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).HLKBICFHFJM = CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers(__this,method_00);
  return;
}

