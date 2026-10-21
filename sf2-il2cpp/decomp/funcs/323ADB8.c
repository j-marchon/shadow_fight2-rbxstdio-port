// Nekki.SF2.GUI.Map.MapContainer$$SetCurrentZone @ RVA 0x323ADB8

void Nekki_SF2_GUI_Map_MapContainer__SetCurrentZone
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t DPJIDNBJIBG,
               System_String_o *DHMHOAAOHEK,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  
  __this_00 = (__this->fields)._lampsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_LampsPanel__SetCurrentZone
              (__this_00,DPJIDNBJIBG,DHMHOAAOHEK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

