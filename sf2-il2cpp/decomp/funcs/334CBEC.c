// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$get_BossAbilityEnabled @ RVA 0x334CBEC

bool Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__get_BossAbilityEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *pNVar1;
  
  pNVar1 = (__this->fields)._BossAbilityButton;
  if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0) {
    return (pNVar1->fields).CEPACCGIINO;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

