// Nekki.SF2.GUI.Map.MapScene$$OnStorySliderScroll @ RVA 0x3588290

void Nekki_SF2_GUI_Map_MapScene__OnStorySliderScroll
               (Nekki_SF2_GUI_Map_MapScene_o *__this,Nekki_SF2_GUI_Map_ZoneScrollItem_o *OCKFCPLEKAP
               ,MethodInfo *method)

{
  int32_t FKKFOKKIGCE;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  MethodInfo *in_x3;
  
  __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    FKKFOKKIGCE = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndex
                            (__this_00,OCKFCPLEKAP,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__SelectZone
              (__this,(Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN,FKKFOKKIGCE,
               0.0,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

