// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsRaidChargeEnabled @ RVA 0x33A4D3C

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsRaidChargeEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).MDBGNLIBANL = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
                    /* try { // try from 034a4d54 to 035a4d8b has its CatchHandler @ 034a4ee8 */
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowRaidCharge
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

