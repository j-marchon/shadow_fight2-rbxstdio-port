// GGHCLMEFIGO$$NAKEPBLLOLH @ RVA 0x33B7E44

System_Collections_Generic_List_AMJMGFCCAKN__o *
GGHCLMEFIGO__NAKEPBLLOLH(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_AMJMGFCCAKN__o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  MethodInfo *extraout_x1;
  AMJMGFCCAKN_o *item;
  AMJMGFCCAKN_array *pAVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567d81 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AMJMGFCCAKN>_TypeInfo);
    DAT_04567d81 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_AMJMGFCCAKN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AMJMGFCCAKN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AMJMGFCCAKN>__ctor__);
  __this_01 = (__this->fields).DPOPJKJLDEE;
  if (__this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      lVar2 = Method_System_Collections_Generic_List<AMJMGFCCAKN>_Add__;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
        return __this_00;
      }
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item = local_50.fields._current[8].monitor;
    } while (item == (AMJMGFCCAKN_o *)0x0);
    if (__this_00 == (System_Collections_Generic_List_AMJMGFCCAKN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pAVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pAVar4 == (AMJMGFCCAKN_array *)0x0) break;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pAVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pAVar4->m_Items[(int)uVar1] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

