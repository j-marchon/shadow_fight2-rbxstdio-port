// Nekki.SF2.GUI.Map.MapContainer$$ScrollToZone @ RVA 0x323A364

void Nekki_SF2_GUI_Map_MapContainer__ScrollToZone
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t DPJIDNBJIBG,float PNEIGGOFIOA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__ScrollToZone(__this_00,DPJIDNBJIBG,PNEIGGOFIOA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

