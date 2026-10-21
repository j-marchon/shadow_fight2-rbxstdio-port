// KAHMAJKJMBK$$NBAKIBEGKDJ @ RVA 0x34C26A4

void KAHMAJKJMBK__NBAKIBEGKDJ
               (KAHMAJKJMBK_o *__this,PJKHAJKEHEL_o *NDOMOKBINFD,
               System_Collections_Generic_List_CCAEOJMALLA__o *MGOIJOLLNEG,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppClass *item;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456860d & 1) == 0) {
                    /* try { // try from 035c26d0 to 036c26df has its CatchHandler @ 035c2820 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCAEOJMALLA>_Dispose__);
                    /* try { // try from 035c26e0 to 036c2807 has its CatchHandler @ 035c2390 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCAEOJMALLA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCAEOJMALLA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCAEOJMALLA>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_11465);
    DAT_0456860d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (NDOMOKBINFD == (PJKHAJKEHEL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11465,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (NDOMOKBINFD->fields).NJDOELJOLLB;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (MGOIJOLLNEG != (System_Collections_Generic_List_CCAEOJMALLA__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)MGOIJOLLNEG,
                 Method_System_Collections_Generic_List<CCAEOJMALLA>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<CCAEOJMALLA>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        if (!bVar3) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2674 with catch @ 035c2828
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2618 with catch @ 035c282c
                        */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<CCAEOJMALLA>_Dispose__);
                    /* try { // try from 035c2844 to 036c2847 has its CatchHandler @ 035c2858 */
          PJKHAJKEHEL__PBNHNHLEPEJ
                    (NDOMOKBINFD,(NDOMOKBINFD->fields).INGEFFGPJPB,(NDOMOKBINFD->fields).NJDOELJOLLB
                     ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035c2844 with catch @ 035c2858 */
          return;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035c2860 to 036c28c7 has its CatchHandler @ 035c28dc */
          FUN_01bab8c8();
        }
        pSVar4 = (NDOMOKBINFD->fields).NJDOELJOLLB;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = local_50.fields._current[7].klass;
        pSVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pSVar5 == (System_String_array *)0x0) break;
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = (System_String_o *)item;
                    /* try { // try from 035c2808 to 036c280b has its CatchHandler @ 035c2824 */
                    /* try { // try from 035c280c to 036c280f has its CatchHandler @ 035c2390 */
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1);
                    /* try { // try from 035c2810 to 036c2813 has its CatchHandler @ 035c281c */
        }
        else {
                    /* try { // try from 035c2814 to 036c2843 has its CatchHandler @ 035c2390 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2810 with catch @ 035c281c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c26d0 with catch @ 035c2820
                        */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2808 with catch @ 035c2824
                        */
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

