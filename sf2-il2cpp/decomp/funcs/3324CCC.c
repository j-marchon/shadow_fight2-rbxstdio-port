// KHLHAPCOFLB.<>c$$FOMMDHKCHHA @ RVA 0x3324CCC

void KHLHAPCOFLB_<>c__FOMMDHKCHHA(KHLHAPCOFLB___c_o *__this,bool p_success,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  int32_t HIHCBMNGGEO;
  
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    HIHCBMNGGEO = 0x46;
    if (!p_success) {
      HIHCBMNGGEO = 0x47;
    }
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
              (__this_00,HIHCBMNGGEO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

