// Nekki.SF2.GUI.LabelAliasTMP$$Clear @ RVA 0x314F2F4

void Nekki_SF2_GUI_LabelAliasTMP__Clear(Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_045667fa & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_045667fa = 1;
  }
  method_00 = (MethodInfo *)0x0;
  TMPro_TMP_Text__set_text
            ((TMPro_TMP_Text_o *)__this,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
  Nekki_SF2_GUI_LabelAliasTMP__set_Alias(__this,string_TypeInfo->static_fields->Empty,method_00);
  return;
}

