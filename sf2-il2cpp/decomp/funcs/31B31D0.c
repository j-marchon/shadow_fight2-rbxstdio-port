// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$OnDestroy @ RVA 0x31B31D0

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__OnDestroy
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566b91 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_JBMIBJCLDDH__);
    DAT_04566b91 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__LJDDDMFPMDF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__CBMLKIFOKJO(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

