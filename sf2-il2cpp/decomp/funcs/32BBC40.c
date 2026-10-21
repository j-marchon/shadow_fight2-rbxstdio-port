// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$OnDestroy @ RVA 0x32BBC40

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,MethodInfo *method)

{
  GALHNMPIEHA_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04567497 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_CJPKPFBKMNP__);
    DAT_04567497 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    GALHNMPIEHA__BIDBPFJNEJI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

