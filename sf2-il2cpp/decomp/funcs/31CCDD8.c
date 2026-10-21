// Nekki.SF2.GUI.Dialogs.Raids.SeasFinRewardContent$$OJGLIBHMOIE @ RVA 0x31CCDD8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent__OJGLIBHMOIE
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *__this,MethodInfo *method)

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
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OJGLIBHMOIE
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

