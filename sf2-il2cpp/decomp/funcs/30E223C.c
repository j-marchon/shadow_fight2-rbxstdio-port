// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$get_Current @ RVA 0x30E223C

Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__get_Current(MethodInfo *method)

{
  if ((DAT_045663be & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045663be = 1;
  }
  return Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
}

