// Nekki.SF2.GUI.Map.MapScene$$DAECLPKNLGE @ RVA 0x3585AF8

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapScene__DAECLPKNLGE
          (Nekki_SF2_GUI_Map_MapScene_o *__this,System_String_o *AJBDHHOLPMM,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar2;
  
  pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    DPJIDNBJIBG = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                            (pNVar1,AJBDHHOLPMM,(MethodInfo *)0x0);
    if (DPJIDNBJIBG < 0) {
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
      if (pNVar1 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03685b70;
      DPJIDNBJIBG = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                              (pNVar1,AJBDHHOLPMM,(MethodInfo *)0x0);
      if (DPJIDNBJIBG < 0) {
        return (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
      }
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    }
    else {
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    }
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      pNVar2 = Nekki_SF2_GUI_Map_MapContainer__GetZone(pNVar1,DPJIDNBJIBG,(MethodInfo *)0x0);
      return pNVar2;
    }
  }
LAB_03685b70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

