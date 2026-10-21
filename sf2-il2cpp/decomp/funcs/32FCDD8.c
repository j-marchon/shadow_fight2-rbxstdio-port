// Nekki.SF2.GUI.Common.Hints.HintUI$$.cctor @ RVA 0x32FCDD8

void Nekki_SF2_GUI_Common_Hints_HintUI___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintUI_c *pNVar1;
  Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *pNVar2;
  
  if ((DAT_045676f2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
    FUN_01bab630(&StringLiteral_16204);
    FUN_01bab630(&StringLiteral_16190);
    DAT_045676f2 = 1;
  }
  Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->ODBHBCHKHII = StringLiteral_16190;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields,StringLiteral_16190);
  Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->LCFAOLOGNAN = StringLiteral_16204;
  thunk_FUN_01c20e04();
  pNVar1 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo;
  pNVar2 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields;
  (pNVar2->HHNMFIEPBIK).fields.b = 0.27450982;
  (pNVar2->HHNMFIEPBIK).fields.a = 1.0;
  (pNVar2->HHNMFIEPBIK).fields.r = 0.44313726;
  (pNVar2->HHNMFIEPBIK).fields.g = 0.32156864;
  pNVar2 = pNVar1->static_fields;
  (pNVar2->NJIIBKLILHG).fields.b = 0.67058825;
  (pNVar2->NJIIBKLILHG).fields.a = 1.0;
  (pNVar2->NJIIBKLILHG).fields.r = 0.8901961;
  (pNVar2->NJIIBKLILHG).fields.g = 0.8156863;
  return;
}

