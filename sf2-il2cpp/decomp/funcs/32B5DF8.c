// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$SearchRecommended @ RVA 0x32B5DF8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__SearchRecommended
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *__this_00;
  System_Action_KEFHDOHHHML__o *LPAJOAAAFGH;
  MethodInfo *in_x2;
  
  if ((DAT_04567451 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_DJHCNNLCEMN__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567451 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP(__this,0,in_x2);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  LPAJOAAAFGH = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
    EEOMEMBBGNA__NFLCHIPCOMI(__this_00,StringLiteral_1,true,LPAJOAAAFGH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

