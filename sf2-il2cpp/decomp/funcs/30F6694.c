// Nekki.SF2.GUI.Dialogs.NotificationsGame$$set_DisableButtons @ RVA 0x30F6694

void Nekki_SF2_GUI_Dialogs_NotificationsGame__set_DisableButtons
               (bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566461 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    DAT_04566461 = 1;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->_AFMLJPEEJGB_k__BackingField =
       CJNHFNHJHPE;
  return;
}

