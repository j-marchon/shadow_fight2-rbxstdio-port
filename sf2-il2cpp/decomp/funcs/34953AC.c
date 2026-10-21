// NGKBNOEJLPH$$ACEMLHJMOAK @ RVA 0x34953AC

/* WARNING: Removing unreachable block (ram,0x03595584) */

System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *
NGKBNOEJLPH__ACEMLHJMOAK
          (NGKBNOEJLPH_o *__this,
          System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *FANNJBKGDKF,
          System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *OPOBKFLDJIG,MethodInfo *method
          )

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *__this_00;
  NGKBNOEJLPH_LNKLGCHOEBF_array *pNVar4;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568459 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_TypeInfo);
    DAT_04568459 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__);
  if (FANNJBKGDKF == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)FANNJBKGDKF,
             Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_GetEnumerator__);
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
  local_60.fields._current = local_98.fields._current;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_MoveNext__
                      );
    item = local_60.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_Dispose__
                );
      return __this_00;
    }
    if (OPOBKFLDJIG == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)OPOBKFLDJIG,
               Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_MoveNext__
                             ),
          lVar2 = Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Add__, bVar3) {
      if ((NGKBNOEJLPH_LNKLGCHOEBF_o *)local_80.fields._current == (NGKBNOEJLPH_LNKLGCHOEBF_o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((NGKBNOEJLPH_LNKLGCHOEBF_o *)item == (NGKBNOEJLPH_LNKLGCHOEBF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((NGKBNOEJLPH_LNKLGCHOEBF_Fields *)((long)local_80.fields._current + 0x10))->BNGDONJEHMH
          == ((NGKBNOEJLPH_LNKLGCHOEBF_Fields *)((long)item + 0x10))->BNGDONJEHMH) {
        if (__this_00 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pNVar4 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pNVar4 == (NGKBNOEJLPH_LNKLGCHOEBF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = (NGKBNOEJLPH_LNKLGCHOEBF_o *)item;
          thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_Dispose__)
    ;
  } while( true );
}

