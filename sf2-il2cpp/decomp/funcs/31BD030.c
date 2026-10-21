// Nekki.SF2.GUI.TableViewCell$$set_Opacity @ RVA 0x31BD030

void Nekki_SF2_GUI_TableViewCell__set_Opacity
               (Nekki_SF2_GUI_TableViewCell_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CJNHFNHJHPE < 0.0;
  if (1.0 < CJNHFNHJHPE) {
    CJNHFNHJHPE = 1.0;
  }
  if (bVar1) {
    CJNHFNHJHPE = 0.0;
  }
  (__this->fields).FHIIIPEBDLE = CJNHFNHJHPE;
  return;
}

