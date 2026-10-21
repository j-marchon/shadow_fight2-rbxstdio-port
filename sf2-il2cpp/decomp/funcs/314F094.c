// Nekki.SF2.GUI.LabelAliasTMP$$set_Alias @ RVA 0x314F094

void Nekki_SF2_GUI_LabelAliasTMP__set_Alias
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = System_String__op_Equality
                    (*(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12,
                     CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).super.m_EnvMapMatrix.fields.m12,CJNHFNHJHPE);
  Nekki_SF2_GUI_LabelAliasTMP__GBPDDFOIDPG(__this,method_00);
  return;
}

