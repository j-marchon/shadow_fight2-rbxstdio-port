// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$OnDestroy @ RVA 0x3324778

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,MethodInfo *method)

{
  HCKCBFOGMMJ_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567866 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_OHDOIFLJMMF__);
    DAT_04567866 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  if (__this_00 != (HCKCBFOGMMJ_o *)0x0) {
    JICOLGELJGE<object>__OHDOIFLJMMF
              ((JICOLGELJGE_T__o *)__this_00,(Il2CppObject *)__this,
               Method_JICOLGELJGE<LFELBGMCDHD>_OHDOIFLJMMF__);
    (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

