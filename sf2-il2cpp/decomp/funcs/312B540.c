// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$LDIMAGHKOPB @ RVA 0x312B540

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__LDIMAGHKOPB
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int32_t KEFILECBPMF,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_00;
  
  __this_00 = (__this->fields).moneyCount;
  if (__this_00 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
    Nekki_SF2_GUI_Fight_IconAndText__SetFontSize(__this_00,KEFILECBPMF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

