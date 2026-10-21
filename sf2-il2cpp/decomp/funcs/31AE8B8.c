// Nekki.SF2.GUI.LabelAlias$$Clear @ RVA 0x31AE8B8

void Nekki_SF2_GUI_LabelAlias__Clear(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_04566b68 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04566b68 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_TextPic__set_text
            ((Nekki_SF2_GUI_TextPic_o *)__this,string_TypeInfo->static_fields->Empty,
             (MethodInfo *)0x0);
                    /* try { // try from 032ae908 to 033ae933 has its CatchHandler @ 032aeabc */
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this,string_TypeInfo->static_fields->Empty,method_00);
  return;
}

