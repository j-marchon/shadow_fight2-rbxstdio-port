// Nekki.SF2.GUI.Map.MapContainer$$HasBattle @ RVA 0x323A430

bool Nekki_SF2_GUI_Map_MapContainer__HasBattle
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Map_MapPanel__HasBattle(__this_00,BANHBMINMMP,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

