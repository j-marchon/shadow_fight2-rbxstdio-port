// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsMagicEnabled @ RVA 0x33A4830

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsMagicEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
                    /* catch() { ... } // from try @ 034a46c8 with catch @ 034a4834
                       try { // try from 034a4834 to 035a4857 has its CatchHandler @ 034a45f4 */
                    /* catch() { ... } // from try @ 034a4820 with catch @ 034a4838 */
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).MHCEKGEFGDF = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowMagic(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

