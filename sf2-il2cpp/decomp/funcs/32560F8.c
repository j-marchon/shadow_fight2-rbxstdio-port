// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$Close @ RVA 0x32560F8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Close
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._sidePanel;
                    /* try { // try from 03356104 to 03456107 has its CatchHandler @ 0335611c */
  if (__this_00 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this_00,false,-1.0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03356104 with catch @ 0335611c */
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

