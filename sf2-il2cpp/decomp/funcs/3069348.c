// Nekki.SF2.Core.Fights.Controls.Stick$$SetTouchZoneExtensionFactor @ RVA 0x3069348

/* WARNING: Removing unreachable block (ram,0x0316939c) */

float Nekki_SF2_Core_Fights_Controls_Stick__SetTouchZoneExtensionFactor
                (float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04565f26 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f26 = 1;
  }
  if (CJNHFNHJHPE < 0.9) {
    CJNHFNHJHPE = 0.9;
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->LPEJCMJKEPA = CJNHFNHJHPE;
  return CJNHFNHJHPE;
}

