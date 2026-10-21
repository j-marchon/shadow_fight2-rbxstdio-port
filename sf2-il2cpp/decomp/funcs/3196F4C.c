// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ResetRaidChargeButton @ RVA 0x3196F4C

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ResetRaidChargeButton
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  
  __this_00 = (__this->fields)._btnRaidCharge;
  if (__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
    Nekki_SF2_GUI_ProgressButton__ResetPercentage(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

