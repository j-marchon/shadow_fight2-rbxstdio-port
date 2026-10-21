// Nekki.SF2.GUI.Map.MapContainer$$AddStoryZones @ RVA 0x3239FD8

void Nekki_SF2_GUI_Map_MapContainer__AddStoryZones
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__AddStoryZones(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapContainer__BFFLMOMEKHE(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

