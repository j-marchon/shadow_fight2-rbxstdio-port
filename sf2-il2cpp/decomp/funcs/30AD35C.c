// Nekki.SF2.GUI.Dialogs.Raids.ChatContent$$get_HasEverOpenedChat @ RVA 0x30AD35C

bool Nekki_SF2_GUI_Dialogs_Raids_ChatContent__get_HasEverOpenedChat(MethodInfo *method)

{
  if ((DAT_045661b4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo);
    DAT_045661b4 = 1;
  }
  return Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo->static_fields->
         _MPEEBDKAEAH_k__BackingField;
}

