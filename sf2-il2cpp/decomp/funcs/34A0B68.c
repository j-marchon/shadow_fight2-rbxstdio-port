// Nekki.SF2.GUI.Map.MapButton$$set_MapButtonInfo @ RVA 0x34A0B68

void Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo
               (Nekki_SF2_GUI_Map_MapButton_o *__this,FKNCNNOOOIO_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).AEPNEAIEKOL != CJNHFNHJHPE) {
    (__this->fields).AEPNEAIEKOL = CJNHFNHJHPE;
    thunk_FUN_01c20e04(&(__this->fields).AEPNEAIEKOL);
    Nekki_SF2_GUI_Map_MapButton__Refresh(__this,method_00);
    return;
  }
  return;
}

