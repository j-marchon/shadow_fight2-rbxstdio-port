// KAHMAJKJMBK$$IHMCGLPINDP @ RVA 0x34C2B60

void KAHMAJKJMBK__IHMCGLPINDP
               (KAHMAJKJMBK_o *__this,System_Collections_Generic_List_JFAGMCHGOEH__o *IHBIFBPJFCL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_JFAGMCHGOEH__o *pSVar4;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  AJNNHGGLGIF_array *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2ac0 with catch @ 035c2b60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2aac with catch @ 035c2b6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2a90 with catch @ 035c2b70
                        */
  if ((DAT_04568610 & 1) == 0) {
                    /* try { // try from 035c2b88 to 036c2b8b has its CatchHandler @ 035c2bac */
                    /* try { // try from 035c2b8c to 036c2bb3 has its CatchHandler @ 035c28e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_get_Current__);
                    /* catch() { ... } // from try @ 035c2b88 with catch @ 035c2bac */
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_AddRange__);
                    /* try { // try from 035c2bb4 to 036c2bbb has its CatchHandler @ 035c2bd0 */
                    /* try { // try from 035c2bbc to 036c2bc7 has its CatchHandler @ 035c28e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
                    /* try { // try from 035c2bc8 to 036c2bcf has its CatchHandler @ 035c2bd0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035c2bb4 with catch @ 035c2bd0
                       catch(type#2 @ 00000000) { ... } // from try @ 035c2bc8 with catch @ 035c2bd0
                        */
    DAT_04568610 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).DABLKOLPECH;
  if (pSVar4 != (System_Collections_Generic_List_JFAGMCHGOEH__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)IHBIFBPJFCL,
               Method_System_Collections_Generic_List<JFAGMCHGOEH>_AddRange__);
    pSVar4 = (__this->fields).DABLKOLPECH;
    if (pSVar4 != (System_Collections_Generic_List_JFAGMCHGOEH__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
          return;
        }
        __this_00 = (__this->fields).LJNCACBBIBD;
        if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) break;
        pAVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
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

