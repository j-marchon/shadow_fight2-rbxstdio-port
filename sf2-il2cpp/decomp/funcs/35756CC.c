// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$get_BattlePassExists @ RVA 0x35756CC

bool Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__get_BattlePassExists
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c7f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568c7f = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    pJVar1 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
    return pJVar1 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

