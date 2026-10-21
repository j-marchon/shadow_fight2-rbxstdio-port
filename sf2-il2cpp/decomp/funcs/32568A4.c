// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateMissingConnectionView @ RVA 0x32568A4

Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateMissingConnectionView
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
          Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *pNVar1;
  
                    /* try { // try from 033568a4 to 034568af has its CatchHandler @ 03356a10 */
                    /* try { // try from 033568c0 to 034568c7 has its CatchHandler @ 033569f4 */
  if ((DAT_04567165 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<MissingConnectionView>__)
    ;
    DAT_04567165 = 1;
  }
                    /* try { // try from 033568ec to 034568ef has its CatchHandler @ 03356a1c */
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)
           Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Create<object>
                     (__this,(__this->fields)._missingConnectionViewPrefab,ELHFHAPBFMI,
                      Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<MissingConnectionView>__
                     );
  return pNVar1;
}

