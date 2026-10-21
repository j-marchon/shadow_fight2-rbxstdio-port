// CLFCKIFNGHA$$FKCGNCCEFCH @ RVA 0x345467C

void CLFCKIFNGHA__FKCGNCCEFCH(IAGNPGHOAIC_o *IEKGHPACLPF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *key;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d0;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_045682c2 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_IAGNPGHOAIC>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_IAGNPGHOAIC>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045682c2 = 1;
    method = extraout_x1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<string>__ctor__);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
           CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_d0,pSVar4,
               Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_GetEnumerator__);
    local_90.fields._version = local_d0.fields._version;
    local_90.fields._index = local_d0.fields._index;
    local_90.fields._dictionary = local_d0.fields._dictionary;
    local_90.fields._current.fields.value = local_d0.fields._current.fields.value;
    local_90.fields._current.fields.key = local_d0.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_d0.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_d0.fields._36_4_;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_MoveNext__
                        );
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (!bVar3) break;
      if ((IAGNPGHOAIC_o *)local_90.fields._current.fields.value == IEKGHPACLPF) {
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = local_90.fields._current.fields.key;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,local_90.fields._current.fields.key,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_Dispose__
              );
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (__this->fields)._size) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a8,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a8,
                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                 ), key = local_a8.fields._current, bVar3) {
          if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Remove
                    (pSVar4,key,
                     Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_Remove__);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a8,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

