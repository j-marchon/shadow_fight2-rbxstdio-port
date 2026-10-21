// Nekki.SF2.GUI.Map.MapContainer$$GetZoneIndex @ RVA 0x323A584

int32_t Nekki_SF2_GUI_Map_MapContainer__GetZoneIndex
                  (Nekki_SF2_GUI_Map_MapContainer_o *__this,
                  Nekki_SF2_GUI_Map_ZoneScrollItem_o *BMKNIEJFMKD,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_Map_MapPanel__GetZoneIndex(__this_00,BMKNIEJFMKD,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

