// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsPunchEnabled @ RVA 0x33A4D14

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsPunchEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).BKJCNEFAGMM = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowPunch(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

