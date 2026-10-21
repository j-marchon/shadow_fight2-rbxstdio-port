// Nekki.SF2.Core.Quests.QuestsManager$$AddQuestToStack @ RVA 0x33058B4

void Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               bool HOKEEIDBPAG,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (NDBPOFMECGL == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_01 = (MethodInfo *)0x0;
  FPPKHNNABAD__MLKGFGDCLIF(NDBPOFMECGL,(__this->fields).QuestParameters,(MethodInfo *)0x0);
  Nekki_SF2_Core_Quests_QuestsManager__LFENGGKOJDO(__this,NDBPOFMECGL,method_01);
  if (HOKEEIDBPAG) {
    Nekki_SF2_Core_Quests_QuestsManager__PHHDBNIKFDK(__this,method_00);
    return;
  }
                    /* try { // try from 03405904 to 0350590f has its CatchHandler @ 03405afc */
  return;
}

