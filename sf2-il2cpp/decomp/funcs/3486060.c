// Nekki.SF2.GUI.Map.RaidQuestsButton$$AIFHOHIMLFM @ RVA 0x3486060

void Nekki_SF2_GUI_Map_RaidQuestsButton__AIFHOHIMLFM
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  GALHNMPIEHA_o *pGVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683b0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_CJPKPFBKMNP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_LBHEKMPNMGK__);
    DAT_045683b0 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pGVar1 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pGVar1 != (GALHNMPIEHA_o *)0x0) {
    GALHNMPIEHA__BIDBPFJNEJI(pGVar1,pSVar2,(MethodInfo *)0x0);
    pGVar1 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pGVar1 != (GALHNMPIEHA_o *)0x0) {
      GALHNMPIEHA__GAFJAEKNLPL(pGVar1,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

