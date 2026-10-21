// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$OnDestroy @ RVA 0x329D504

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *__this_00;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673aa & 1) == 0) {
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_JNCKDHJJBPM__);
    DAT_045673aa = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_OJEHKJHEBID__o *)
                thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
    EEOMEMBBGNA__OKAMOFKHOLK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

