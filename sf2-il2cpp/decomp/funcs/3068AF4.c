// Nekki.SF2.Core.Fights.Controls.Stick$$get_IsVisibleExtensionZoneBounds @ RVA 0x3068AF4

bool Nekki_SF2_Core_Fights_Controls_Stick__get_IsVisibleExtensionZoneBounds(MethodInfo *method)

{
  if ((DAT_04565f14 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f14 = 1;
  }
  return Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField;
}

