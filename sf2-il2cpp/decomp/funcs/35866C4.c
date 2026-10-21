// Nekki.SF2.GUI.Map.MapScene$$GotoZoneByName @ RVA 0x35866C4

void Nekki_SF2_GUI_Map_MapScene__GotoZoneByName
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_String_o *KGLJICLJHEL,
               int32_t ABKNPBMGHKH,MethodInfo *method)

{
  int32_t FKKFOKKIGCE;
  Nekki_SF2_GUI_Map_StoryMapContainer_o **ppNVar1;
  
  ppNVar1 = &(__this->fields).DGPJKBMBBNN;
  if ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    FKKFOKKIGCE = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                            ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1,KGLJICLJHEL,
                             (MethodInfo *)0x0);
    if (FKKFOKKIGCE < 0) {
      ppNVar1 = (Nekki_SF2_GUI_Map_StoryMapContainer_o **)&(__this->fields).OPPIFBJOLBI;
      if ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0)
      goto LAB_03686740;
      FKKFOKKIGCE = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                              ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1,KGLJICLJHEL,
                               (MethodInfo *)0x0);
      if (FKKFOKKIGCE < 0) {
        return;
      }
    }
    Nekki_SF2_GUI_Map_MapScene__SelectZone
              (__this,(Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1,FKKFOKKIGCE,(float)ABKNPBMGHKH,
               method);
    return;
  }
LAB_03686740:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

