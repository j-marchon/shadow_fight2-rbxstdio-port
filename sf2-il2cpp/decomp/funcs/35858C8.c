// Nekki.SF2.GUI.Map.MapScene$$PCDOAIDDKPP @ RVA 0x35858C8

void Nekki_SF2_GUI_Map_MapScene__PCDOAIDDKPP
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *__this_00;
  OOMHDDBCBJP_o *ODPEIFGHKNG;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).FLAMCGAKENN;
  if ((__this_00 != (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)0x0) &&
     (ODPEIFGHKNG = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__FLCKLDFJPGF(__this_00,(MethodInfo *)0x0)
     , ODPEIFGHKNG != (OOMHDDBCBJP_o *)0x0)) {
    __this_01 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (__this_01 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Map_MapContainer__SelectBattle(__this_01,ODPEIFGHKNG,0.0,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapScene__PIMIMOACBNG(__this,ODPEIFGHKNG,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

