// Nekki.SF2.Core.Fights.Controls.Stick$$OnDestroy @ RVA 0x306A734

void Nekki_SF2_Core_Fights_Controls_Stick__OnDestroy
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  if ((DAT_04565f27 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f27 = 1;
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK =
       (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields,0);
  return;
}

