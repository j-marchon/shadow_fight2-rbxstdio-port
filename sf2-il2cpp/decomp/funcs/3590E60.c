// Nekki.SF2.GUI.Profile.BattlePassPanel$$ShowInfo @ RVA 0x3590E60

void Nekki_SF2_GUI_Profile_BattlePassPanel__ShowInfo
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x44,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

