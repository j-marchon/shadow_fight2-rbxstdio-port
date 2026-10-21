// Nekki.SF2.GUI.LabelAlias$$set_Alias @ RVA 0x31A61F0

void Nekki_SF2_GUI_LabelAlias__set_Alias
               (Nekki_SF2_GUI_LabelAlias_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = System_String__op_Equality
                    (*(System_String_o **)&(__this->fields)._useLabelLineSpacing,CJNHFNHJHPE,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  *(System_String_o **)&(__this->fields)._useLabelLineSpacing = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._useLabelLineSpacing,CJNHFNHJHPE);
  Nekki_SF2_GUI_LabelAlias__GBPDDFOIDPG(__this,method_00);
  return;
}

