// FCAPJDHLLAP$$IKDPMKOIDMP @ RVA 0x3223490

void FCAPJDHLLAP__IKDPMKOIDMP(FCAPJDHLLAP_o *__this,MethodInfo *method)

{
  bool bVar1;
  GALHNMPIEHA_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_01;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f58 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FCAPJDHLLAP_OKDPLFADGJJ__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566f58 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    bVar1 = GALHNMPIEHA__CCIBENJEHCD(__this_00,(__this->fields).LEJLGCMCPLG,(MethodInfo *)0x0);
    if (!bVar1) {
      OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
      return;
    }
    __this_01 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__add_OnClose(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

