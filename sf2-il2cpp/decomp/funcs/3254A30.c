// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IsTweening @ RVA 0x3254A30

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IsTweening
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  
  __this_00 = (__this->fields)._sidePanel;
                    /* try { // try from 03354a38 to 03454a43 has its CatchHandler @ 03354a9c */
  if (__this_00 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* try { // try from 03354a44 to 03454a8f has its CatchHandler @ 033548d8 */
    bVar1 = Nekki_SF2_GUI_Shop_SidePanel__IsTweening(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

