// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$PFOCPBKPHDJ @ RVA 0x3300E0C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__PFOCPBKPHDJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  GCIFMNHADDF_o *__this_01;
  EEOMEMBBGNA_o *__this_02;
  
  if ((DAT_0456771e & 1) == 0) {
    __this = (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *)
             FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456771e = 1;
  }
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)__this);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x43,method);
    __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (GCIFMNHADDF_o *)0x0) {
      GCIFMNHADDF__IDKIMGGFFNH(__this_01,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (__this_02 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__FOJEJJGMIGP(__this_02,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

