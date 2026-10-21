// FCAPJDHLLAP$$OKDPLFADGJJ @ RVA 0x3223578

void FCAPJDHLLAP__OKDPLFADGJJ(FCAPJDHLLAP_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04566f59 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FCAPJDHLLAP_OKDPLFADGJJ__);
    DAT_04566f59 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_NotificationsGame__remove_OnClose(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

