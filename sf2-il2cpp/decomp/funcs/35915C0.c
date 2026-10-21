// Nekki.SF2.GUI.Profile.BattlePassPanel$$IHNJMFAEDMH @ RVA 0x35915C0

void Nekki_SF2_GUI_Profile_BattlePassPanel__IHNJMFAEDMH
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
               System_Collections_Generic_IList_PIADCKMDDAK__o *GMCEHJAIFBJ,MethodInfo *method)

{
  bool bVar1;
  EGMONPGHHDP_o *__this_00;
  System_Collections_Generic_IList_PIADCKMDDAK__o *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *__this_01;
  
  if ((DAT_04568d7f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d7f = 1;
    GMCEHJAIFBJ = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,GMCEHJAIFBJ);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    bVar1 = EGMONPGHHDP__PJKNOEOGFNM(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._btnBuyPass;
    if (__this_01 != (LabelButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_BattlePassPanel__GNFAMCPHEEC(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

