// Nekki.SF2.GUI.Fight.RaidDamageResultContent$$.ctor @ RVA 0x33ABAC0

void Nekki_SF2_GUI_Fight_RaidDamageResultContent___ctor
               (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *__this,MethodInfo *method)

{
                    /* try { // try from 034abae4 to 035abaef has its CatchHandler @ 034ab6e0 */
  if ((DAT_04567d0e & 1) == 0) {
                    /* try { // try from 034abaf0 to 035abaf7 has its CatchHandler @ 034abaf8 */
    FUN_01bab630(&StringLiteral_10961);
                    /* catch() { ... } // from try @ 034aba7c with catch @ 034abaf8
                       catch() { ... } // from try @ 034abaf0 with catch @ 034abaf8 */
                    /* try { // try from 034abafc to 035abf87 has its CatchHandler @ 034abafc
                       catch() { ... } // from try @ 034abafc with catch @ 034abafc
                       catch() { ... } // from try @ 034ac938 with catch @ 034abafc
                       catch() { ... } // from try @ 034ac9d0 with catch @ 034abafc
                       catch() { ... } // from try @ 034acb64 with catch @ 034abafc
                       catch() { ... } // from try @ 034acb6c with catch @ 034abafc
                       catch() { ... } // from try @ 034acd58 with catch @ 034abafc */
    FUN_01bab630(&StringLiteral_10846);
    DAT_04567d0e = 1;
  }
  (__this->fields)._RaidRoundAdvice = StringLiteral_10961;
  thunk_FUN_01c20e04();
  (__this->fields)._RaidFightTimeout = StringLiteral_10846;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent___ctor
            ((Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

