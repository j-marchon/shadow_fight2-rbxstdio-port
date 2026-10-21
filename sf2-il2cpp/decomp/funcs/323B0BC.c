// Nekki.SF2.GUI.Map.MapContainer$$ScrollToNextZone @ RVA 0x323B0BC

void Nekki_SF2_GUI_Map_MapContainer__ScrollToNextZone
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t NDAALADKFLK,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._lampsPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__BAIENFNFLAI
              (__this,(pNVar1->fields).BJJNEHBCHKE + NDAALADKFLK,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

