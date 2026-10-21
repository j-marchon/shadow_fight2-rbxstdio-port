// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$.cctor @ RVA 0x30B9D88

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  
  if ((DAT_04566223 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo);
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&StringLiteral_2263);
    DAT_04566223 = 1;
  }
  __this = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(__this,StringLiteral_2263,0x10,(MethodInfo *)0x0);
  Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo->static_fields->HELBCBKCOFF = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_TypeInfo->static_fields,__this);
  return;
}

