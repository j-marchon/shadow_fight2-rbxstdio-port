// Nekki.SF2.Core.Quests.QuestsManager$$HasAnyActionQuest @ RVA 0x3306540

bool Nekki_SF2_Core_Quests_QuestsManager__HasAnyActionQuest
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method
               )

{
  Il2CppObject *__this_00;
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch() { ... } // from try @ 03406530 with catch @ 03406540 */
                    /* try { // try from 03406550 to 035065b7 has its CatchHandler @ 034065cc */
  if ((DAT_04567758 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    DAT_04567758 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = Nekki_SF2_Core_Quests_QuestsManager__GetQuests(__this,HIHCBMNGGEO,method);
  if (__this_01 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034065b8 to 035065c3 has its CatchHandler @ 034060d8 */
                    /* try { // try from 034065c4 to 035065cb has its CatchHandler @ 034065cc */
                    /* catch() { ... } // from try @ 03406550 with catch @ 034065cc
                       catch() { ... } // from try @ 034065c4 with catch @ 034065cc */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
      __this_00 = local_48.fields._current;
      if (!bVar1) {
        iVar3 = 5;
        goto LAB_03406624;
      }
      bVar2 = Nekki_SF2_Core_Quests_QuestsManager__HGKKAHIMGFI
                        (__this,(FPPKHNNABAD_o *)local_48.fields._current,method);
    } while (bVar2);
    if ((FPPKHNNABAD_o *)__this_00 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = (MethodInfo *)0x0;
    bVar2 = FPPKHNNABAD__DGCODECJJCC
                      ((FPPKHNNABAD_o *)__this_00,(__this->fields).QuestParameters,(MethodInfo *)0x0
                      );
  } while (!bVar2);
  iVar3 = 4;
LAB_03406624:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
  return bVar1 && iVar3 == 4;
}

