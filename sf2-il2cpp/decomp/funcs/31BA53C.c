// Nekki.SF2.GUI.Fight.RaidQuestsRewardsContent$$MKNLMMDHLLM @ RVA 0x31BA53C

void Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent__MKNLMMDHLLM
               (Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._RewardPanel;
  if (__this_00 == (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent__NBFHBIILDNG(__this,method_00);
  return;
}

