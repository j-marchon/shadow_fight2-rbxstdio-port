// ACHLOMELAJE$$JPKICKOCNEK @ RVA 0x306342C

System_Collections_Generic_List_PAMEPBLOLPB__o *
ACHLOMELAJE__JPKICKOCNEK(ACHLOMELAJE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_00;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_01;
  PAMEPBLOLPB_array *pPVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565ee4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PAMEPBLOLPB>_TypeInfo);
    DAT_04565ee4 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PAMEPBLOLPB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PAMEPBLOLPB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PAMEPBLOLPB>__ctor__);
  __this_01 = (__this->fields).HDDNEKLMLMF;
  if (__this_01 == (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__);
      lVar2 = Method_System_Collections_Generic_List<PAMEPBLOLPB>_Add__;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
        return __this_00;
      }
      if ((PAMEPBLOLPB_o *)local_50.fields._current == (PAMEPBLOLPB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (((PAMEPBLOLPB_Fields *)((long)local_50.fields._current + 0x10))->GHPHFGBIPCI !=
             JLAFGLDIFOC);
    if (__this_00 == (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pPVar4 == (PAMEPBLOLPB_array *)0x0) break;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pPVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pPVar4->m_Items[(int)uVar1] = (PAMEPBLOLPB_o *)local_50.fields._current;
      thunk_FUN_01c20e04(pPVar4->m_Items + (int)uVar1,local_50.fields._current);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,local_50.fields._current,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

