// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OAJGFHDGJBK @ RVA 0x32548D8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OAJGFHDGJBK
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
                    /* try { // try from 033548d8 to 034549e3 has its CatchHandler @ 033548d8
                       catch() { ... } // from try @ 033548d8 with catch @ 033548d8
                       catch() { ... } // from try @ 03354a44 with catch @ 033548d8
                       catch() { ... } // from try @ 03354a94 with catch @ 033548d8
                       catch() { ... } // from try @ 03354a9c with catch @ 033548d8
                       catch() { ... } // from try @ 03354acc with catch @ 033548d8
                       catch() { ... } // from try @ 03354afc with catch @ 033548d8 */
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanOpenChat(__this,method);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__TryOpenChat(__this,method_00);
  return;
}

