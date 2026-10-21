// Nekki.SF2.GUI.LabelAliasTMP$$set_UseLocalizationFont @ RVA 0x314F2D8

void Nekki_SF2_GUI_LabelAliasTMP__set_UseLocalizationFont
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((bool)*(char *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1) == CJNHFNHJHPE) {
    return;
  }
  *(bool *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1) = CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAliasTMP__GOLOBCMKJFJ(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}

