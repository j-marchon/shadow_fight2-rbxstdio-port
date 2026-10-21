// IJCLCKIJJDH$$POHKBLDNIKL @ RVA 0x352F510

void IJCLCKIJJDH__POHKBLDNIKL(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Comparison_MFBFOBDKLBC__o **ppSVar2;
  System_Comparison_MFBFOBDKLBC__o *comparison;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04568a4d & 1) == 0) {
    FUN_01bab630(&System_Comparison<MFBFOBDKLBC>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>_Sort__);
    FUN_01bab630(&Method_IJCLCKIJJDH_<>c_PGAHFAOBNKD__);
    FUN_01bab630(&IJCLCKIJJDH_<>c_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_GetEnumerator__
                );
    DAT_04568a4d = 1;
  }
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._currentValue = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).MFENGHDGHGI;
  if ((__this_01 != (System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *)0x0)
     && (__this_02 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Values
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                                Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_get_Values__
                               ),
        __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
  {
    System_Collections_Generic_Dictionary_ValueCollection<Int32Enum,_object>__GetEnumerator
              (&local_88,__this_02,
               Method_System_Collections_Generic_Dictionary_ValueCollection<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_GetEnumerator__
              );
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._dictionary = local_88.fields._dictionary;
    local_70.fields._currentValue = local_88.fields._currentValue;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_MoveNext__
                        );
      __this_00 = local_70.fields._currentValue;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_Dispose__
                  );
        return;
      }
      if ((IJCLCKIJJDH_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IJCLCKIJJDH_<>c_TypeInfo);
      }
      comparison = IJCLCKIJJDH_<>c_TypeInfo->static_fields->__9__18_0;
      if (comparison == (System_Comparison_MFBFOBDKLBC__o *)0x0) {
        if ((IJCLCKIJJDH_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IJCLCKIJJDH_<>c_TypeInfo);
        }
        comparison = (System_Comparison_MFBFOBDKLBC__o *)
                     thunk_FUN_01bda818(System_Comparison<MFBFOBDKLBC>_TypeInfo);
        System_Comparison<object>___ctor();
        ppSVar2 = &IJCLCKIJJDH_<>c_TypeInfo->static_fields->__9__18_0;
        *ppSVar2 = comparison;
        thunk_FUN_01c20e04(ppSVar2,comparison);
      }
      if ((System_Collections_Generic_List_object__o *)__this_00 ==
          (System_Collections_Generic_List_object__o *)0x0) break;
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<MFBFOBDKLBC>_Sort__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

