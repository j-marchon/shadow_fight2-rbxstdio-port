// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OnStartOpening @ RVA 0x30F92B4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__OnStartOpening
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_Shop_SidePanelContent__OnStartOpening
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP(__this,method_00);
  if ((__this->fields).JBKOKFGICDL != false) {
    Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToRefresh(__this,0.0,method_01);
    return;
  }
  return;
}

