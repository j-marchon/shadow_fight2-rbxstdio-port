// Nekki.SF2.Core.Quests.QuestsManager$$OnQuestStageEndedToRun @ RVA 0x3307430

void Nekki_SF2_Core_Quests_QuestsManager__OnQuestStageEndedToRun
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *EDEHNHIHDDH;
  FPPKHNNABAD_o *OFBDKKMPCMI;
  
  if ((DAT_04567769 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_JKPAELNNEFG<string>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OLAGEPMKJFC<FPPKHNNABAD>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&StringLiteral_10713);
    DAT_04567769 = 1;
  }
  EDEHNHIHDDH = (__this->fields).GAMJEFPADCD;
  if (EDEHNHIHDDH == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((EDEHNHIHDDH->fields)._size < 1) {
    return;
  }
  OFBDKKMPCMI = (FPPKHNNABAD_o *)
                DJNBJHPDKDP__KIKGKKGDCKK<object>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
  bVar1 = FPPKHNNABAD__LFHPFJOAJIO(OFBDKKMPCMI,NDBPOFMECGL,(MethodInfo *)0x0);
  if (bVar1) {
    DJNBJHPDKDP__OLAGEPMKJFC<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).GAMJEFPADCD,
               Method_DJNBJHPDKDP_OLAGEPMKJFC<FPPKHNNABAD>__);
    DJNBJHPDKDP__JKPAELNNEFG<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields)._runningQuestStagesInfo,
               Method_DJNBJHPDKDP_JKPAELNNEFG<string>__);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_10713,(MethodInfo *)0x0);
  return;
}

