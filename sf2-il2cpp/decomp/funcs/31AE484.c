// Nekki.SF2.GUI.LabelAlias$$set_LabelLineSpacing @ RVA 0x31AE484

void Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing
               (Nekki_SF2_GUI_LabelAlias_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  if ((float)(__this->fields)._labelFontSize == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._labelFontSize = (int32_t)CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(__this,method);
  return;
}

