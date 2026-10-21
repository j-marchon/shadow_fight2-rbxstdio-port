// ACHLOMELAJE$$AMHPEGPAJDL @ RVA 0x3060698

System_Collections_Generic_List_OLKPEJMEBPJ__o *
ACHLOMELAJE__AMHPEGPAJDL(ACHLOMELAJE_o *__this,System_String_o *EBLHBHIPPMK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_OLKPEJMEBPJ__o *__this_00;
  ACHLOMELAJE_MDHCBOFHAEL_o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *__this_02;
  MethodInfo *method_00;
  DNELIPCHKLK_o *pDVar4;
  OLKPEJMEBPJ_array *pOVar5;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_78;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04565ec1 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKPEJMEBPJ>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKPEJMEBPJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OLKPEJMEBPJ>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_OLKPEJMEBPJ>_GetEnumerator__
                );
    DAT_04565ec1 = 1;
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_OLKPEJMEBPJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OLKPEJMEBPJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OLKPEJMEBPJ>__ctor__);
                    /* try { // try from 03160748 to 0326074f has its CatchHandler @ 031607cc */
  __this_01 = (__this->fields).KBCAIBPDIKB;
  if ((__this_01 == (ACHLOMELAJE_MDHCBOFHAEL_o *)0x0) ||
     (__this_02 = ACHLOMELAJE_MDHCBOFHAEL__JDHAHDALAOA(__this_01,method_00),
     __this_02 ==
     (System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0316076c to 03260777 has its CatchHandler @ 031607c4 */
                    /* try { // try from 03160778 to 032607bb has its CatchHandler @ 03160690 */
  System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
            (&local_78,
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_02,
             Method_System_Collections_Generic_Dictionary_ValueCollection<string,_OLKPEJMEBPJ>_GetEnumerator__
            );
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._dictionary = local_78.fields._dictionary;
  local_60.fields._currentValue = local_78.fields._currentValue;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_MoveNext__
                        );
      item = local_60.fields._currentValue;
      if (!bVar3) {
                    /* try { // try from 03160834 to 0326083b has its CatchHandler @ 0316083c */
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_Dispose__
                  );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03160820 with catch @ 0316083c
                       catch(type#2 @ 00000000) { ... } // from try @ 03160834 with catch @ 0316083c
                        */
        return __this_00;
      }
      if ((OLKPEJMEBPJ_o *)local_60.fields._currentValue == (OLKPEJMEBPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pDVar4 = ((OLKPEJMEBPJ_Fields *)((long)local_60.fields._currentValue + 0x10))->BBELCDHPJIP;
      if (pDVar4 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 031607bc to 032607bf has its CatchHandler @ 031607c8 */
                    /* try { // try from 031607c0 to 032607e3 has its CatchHandler @ 03160690 */
      bVar3 = System_String__op_Equality((pDVar4->fields).GDPFBDIJNHA,EBLHBHIPPMK,(MethodInfo *)0x0)
      ;
      lVar2 = Method_System_Collections_Generic_List<OLKPEJMEBPJ>_Add__;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316076c with catch @ 031607c4
                        */
    } while (!bVar3);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031607bc with catch @ 031607c8
                        */
    if (__this_00 == (System_Collections_Generic_List_OLKPEJMEBPJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03160748 with catch @ 031607cc
                        */
    pOVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar5 == (OLKPEJMEBPJ_array *)0x0) break;
                    /* try { // try from 031607e4 to 032607e7 has its CatchHandler @ 03160810 */
    uVar1 = (__this_00->fields)._size;
                    /* try { // try from 031607e8 to 0326081f has its CatchHandler @ 03160690 */
    if (uVar1 < (uint)pOVar5->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pOVar5->m_Items[(int)uVar1] = (OLKPEJMEBPJ_o *)item;
      thunk_FUN_01c20e04(pOVar5->m_Items + (int)uVar1,item);
    }
    else {
                    /* catch() { ... } // from try @ 031607e4 with catch @ 03160810 */
                    /* try { // try from 03160820 to 03260827 has its CatchHandler @ 0316083c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 03160828 to 03260833 has its CatchHandler @ 03160690 */
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

