// Nekki.SF2.GUI.Map.MapContainer$$GetZone @ RVA 0x323A9AC

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapContainer__GetZone
          (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar1;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_Map_MapPanel__GetZone(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

