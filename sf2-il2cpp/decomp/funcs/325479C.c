// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$TryOpenChat @ RVA 0x325479C

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__TryOpenChat
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  Nekki_SF2_GUI_SidePanelScroll_o *pNVar2;
  
                    /* catch() { ... } // from try @ 0335471c with catch @ 033547a0
                       catch() { ... } // from try @ 03354798 with catch @ 033547a0 */
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                      (__this_00,0x2d,(MethodInfo *)0x0);
    if (!bVar1) {
      pNVar2 = (__this->fields).PGOJBPBDODE;
      if (pNVar2 == (Nekki_SF2_GUI_SidePanelScroll_o *)0x0) goto LAB_033547dc;
      *(undefined1 *)&(pNVar2->fields).JNFBDGALDJJ = 0;
    }
    return (bool)(~bVar1 & 1);
  }
LAB_033547dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

