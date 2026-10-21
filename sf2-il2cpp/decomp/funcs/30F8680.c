// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OnPanelOpened @ RVA 0x30F8680

void Nekki_SF2_GUI_Shop_ParametersPanelContent__OnPanelOpened
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  
  Nekki_SF2_GUI_Shop_SidePanelContent__OnPanelOpened
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP(__this,method_00);
  method_02 = method_01;
  if ((__this->fields).JBKOKFGICDL != false) {
    Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToRefresh(__this,0.0,method_01);
    method_02 = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_ParametersPanelContent__KDOOCENHKNC(__this,method_02);
  return;
}

