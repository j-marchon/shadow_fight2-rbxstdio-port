// KAHMAJKJMBK$$IGGBDADJOJA @ RVA 0x34C2ED0

void KAHMAJKJMBK__IGGBDADJOJA
               (KAHMAJKJMBK_o *__this,System_Collections_Generic_List_JCHNBADDBGO__o *HNHFCBOGGAO,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar4;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  AJNNHGGLGIF_array *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568613 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
                    /* try { // try from 035c2f00 to 036c2fcb has its CatchHandler @ 035c2f00
                       catch() { ... } // from try @ 035c2f00 with catch @ 035c2f00
                       catch() { ... } // from try @ 035c30d8 with catch @ 035c2f00
                       catch() { ... } // from try @ 035c317c with catch @ 035c2f00
                       catch() { ... } // from try @ 035c3184 with catch @ 035c2f00
                       catch() { ... } // from try @ 035c3248 with catch @ 035c2f00 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
    DAT_04568613 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).DKGFCNANCMN;
  if (pSVar4 != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)HNHFCBOGGAO,
               Method_System_Collections_Generic_List<JCHNBADDBGO>_AddRange__);
    pSVar4 = (__this->fields).DKGFCNANCMN;
    if (pSVar4 != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
                    /* try { // try from 035c3028 to 036c3053 has its CatchHandler @ 035c31ac */
          return;
        }
        __this_00 = (__this->fields).LJNCACBBIBD;
        if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) break;
        pAVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* try { // try from 035c2fcc to 036c2ff3 has its CatchHandler @ 035c31b0 */
        if (pAVar5 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pAVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pAVar5->m_Items[(int)uVar1] = (AJNNHGGLGIF_o *)local_48.fields._current;
          thunk_FUN_01c20e04(pAVar5->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,local_48.fields._current
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

