// Nekki.SF2.GUI.LabelAliasTMP$$set_ToUpperCase @ RVA 0x314F4CC

void Nekki_SF2_GUI_LabelAliasTMP__set_ToUpperCase
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  
  if ((bool)*(char *)&(__this->fields).super.m_EnvMapMatrix.fields.m32 != CJNHFNHJHPE) {
    CJNHFNHJHPE_00 = *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12;
    *(bool *)&(__this->fields).super.m_EnvMapMatrix.fields.m32 = CJNHFNHJHPE;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE_00,(MethodInfo *)0x0);
    if (!bVar1) {
      Nekki_SF2_GUI_LabelAliasTMP__GBPDDFOIDPG(__this,method_00);
      return;
    }
  }
  return;
}

