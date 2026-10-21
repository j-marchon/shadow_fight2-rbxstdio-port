// Nekki.SF2.GUI.Map.MapContainer$$SetLampsVisible @ RVA 0x323ADF0

void Nekki_SF2_GUI_Map_MapContainer__SetLampsVisible
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  
  __this_00 = (__this->fields)._lampsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_LampsPanel__SetLampsVisible(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

