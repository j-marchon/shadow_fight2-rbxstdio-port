// EEOMEMBBGNA$$HINLKLNCNDB @ RVA 0x32F9340

void EEOMEMBBGNA__HINLKLNCNDB(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  EEGDOGKBLNG_o *pEVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676b2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045676b2 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    if ((pEVar1->fields).LPMFKCDDEIA != 3) {
      return;
    }
    KFCFGKEHPNK__EECLBEHBHFI(2,(MethodInfo *)0x0);
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x34,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

