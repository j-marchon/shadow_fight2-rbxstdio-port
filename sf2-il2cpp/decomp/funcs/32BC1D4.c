// MainMenuRaidRatingPanel$$KCGCNFGADFD @ RVA 0x32BC1D4

void MainMenuRaidRatingPanel__KCGCNFGADFD(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456749c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_8797);
    DAT_0456749c = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    if ((pNVar1->fields).NEACDFLBNFO == (GLPEFEEGCPM_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_8797,(MethodInfo *)0x0);
      return;
    }
    JJPNLEPEAFM__FNJFGJPELJK((MethodInfo *)0x0);
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_00,0x2a,(MethodInfo *)0x0);
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

