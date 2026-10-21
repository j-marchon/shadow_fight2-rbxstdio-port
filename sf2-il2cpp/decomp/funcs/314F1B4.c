// Nekki.SF2.GUI.LabelAliasTMP$$.ctor @ RVA 0x314F1B4

void Nekki_SF2_GUI_LabelAliasTMP___ctor(Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
                    /* try { // try from 0324f1d8 to 0334f1e3 has its CatchHandler @ 0324f384 */
  if ((DAT_045667f8 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&TMPro_TextMeshProUGUI_TypeInfo);
    DAT_045667f8 = 1;
  }
  *(undefined1 *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1) = 1;
                    /* try { // try from 0324f208 to 0334f283 has its CatchHandler @ 0324f39c */
  *(undefined1 *)&(__this->fields).super.m_EnvMapMatrix.fields.m21 = 1;
  *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12 =
       string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(&(__this->fields).super.m_EnvMapMatrix.fields.m12);
  if ((TMPro_TextMeshProUGUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  TMPro_TextMeshProUGUI___ctor((TMPro_TextMeshProUGUI_o *)__this,(MethodInfo *)0x0);
  return;
}

