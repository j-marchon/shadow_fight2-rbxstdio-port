// Nekki.SF2.GUI.Fight.RaidFinalFightRatingContent$$.ctor @ RVA 0x32A961C

void Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent___ctor
               (Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent_o *__this,MethodInfo *method)

{
  if ((DAT_04567422 & 1) == 0) {
    FUN_01bab630(&StringLiteral_21458);
    FUN_01bab630(&StringLiteral_21457);
    FUN_01bab630(&StringLiteral_21455);
    DAT_04567422 = 1;
  }
  (__this->fields)._AliasVictory = StringLiteral_21458;
  thunk_FUN_01c20e04();
  (__this->fields)._AliasPosition = StringLiteral_21455;
  thunk_FUN_01c20e04();
  (__this->fields)._AliasTotalDamage = StringLiteral_21457;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent___ctor
            ((Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

