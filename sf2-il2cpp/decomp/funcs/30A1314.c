// LAMJOHEKJNJ$$NPCIBMAAJPM @ RVA 0x30A1314

void LAMJOHEKJNJ__NPCIBMAAJPM(LAMJOHEKJNJ_o *__this,int64_t ANDHBPGOCOM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_Action_T__o *action;
  MethodInfo *method_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_string__LPEBBHNDFCG__o *source_00;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  Il2CppObject *pIStack_88;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  Il2CppObject *pIStack_68;
  
  if ((DAT_04566140 & 1) == 0) {
    FUN_01bab630(&System_Action<LPEBBHNDFCG>_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<KeyValuePair<string,_LPEBBHNDFCG>>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<string,_LPEBBHNDFCG>>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_get_Current__
                );
    FUN_01bab630(&System_Func<KeyValuePair<string,_LPEBBHNDFCG>,_bool>_TypeInfo);
    FUN_01bab630(&Method_LAMJOHEKJNJ_IKAELAEDJIM_PLPOMACLDGN__);
    FUN_01bab630(&Method_LAMJOHEKJNJ_IKAELAEDJIM_POKBBKPLFPK__);
    FUN_01bab630(&LAMJOHEKJNJ_IKAELAEDJIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LPEBBHNDFCG>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LPEBBHNDFCG>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LPEBBHNDFCG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LPEBBHNDFCG>_ForEach__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_LPEBBHNDFCG>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<LPEBBHNDFCG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LPEBBHNDFCG>_TypeInfo);
    DAT_04566140 = 1;
  }
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(LAMJOHEKJNJ_IKAELAEDJIM_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[1].klass = (Il2CppClass *)ANDHBPGOCOM;
    pIVar4[1].monitor = __this;
    thunk_FUN_01c20e04(&pIVar4[1].monitor,__this);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<LPEBBHNDFCG>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<LPEBBHNDFCG>__ctor__);
    source_00 = (__this->fields).DIKHJEINHID;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<KeyValuePair<string,_LPEBBHNDFCG>,_bool>_TypeInfo);
    System_Func<KeyValuePair<object,_object>,_bool>___ctor();
    method_00 = Method_System_Linq_Enumerable_Where<KeyValuePair<string,_LPEBBHNDFCG>>__;
    source = System_Linq_Enumerable__Where<KeyValuePair<object,_object>>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                        (MethodInfo_1EB0AE8 *)
                        Method_System_Linq_Enumerable_Where<KeyValuePair<string,_LPEBBHNDFCG>>__);
    __this_01 = System_Linq_Enumerable__ToList<KeyValuePair<object,_object>>
                          (source,
                           Method_System_Linq_Enumerable_ToList<KeyValuePair<string,_LPEBBHNDFCG>>__
                          );
    if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List<KeyValuePair<object,_object>>__GetEnumerator
                (&local_a0,(System_Collections_Generic_List_T__o *)__this_01,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_LPEBBHNDFCG>>_GetEnumerator__
                );
      local_80.fields._index = local_a0.fields._index;
      local_80.fields._version = local_a0.fields._version;
      local_80.fields._list = local_a0.fields._list;
      pIStack_68 = pIStack_88;
      local_80.fields._current = local_a0.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_MoveNext__
                               ), pIVar4 = pIStack_68, bVar3) {
        LAMJOHEKJNJ__EKEDMLKAGIK(__this,(System_String_o *)local_80.fields._current,method_00);
        lVar2 = Method_System_Collections_Generic_List<LPEBBHNDFCG>_Add__;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = pIVar4;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,pIVar4);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,pIVar4,(MethodInfo_26E4DAC *)method_00);
        }
      }
      System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_Dispose__
                );
      action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LPEBBHNDFCG>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  (__this_00,action,Method_System_Collections_Generic_List<LPEBBHNDFCG>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

