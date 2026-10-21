// Nekki.SF2.GUI.Dialogs.Raids.RaidShowLootDialog$$OnClose @ RVA 0x35BB724

void Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_00;
  
  __this_00 = (__this->fields)._rewardPanel;
  if (__this_00 == (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}

