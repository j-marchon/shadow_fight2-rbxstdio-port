// Nekki.SF2.GUI.Map.MapScene$$SetRaidMode @ RVA 0x35863E0

void Nekki_SF2_GUI_Map_MapScene__SetRaidMode
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar1;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_00;
  MethodInfo *in_x2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  
  Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,false,in_x2);
  pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__ToggleLampsPanelLocationName(pNVar1,false,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).FMIFNIIJJNK;
    if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
       (__this_00 = (pNVar2->fields).RaidToggleButton,
       __this_00 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this_00,1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,false,method_00);
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar1,false,(MethodInfo *)0x0);
        pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
        if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
          Nekki_SF2_GUI_Map_MapContainer__Close(pNVar1,(MethodInfo *)0x0);
          (__this->fields).IAAABJBDEMK = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

