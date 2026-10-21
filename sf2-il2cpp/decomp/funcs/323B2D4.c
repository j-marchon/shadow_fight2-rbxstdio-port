// Nekki.SF2.GUI.Map.MapContainer$$HasZone @ RVA 0x323B2D4

bool Nekki_SF2_GUI_Map_MapContainer__HasZone
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,
               Nekki_SF2_GUI_Map_ZoneScrollItem_o *BHHBEIACGPB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MapPanel__HasZone(__this_00,BHHBEIACGPB,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

