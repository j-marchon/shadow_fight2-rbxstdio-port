// Nekki.SF2.Core.Quests.QuestsManager$$OnQuestStageStartedToRun @ RVA 0x3306DA4

void Nekki_SF2_Core_Quests_QuestsManager__OnQuestStageStartedToRun
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  FPPKHNNABAD_array *pFVar3;
  
  if ((DAT_0456775f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    DAT_0456775f = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
  __this_00 = (__this->fields).GAMJEFPADCD;
  if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    pFVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pFVar3 != (FPPKHNNABAD_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pFVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pFVar3->m_Items[(int)uVar1] = NDBPOFMECGL;
        thunk_FUN_01c20e04(pFVar3->m_Items + (int)uVar1,NDBPOFMECGL);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)NDBPOFMECGL,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

