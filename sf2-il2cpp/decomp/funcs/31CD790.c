// HCKCBFOGMMJ$$AHKEBCAMMDL @ RVA 0x31CD790

void HCKCBFOGMMJ__AHKEBCAMMDL(HCKCBFOGMMJ_o *__this,IBMLPPNMDCI_o *BBEGIKHKBID,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_long__o *__this_00;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *pSVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  System_Int64_array *pSVar5;
  void *item;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_80;
  
                    /* try { // try from 032cd790 to 033cd7a3 has its CatchHandler @ 032ce800 */
                    /* try { // try from 032cd7a8 to 033cd7c3 has its CatchHandler @ 032ce7fc */
                    /* try { // try from 032cd7c4 to 033cd7d3 has its CatchHandler @ 032ce7f8 */
  if ((DAT_04566c81 & 1) == 0) {
                    /* try { // try from 032cd7d8 to 033cd80f has its CatchHandler @ 032ce7f4 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                );
                    /* try { // try from 032cd810 to 033ce81f has its CatchHandler @ 032ccf88 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<long>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Contains__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
                );
    DAT_04566c81 = 1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentValue = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_long__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<long>_TypeInfo);
  System_Collections_Generic_List<long>___ctor
            (__this_00,Method_System_Collections_Generic_List<long>__ctor__);
  pSVar4 = (__this->fields).CMJNDHHGCBI;
  if ((pSVar4 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) &&
     (__this_01 = System_Collections_Generic_Dictionary<long,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__
                            ),
     __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<long,_object>__GetEnumerator
              (&local_b8,__this_01,
               Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
              );
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._dictionary = local_b8.fields._dictionary;
    local_80.fields._currentValue = local_b8.fields._currentValue;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                        );
      if (!bVar3) break;
      if (local_80.fields._currentValue == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (BBEGIKHKBID == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (BBEGIKHKBID->fields).EHBNKDHKJNI;
      if (__this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item = local_80.fields._currentValue[1].monitor;
      bVar3 = Google_Protobuf_Collections_RepeatedField<long>__Contains
                        (__this_02,(int64_t)item,
                         Method_Google_Protobuf_Collections_RepeatedField<long>_Contains__);
      lVar2 = Method_System_Collections_Generic_List<long>_Add__;
      if (!bVar3) {
        if (__this_00 == (System_Collections_Generic_List_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar5 == (System_Int64_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = (int64_t)item;
        }
        else {
          System_Collections_Generic_List<long>__AddWithResize
                    (__this_00,(int64_t)item,
                     *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
              );
    if (__this_00 != (System_Collections_Generic_List_long__o *)0x0) {
      System_Collections_Generic_List<long>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,__this_00,
                 Method_System_Collections_Generic_List<long>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = (System_Collections_Generic_List_T__o *)local_b8.fields._dictionary;
      local_a0.fields._current = local_b8.fields._currentValue;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<long>__MoveNext
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<long>__Dispose
                    (&local_a0,Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
          return;
        }
        pSVar4 = (__this->fields).CMJNDHHGCBI;
        if (pSVar4 == (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) break;
        System_Collections_Generic_Dictionary<long,_object>__Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                   (int64_t)local_a0.fields._current,
                   Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Remove__);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

