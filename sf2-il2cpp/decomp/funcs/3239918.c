// Nekki.SF2.GUI.Map.MapContainer$$ToggleLampsPanelLocationName @ RVA 0x3239918

void Nekki_SF2_GUI_Map_MapContainer__ToggleLampsPanelLocationName
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  
  __this_00 = (__this->fields)._lampsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_LampsPanel__ToggleLocationName(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

