// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IsClosed @ RVA 0x3253928

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IsClosed
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._sidePanel;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
    return (pNVar1->fields).DBNELADJPIJ == false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

