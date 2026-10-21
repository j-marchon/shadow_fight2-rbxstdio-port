// Nekki.SF2.Core.Fights.Controls.ActionButtons$$SetNeededPercentageToActBtn @ RVA 0x31976C0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__SetNeededPercentageToActBtn
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,int32_t CEJGCIAOOKI,
               float GCFNBDDDGIF,float PNEIGGOFIOA,MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  
  switch(CEJGCIAOOKI) {
  case 9:
    __this_00 = (__this->fields)._btnPunch;
    break;
  case 10:
  case 0xe:
    __this_00 = (__this->fields)._btnKick;
    break;
  case 0xb:
    __this_00 = (__this->fields)._btnMissile;
    break;
  case 0xc:
    __this_00 = (__this->fields)._btnMagic;
    break;
  case 0xd:
    __this_00 = (__this->fields)._btnRaidCharge;
    break;
  default:
    return;
  }
  if (__this_00 == (Nekki_SF2_GUI_ProgressButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_ProgressButton__SetPercentage(__this_00,GCFNBDDDGIF,PNEIGGOFIOA,(MethodInfo *)0x0);
  return;
}

