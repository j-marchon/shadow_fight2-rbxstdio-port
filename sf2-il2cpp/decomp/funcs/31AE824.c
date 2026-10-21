// Nekki.SF2.GUI.LabelAlias$$set_text @ RVA 0x31AE824

void Nekki_SF2_GUI_LabelAlias__set_text
               (Nekki_SF2_GUI_LabelAlias_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566b67 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04566b67 = 1;
  }
  a = Nekki_SF2_GUI_TextPic__get_text((Nekki_SF2_GUI_TextPic_o *)__this,(MethodInfo *)0x0);
  method_01 = (MethodInfo *)0x0;
  bVar1 = System_String__op_Equality(a,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this,string_TypeInfo->static_fields->Empty,method_01);
  Nekki_SF2_GUI_TextPic__set_text((Nekki_SF2_GUI_TextPic_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 032ae8ac to 033ae8d3 has its CatchHandler @ 032aeac0 */
  Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(__this,method_00);
  return;
}

