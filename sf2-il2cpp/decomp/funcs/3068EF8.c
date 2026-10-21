// Nekki.SF2.Core.Fights.Controls.Stick$$set_IsVisibleExtensionZoneBounds @ RVA 0x3068EF8

void Nekki_SF2_Core_Fights_Controls_Stick__set_IsVisibleExtensionZoneBounds
               (bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04565f18 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f18 = 1;
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField =
       CJNHFNHJHPE;
  return;
}

