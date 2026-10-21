// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsKickEnabled @ RVA 0x33A4A58

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsKickEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).DHODJJLHHBI = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowKick(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

