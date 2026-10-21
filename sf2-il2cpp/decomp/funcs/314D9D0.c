// Nekki.SF2.GUI.Map.ContentCompleteOrLocked.<>c$$DDLAAAOPMGM @ RVA 0x314D9D0

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c__DDLAAAOPMGM
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked___c_o *__this,
               KHODJHFHCDE_o *validationResult,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  if (validationResult != (KHODJHFHCDE_o *)0x0) {
    if ((validationResult->fields)._NJFBLJHECFH_k__BackingField == false) {
      return;
    }
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_Map_ContentCompleteOrLocked___c_o *)0x0;
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x17,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

