// Nekki.SF2.GUI.Dialogs.NotificationsGame$$get_DisableButtons @ RVA 0x30F7A78

bool Nekki_SF2_GUI_Dialogs_NotificationsGame__get_DisableButtons(MethodInfo *method)

{
  if ((DAT_0456646d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
                    /* catch() { ... } // from try @ 031f7a6c with catch @ 031f7aa0 */
    DAT_0456646d = 1;
  }
                    /* try { // try from 031f7ab0 to 032f7ab7 has its CatchHandler @ 031f7acc */
                    /* try { // try from 031f7ab8 to 032f7ac3 has its CatchHandler @ 031f78d4 */
  return Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->
         _AFMLJPEEJGB_k__BackingField;
}

