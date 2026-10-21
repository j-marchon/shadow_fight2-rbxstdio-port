// Nekki.SF2.Core.Quests.QuestsManager$$ScheduleQuests @ RVA 0x3305428

bool Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method
               )

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  FPPKHNNABAD_o *NDBPOFMECGL;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar3;
  MethodInfo *in_x3;
  int index;
  
  if ((DAT_04567751 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    DAT_04567751 = 1;
  }
                    /* try { // try from 03405470 to 0350547b has its CatchHandler @ 03404dd0 */
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__GetQuests(__this,HIHCBMNGGEO,method);
  if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* try { // try from 0340547c to 03505483 has its CatchHandler @ 03405484 */
                    /* catch() { ... } // from try @ 03405408 with catch @ 03405484
                       catch() { ... } // from try @ 0340547c with catch @ 03405484 */
    if ((__this_00->fields)._size < 1) {
      bVar2 = false;
    }
    else {
      bVar2 = false;
      index = 0;
      do {
        pMVar3 = Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__;
        NDBPOFMECGL = (FPPKHNNABAD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
        bVar1 = Nekki_SF2_Core_Quests_QuestsManager__HGKKAHIMGFI(__this,NDBPOFMECGL,pMVar3);
        pMVar3 = extraout_x1;
        if (!bVar1) {
          if (NDBPOFMECGL == (FPPKHNNABAD_o *)0x0) goto LAB_03405530;
          bVar1 = FPPKHNNABAD__DGCODECJJCC
                            (NDBPOFMECGL,(__this->fields).QuestParameters,(MethodInfo *)0x0);
          pMVar3 = extraout_x1_00;
          if (bVar1) {
                    /* try { // try from 034054e0 to 03505607 has its CatchHandler @ 034054e0
                       catch() { ... } // from try @ 034054e0 with catch @ 034054e0
                       catch() { ... } // from try @ 0340597c with catch @ 034054e0
                       catch() { ... } // from try @ 034059bc with catch @ 034054e0
                       catch() { ... } // from try @ 03405acc with catch @ 034054e0
                       catch() { ... } // from try @ 03405b50 with catch @ 034054e0
                       catch() { ... } // from try @ 03405b94 with catch @ 034054e0 */
            Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack(__this,NDBPOFMECGL,false,in_x3);
            bVar2 = true;
            pMVar3 = extraout_x1_01;
          }
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
      if (bVar2) {
        Nekki_SF2_Core_Quests_QuestsManager__PHHDBNIKFDK(__this,pMVar3);
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    return bVar2;
  }
LAB_03405530:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

