// Nekki.SF2.GUI.LabelAlias$$.ctor @ RVA 0x31AE310

void Nekki_SF2_GUI_LabelAlias___ctor(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  if ((DAT_04566b63 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_TypeInfo);
    DAT_04566b63 = 1;
  }
  *(undefined1 *)&(__this->fields).super.OIHEBGFLFLH = 1;
  (__this->fields)._useLocalizationFont = true;
  *(System_String_o **)&(__this->fields)._useLabelLineSpacing =
       string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(&(__this->fields)._useLabelLineSpacing);
  if ((Nekki_SF2_GUI_TextPic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_TextPic___ctor((Nekki_SF2_GUI_TextPic_o *)__this,(MethodInfo *)0x0);
  return;
}

