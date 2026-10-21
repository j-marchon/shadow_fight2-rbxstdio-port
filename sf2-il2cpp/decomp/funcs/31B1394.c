// IGPDCHBJAPD.JMPAGIGEFME$$OCPCHKLBPNH @ RVA 0x31B1394

System_Collections_Generic_List_HOGPIBHKJDL__o *
IGPDCHBJAPD_JMPAGIGEFME__OCPCHKLBPNH
          (IGPDCHBJAPD_JMPAGIGEFME_o *__this,bool JDICPLBDFGM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_HOGPIBHKJDL__o *__this_00;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *__this_01;
  Il2CppClass *item;
  HOGPIBHKJDL_array *pHVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b7b & 1) == 0) {
                    /* try { // try from 032b13cc to 033b13f3 has its CatchHandler @ 032b1b8c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOGPIBHKJDL>_TypeInfo);
    DAT_04566b7b = 1;
  }
                    /* try { // try from 032b1428 to 033b1453 has its CatchHandler @ 032b1b88 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_HOGPIBHKJDL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOGPIBHKJDL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOGPIBHKJDL>__ctor__);
  __this_01 = (__this->fields).OJFMFMHCPOA;
  if (__this_01 == (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_032b1484:
  bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_MoveNext__
                    );
  lVar2 = Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__;
                    /* try { // try from 032b1490 to 033b1503 has its CatchHandler @ 032b1c38 */
  if (!bVar3) {
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__)
    ;
    return __this_00;
  }
  if (JDICPLBDFGM) goto code_r0x032b149c;
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_032b14b0;
code_r0x032b149c:
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(char *)&local_50.fields._current[1].monitor != '\0') {
LAB_032b14b0:
    if (__this_00 == (System_Collections_Generic_List_HOGPIBHKJDL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = local_50.fields._current[1].klass;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOGPIBHKJDL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = (HOGPIBHKJDL_o *)item;
      thunk_FUN_01c20e04();
    }
    else {
                    /* try { // try from 032b1504 to 033b165f has its CatchHandler @ 032b122c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_032b1484;
}

