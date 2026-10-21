// IGPDCHBJAPD.JMPAGIGEFME$$LLIHIDKHAPN @ RVA 0x31B1154

System_Collections_Generic_List_BNKBGIIJNLF__o *
IGPDCHBJAPD_JMPAGIGEFME__LLIHIDKHAPN
          (IGPDCHBJAPD_JMPAGIGEFME_o *__this,bool JDICPLBDFGM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *__this_01;
  Il2CppClass *item;
  BNKBGIIJNLF_array *pBVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b77 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BNKBGIIJNLF>_TypeInfo);
    DAT_04566b77 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_BNKBGIIJNLF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BNKBGIIJNLF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BNKBGIIJNLF>__ctor__);
  __this_01 = (__this->fields).GMCEHJAIFBJ;
  if (__this_01 == (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032b122c to 033b13cb has its CatchHandler @ 032b122c
                       catch() { ... } // from try @ 032b122c with catch @ 032b122c
                       catch() { ... } // from try @ 032b1504 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1744 with catch @ 032b122c
                       catch() { ... } // from try @ 032b19e0 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1a9c with catch @ 032b122c
                       catch() { ... } // from try @ 032b1ab4 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1b88 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1c38 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1cd0 with catch @ 032b122c */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_032b1244:
  bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                    );
  lVar2 = Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__;
  if (!bVar3) {
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__)
    ;
    return __this_00;
  }
  if (JDICPLBDFGM) goto code_r0x032b125c;
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_032b1270;
code_r0x032b125c:
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(char *)&local_50.fields._current[1].monitor != '\0') {
LAB_032b1270:
    if (__this_00 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = local_50.fields._current[1].klass;
    pBVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pBVar4 == (BNKBGIIJNLF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pBVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pBVar4->m_Items[(int)uVar1] = (BNKBGIIJNLF_o *)item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_032b1244;
}

