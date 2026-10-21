// Nekki.SF2.GUI.Pvp.PhaseCharacter$$.ctor @ RVA 0x348C5C0

void Nekki_SF2_GUI_Pvp_PhaseCharacter___ctor
               (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *__this,MethodInfo *method)

{
  if ((DAT_045683e6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_19575);
    DAT_045683e6 = 1;
  }
  (__this->fields).IPLIJDNEOPB = StringLiteral_19575;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Pvp_PhaseItem___ctor((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  return;
}

