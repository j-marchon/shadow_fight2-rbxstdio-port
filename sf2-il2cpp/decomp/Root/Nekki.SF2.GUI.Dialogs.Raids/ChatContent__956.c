// TypeDefIndex 956
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ChatContent : SidePanelContent
// Fields:
//   private static bool <MPEEBDKAEAH>k__BackingField; // 0x0

// ===== public override void Init()  [RVA 0x30AD2B4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatContent$$Init @ RVA 0x30AD2B4

void Nekki_SF2_GUI_Dialogs_Raids_ChatContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *__this,MethodInfo *method)

{
  return;
}


// ===== private static void JOOKLNAFNCA(bool CJNHFNHJHPE)  [RVA 0x30AD2B8]
// Nekki.SF2.GUI.Dialogs.Raids.ChatContent$$JOOKLNAFNCA @ RVA 0x30AD2B8

void Nekki_SF2_GUI_Dialogs_Raids_ChatContent__JOOKLNAFNCA(bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_045661b3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo);
    DAT_045661b3 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo->static_fields->_MPEEBDKAEAH_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== public override void OnPanelOpened()  [RVA 0x30AD308]
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


// ===== public void .ctor()  [RVA 0x30AD354]
// Nekki.SF2.GUI.Dialogs.Raids.ChatContent$$.ctor @ RVA 0x30AD354

void Nekki_SF2_GUI_Dialogs_Raids_ChatContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanelContent___ctor
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static bool get_HasEverOpenedChat()  [RVA 0x30AD35C]
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

