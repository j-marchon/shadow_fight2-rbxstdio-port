// Nekki.SF2.Core.Quests.QuestsManager$$InterruptQuest @ RVA 0x3306D74

void Nekki_SF2_Core_Quests_QuestsManager__InterruptQuest
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
               MethodInfo *method)

{
  FPPKHNNABAD_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName(__this,HBDNGIDONHG,method);
  if (__this_00 != (FPPKHNNABAD_o *)0x0) {
    FPPKHNNABAD__NBHELNKAKNN(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

