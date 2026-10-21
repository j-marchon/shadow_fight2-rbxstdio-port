// LMJJJKLPNFE$$AADPHALJNLL @ RVA 0x3126CE0

void LMJJJKLPNFE__AADPHALJNLL
               (LMJJJKLPNFE_o *__this,Core_Configs_Models_LocalDailyConfig_o *PCMFDDODKED,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Func_LocalDailyQuestInfo__int__o **ppSVar4;
  System_Collections_Generic_Dictionary_TKey__TSource__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar6;
  System_Collections_Generic_IReadOnlyDictionary_int__List_LocalDailyQuestInfo___o **ppSVar7;
  System_Collections_Generic_List_LocalDailyQuestInfo__o *pSVar8;
  System_Func_LocalDailyQuestInfo__int__o *keySelector;
  System_Collections_Generic_IReadOnlyDictionary_int__LocalDailyQuestInfo__o **ppSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_object__o *local_88;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456665c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<LocalDailyQuestInfo>>_TryGetValue__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<LocalDailyQuestInfo>>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<LocalDailyQuestInfo>>_set_Item__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_List<LocalDailyQuestInfo>>_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToDictionary<LocalDailyQuestInfo,_int>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LocalDailyQuestInfo>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LocalDailyQuestInfo>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LocalDailyQuestInfo>_get_Current__
                );
    FUN_01bab630(&System_Func<LocalDailyQuestInfo,_int>_TypeInfo);
    FUN_01bab630(&Method_JGEJMOKEDLF<LocalDailyConfig>_AADPHALJNLL__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LocalDailyQuestInfo>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LocalDailyQuestInfo>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LocalDailyQuestInfo>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LocalDailyQuestInfo>_TypeInfo);
    FUN_01bab630(&Method_LMJJJKLPNFE_<>c_HCCFOFMGJEG__);
    FUN_01bab630(&LMJJJKLPNFE_<>c_TypeInfo);
    DAT_0456665c = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_88 = (System_Collections_Generic_List_object__o *)0x0;
  JGEJMOKEDLF<object>__AADPHALJNLL
            ((JGEJMOKEDLF_T__o *)__this,(Il2CppObject *)PCMFDDODKED,
             Method_JGEJMOKEDLF<LocalDailyConfig>_AADPHALJNLL__);
  if (PCMFDDODKED != (Core_Configs_Models_LocalDailyConfig_o *)0x0) {
    pSVar8 = (PCMFDDODKED->fields)._Quests_k__BackingField;
    if ((LMJJJKLPNFE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    keySelector = LMJJJKLPNFE_<>c_TypeInfo->static_fields->__9__1_0;
    if (keySelector == (System_Func_LocalDailyQuestInfo__int__o *)0x0) {
      if ((LMJJJKLPNFE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03226e68 to 0332705b has its CatchHandler @ 03226e68
                       catch() { ... } // from try @ 03226e68 with catch @ 03226e68
                       catch() { ... } // from try @ 03227b68 with catch @ 03226e68
                       catch() { ... } // from try @ 03227d44 with catch @ 03226e68
                       catch() { ... } // from try @ 03227d74 with catch @ 03226e68
                       catch() { ... } // from try @ 03227ea8 with catch @ 03226e68 */
      keySelector = (System_Func_LocalDailyQuestInfo__int__o *)
                    thunk_FUN_01bda818(System_Func<LocalDailyQuestInfo,_int>_TypeInfo);
      System_Func<object,_int>___ctor();
      ppSVar4 = &LMJJJKLPNFE_<>c_TypeInfo->static_fields->__9__1_0;
      *ppSVar4 = keySelector;
      thunk_FUN_01c20e04(ppSVar4,keySelector);
    }
    pSVar5 = System_Linq_Enumerable__ToDictionary<object,_int>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                        (System_Func_TSource__TKey__o *)keySelector,
                        Method_System_Linq_Enumerable_ToDictionary<LocalDailyQuestInfo,_int>__);
    ppSVar9 = &(PCMFDDODKED->fields)._LocalDailyQuestsInfoById_k__BackingField;
    *ppSVar9 = (System_Collections_Generic_IReadOnlyDictionary_int__LocalDailyQuestInfo__o *)pSVar5;
    thunk_FUN_01c20e04(ppSVar9);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<int,_List<LocalDailyQuestInfo>>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<int,_object>___ctor
              (__this_00,
               Method_System_Collections_Generic_Dictionary<int,_List<LocalDailyQuestInfo>>__ctor__)
    ;
    pSVar8 = (PCMFDDODKED->fields)._Quests_k__BackingField;
    if (pSVar8 != (System_Collections_Generic_List_LocalDailyQuestInfo__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a0,(System_Collections_Generic_List_object__o *)pSVar8,
                 Method_System_Collections_Generic_List<LocalDailyQuestInfo>_GetEnumerator__);
      local_80.fields._index = local_a0.fields._index;
      local_80.fields._version = local_a0.fields._version;
      local_80.fields._list = local_a0.fields._list;
      local_80.fields._current = local_a0.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<LocalDailyQuestInfo>_MoveNext__
                          );
        item = local_80.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<LocalDailyQuestInfo>_Dispose__
                    );
          ppSVar7 = &(PCMFDDODKED->fields)._LocalDailyQuestsInfoBySequence_k__BackingField;
          *ppSVar7 = (System_Collections_Generic_IReadOnlyDictionary_int__List_LocalDailyQuestInfo___o
                      *)__this_00;
          thunk_FUN_01c20e04(ppSVar7,__this_00);
          return;
        }
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_Collections_Generic_Dictionary<int,_object>__TryGetValue
                          (__this_00,*(int32_t *)((long)&local_80.fields._current[1].klass + 4),
                           (Il2CppObject **)&local_88,
                           Method_System_Collections_Generic_Dictionary<int,_List<LocalDailyQuestInfo>>_TryGetValue__
                          );
        if (!bVar3) {
          __this_01 = (System_Collections_Generic_List_object__o *)
                      thunk_FUN_01bda818(
                                        System_Collections_Generic_List<LocalDailyQuestInfo>_TypeInfo
                                        );
          System_Collections_Generic_List<object>___ctor
                    (__this_01,Method_System_Collections_Generic_List<LocalDailyQuestInfo>__ctor__);
          local_88 = __this_01;
          System_Collections_Generic_Dictionary<int,_object>__set_Item
                    (__this_00,*(int32_t *)((long)&item[1].klass + 4),(Il2CppObject *)__this_01,
                     Method_System_Collections_Generic_Dictionary<int,_List<LocalDailyQuestInfo>>_set_Item__
                    );
        }
        lVar2 = Method_System_Collections_Generic_List<LocalDailyQuestInfo>_Add__;
        if (local_88 == (System_Collections_Generic_List_object__o *)0x0) break;
        pSVar6 = (local_88->fields)._items;
        (local_88->fields)._version = (local_88->fields)._version + 1;
        if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (local_88->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (local_88->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (local_88,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

