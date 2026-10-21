// Nekki.SF2.GUI.Map.LampsPanel$$SetCurrentZone @ RVA 0x32C97C0

void Nekki_SF2_GUI_Map_LampsPanel__SetCurrentZone
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,int32_t DPJIDNBJIBG,
               System_String_o *DHMHOAAOHEK,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._locationName;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,DHMHOAAOHEK,(MethodInfo *)0x0);
    (__this->fields).BJJNEHBCHKE = DPJIDNBJIBG;
    Nekki_SF2_GUI_Map_LampsPanel__OKELAKIIBAO(__this,DPJIDNBJIBG,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

