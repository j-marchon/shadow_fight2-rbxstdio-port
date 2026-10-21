// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$ONHDLLLAFOF @ RVA 0x3029348

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ONHDLLLAFOF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  GALHNMPIEHA_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ca7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565ca7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    GALHNMPIEHA__DCELPLDINGL(__this_00,(__this->fields).NCJONEIOCML,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

