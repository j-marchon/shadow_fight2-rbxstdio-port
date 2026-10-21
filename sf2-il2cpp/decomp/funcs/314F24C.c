// Nekki.SF2.GUI.LabelAliasTMP$$set_text @ RVA 0x314F24C

void Nekki_SF2_GUI_LabelAliasTMP__set_text
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  MethodInfo *method_00;
  
  if ((DAT_045667f9 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_045667f9 = 1;
  }
                    /* try { // try from 0324f284 to 0334f36f has its CatchHandler @ 0324ef8c */
  a = TMPro_TMP_Text__get_text((TMPro_TMP_Text_o *)__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__op_Equality(a,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_LabelAliasTMP__set_Alias(__this,string_TypeInfo->static_fields->Empty,method_00);
  TMPro_TMP_Text__set_text((TMPro_TMP_Text_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

