// Nekki.SF2.GUI.Map.MapContainer$$GetZonesCount @ RVA 0x323A530

int32_t Nekki_SF2_GUI_Map_MapContainer__GetZonesCount
                  (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *pSVar1;
  
  if ((DAT_04567051 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    DAT_04567051 = 1;
  }
  __this_00 = (__this->fields)._mapPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
     (pSVar1 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this_00,(MethodInfo *)0x0),
     pSVar1 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0)) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

