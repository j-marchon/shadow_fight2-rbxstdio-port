// Nekki.SF2.GUI.Map.MapScene$$MEDCMFMKLED @ RVA 0x3584200

void Nekki_SF2_GUI_Map_MapScene__MEDCMFMKLED
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x26,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

