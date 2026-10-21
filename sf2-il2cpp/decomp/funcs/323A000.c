// Nekki.SF2.GUI.Map.MapContainer$$BFFLMOMEKHE @ RVA 0x323A000

void Nekki_SF2_GUI_Map_MapContainer__BFFLMOMEKHE
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Collections_Generic_List_ZoneScrollItem__o *HLJMHAHBDBA;
  Nekki_SF2_GUI_Map_LampsPanel_o *pNVar1;
  
  if ((DAT_04567056 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    DAT_04567056 = 1;
  }
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    HLJMHAHBDBA = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._lampsPanel;
    if (((pNVar1 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) &&
        (Nekki_SF2_GUI_Map_LampsPanel__ClearLamps(pNVar1,(MethodInfo *)0x0),
        HLJMHAHBDBA != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0)) &&
       (pNVar1 = (__this->fields)._lampsPanel, pNVar1 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0)) {
      Nekki_SF2_GUI_Map_LampsPanel__AddLamps(pNVar1,(HLJMHAHBDBA->fields)._size,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._lampsPanel;
      if (pNVar1 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
        Nekki_SF2_GUI_Map_LampsPanel__CheckOpenZones(pNVar1,HLJMHAHBDBA,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

