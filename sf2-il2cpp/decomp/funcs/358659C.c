// Nekki.SF2.GUI.Map.MapScene$$PAEKCOEHGMB @ RVA 0x358659C

bool Nekki_SF2_GUI_Map_MapScene__PAEKCOEHGMB
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t ELHAJJAHLHM;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  FKDLCJJOGIP_o *__this_00;
  MethodInfo *method_00;
  PKHMIGFEJCL_o *pPVar3;
  
  if ((DAT_04568cf8 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568cf8 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x22,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      return false;
    }
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
      ELHAJJAHLHM = MMOGKBGEPGM__GFLCMDMEOBN((pPVar3->fields).CHFDDNODLGP,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      bVar1 = MGNPHCAAEIO__BIFPGEGFDLK(ELHAJJAHLHM,0x11,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      Nekki_SF2_GUI_Map_MapScene__SetRaidMode(__this,method_00);
      __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
        FKDLCJJOGIP__LGBOGFICFPF(__this_00,(MethodInfo *)0x0);
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

