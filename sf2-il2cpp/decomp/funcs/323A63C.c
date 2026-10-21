// Nekki.SF2.GUI.Map.MapContainer$$UpdateLamps @ RVA 0x323A63C

void Nekki_SF2_GUI_Map_MapContainer__UpdateLamps
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *HLJMHAHBDBA;
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_01;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    HLJMHAHBDBA = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._lampsPanel;
    if (__this_01 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_LampsPanel__CheckOpenZones(__this_01,HLJMHAHBDBA,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

