// Nekki.SF2.GUI.Map.MapScene$$CloseRaids @ RVA 0x35852F8

void Nekki_SF2_GUI_Map_MapScene__CloseRaids(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  
  if ((__this->fields).IAAABJBDEMK != 1) {
    return;
  }
  Nekki_SF2_GUI_Map_MapScene__FNOPCFKAOEF(__this,method);
  Nekki_SF2_GUI_Map_MapScene__LNEFBMFLDDG(__this,method_00);
  if ((__this->fields).IAAABJBDEMK != 1) {
    pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (pNVar2 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03685380;
    bVar1 = Nekki_SF2_GUI_Map_MapContainer__IsClosingNow(pNVar2,(MethodInfo *)0x0);
    method_02 = extraout_x1;
    if (!bVar1) goto LAB_03685354;
  }
  pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar2 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__ToggleLampsPanelLocationName(pNVar2,true,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_01);
    method_02 = extraout_x1_00;
LAB_03685354:
    Nekki_SF2_GUI_Map_MapScene__PCDOAIDDKPP(__this,method_02);
    Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_03);
    Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_04);
    Nekki_SF2_GUI_Map_MapScene__EHJIAIJGNHJ(__this,method_05);
    return;
  }
LAB_03685380:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

