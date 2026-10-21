// Nekki.SF2.GUI.Profile.BattlePassPanel$$OnDisable @ RVA 0x3590CD0

void Nekki_SF2_GUI_Profile_BattlePassPanel__OnDisable
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *__this_00;
  System_Action_o *pSVar1;
  EEGDOGKBLNG_o *__this_01;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d73 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_IAKHIFOFLGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_IHNJMFAEDMH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_POIOFMEMHBP__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d73 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    EGMONPGHHDP__OGCGKIHNKGK(__this_00,pSVar1,(MethodInfo *)0x0);
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                  thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__LJDDDMFPMDF(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_GlobalTimer__remove_OnTick(pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

