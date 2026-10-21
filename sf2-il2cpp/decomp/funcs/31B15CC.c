// IGPDCHBJAPD.JMPAGIGEFME$$ACBMLHJIFMD @ RVA 0x31B15CC

System_Collections_Generic_List_HOOAAGABMBL__o *
IGPDCHBJAPD_JMPAGIGEFME__ACBMLHJIFMD
          (IGPDCHBJAPD_JMPAGIGEFME_o *__this,bool JDICPLBDFGM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *__this_01;
  Il2CppClass *item;
  HOOAAGABMBL_array *pHVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b7d & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    DAT_04566b7d = 1;
  }
                    /* try { // try from 032b1660 to 033b1687 has its CatchHandler @ 032b1ae0 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  __this_01 = (__this->fields).GHAAKPDHIJJ;
  if (__this_01 == (System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_032b16bc:
                    /* try { // try from 032b16bc to 033b16e7 has its CatchHandler @ 032b1adc */
  bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_MoveNext__
                    );
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (!bVar3) {
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_Dispose__)
    ;
    return __this_00;
  }
  if (JDICPLBDFGM) goto code_r0x032b16d4;
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_032b16e8;
code_r0x032b16d4:
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(char *)&local_50.fields._current[2].klass != '\0') {
LAB_032b16e8:
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = local_50.fields._current[1].klass;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
                    /* try { // try from 032b1720 to 033b1743 has its CatchHandler @ 032b1b94 */
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 032b1744 to 033b18a7 has its CatchHandler @ 032b122c */
    }
  }
  goto LAB_032b16bc;
}

