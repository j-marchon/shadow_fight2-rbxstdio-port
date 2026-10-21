// OLKKAIFGGAK.IEMCMOPNPEA$$GHCALGCCKKP @ RVA 0x34F80A4

void OLKKAIFGGAK_IEMCMOPNPEA__GHCALGCCKKP(OLKKAIFGGAK_IEMCMOPNPEA_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Action_OIGAJAKPPEO__o **ppSVar3;
  System_Action_OIGAJAKPPEO__o *action;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_0456880b & 1) == 0) {
    FUN_01bab630(&System_Action<OIGAJAKPPEO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<OIGAJAKPPEO>>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_ForEach__);
    FUN_01bab630(&Method_OLKKAIFGGAK_IEMCMOPNPEA_<>c_KLDHGFMNGJF__);
    FUN_01bab630(&OLKKAIFGGAK_IEMCMOPNPEA_<>c_TypeInfo);
    DAT_0456880b = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_b8,pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_GetEnumerator__
              );
    local_90.fields._version = local_b8.fields._version;
    local_90.fields._index = local_b8.fields._index;
    local_90.fields._dictionary = local_b8.fields._dictionary;
    local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_b8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_MoveNext__
                        );
      __this_00 = local_90.fields._current.fields.value;
      if (!bVar1) break;
      if ((OLKKAIFGGAK_IEMCMOPNPEA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(OLKKAIFGGAK_IEMCMOPNPEA_<>c_TypeInfo);
      }
      action = OLKKAIFGGAK_IEMCMOPNPEA_<>c_TypeInfo->static_fields->__9__3_0;
      if (action == (System_Action_OIGAJAKPPEO__o *)0x0) {
        if ((OLKKAIFGGAK_IEMCMOPNPEA_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(OLKKAIFGGAK_IEMCMOPNPEA_<>c_TypeInfo);
        }
        action = (System_Action_OIGAJAKPPEO__o *)
                 thunk_FUN_01bda818(System_Action<OIGAJAKPPEO>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &OLKKAIFGGAK_IEMCMOPNPEA_<>c_TypeInfo->static_fields->__9__3_0;
        *ppSVar3 = action;
        thunk_FUN_01c20e04(ppSVar3,action);
      }
      if ((System_Collections_Generic_List_object__o *)__this_00 ==
          (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<OIGAJAKPPEO>_ForEach__);
      length = ((System_Collections_Generic_List_object__Fields *)((long)__this_00 + 0x10))->_size;
      ((System_Collections_Generic_List_object__Fields *)((long)__this_00 + 0x10))->_size = 0;
      ((System_Collections_Generic_List_object__Fields *)((long)__this_00 + 0x10))->_version =
           ((System_Collections_Generic_List_object__Fields *)((long)__this_00 + 0x10))->_version +
           1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)
                            ((System_Collections_Generic_List_object__Fields *)
                            ((long)__this_00 + 0x10))->_items,0,length,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_Dispose__
              );
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar2,
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_Clear__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

