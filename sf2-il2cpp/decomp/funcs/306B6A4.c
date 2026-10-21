// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$BABOCPBBDJP @ RVA 0x306B6A4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__BABOCPBBDJP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *__this_00;
  System_Action_KEFHDOHHHML__o *PFEFEKFHILE;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *pOVar1;
  int64_t KNPEFJLKLAL;
  
  if ((DAT_04565f37 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_EPIOBJFNMGG__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565f37 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  pOVar1 = (__this->fields).FBILHKCKHEJ;
  if (pOVar1 != (OJEHKJHEBID_o *)0x0) {
    KNPEFJLKLAL = (pOVar1->fields).ADEIKPGDIPM;
    PFEFEKFHILE = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
      EEOMEMBBGNA__FKOLNCFEANA(__this_00,KNPEFJLKLAL,PFEFEKFHILE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

