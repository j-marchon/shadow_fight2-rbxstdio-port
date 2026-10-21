// Nekki.SF2.GUI.Map.MapScene.<>c$$LJCDNPCPLED @ RVA 0x3589758

void Nekki_SF2_GUI_Map_MapScene_<>c__LJCDNPCPLED
               (Nekki_SF2_GUI_Map_MapScene___c_o *__this,KHODJHFHCDE_o *validationResult,
               MethodInfo *method)

{
  CFMDGLMCNIL_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_01;
  KHODJHFHCDE_o *extraout_x1;
  
  if ((DAT_04568d29 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d29 = 1;
    validationResult = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,validationResult);
  }
  __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
    CFMDGLMCNIL__BKBHKFCCKDO(__this_00,2,(MethodInfo *)0x0);
    KFCFGKEHPNK__EECLBEHBHFI(1,(MethodInfo *)0x0);
    __this_01 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_01,0x32,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

