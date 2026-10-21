// Nekki.SF2.Core.Fights.Controls.Stick$$get_Instance @ RVA 0x3068B44

Nekki_SF2_Core_Fights_Controls_Stick_o *
Nekki_SF2_Core_Fights_Controls_Stick__get_Instance(MethodInfo *method)

{
  if ((DAT_04565f15 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f15 = 1;
  }
  return Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK;
}

