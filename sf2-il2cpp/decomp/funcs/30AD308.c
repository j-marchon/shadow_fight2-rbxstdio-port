// Nekki.SF2.GUI.Dialogs.Raids.ChatContent$$OnPanelOpened @ RVA 0x30AD308

void Nekki_SF2_GUI_Dialogs_Raids_ChatContent__OnPanelOpened
               (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanelContent__OnPanelOpened
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  if (DAT_045661dc == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo);
    DAT_045661dc = '\x01';
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo->static_fields->_MPEEBDKAEAH_k__BackingField =
       true;
  return;
}

