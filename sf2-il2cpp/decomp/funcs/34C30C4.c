// KAHMAJKJMBK$$ANABFMECNKN @ RVA 0x34C30C4

void KAHMAJKJMBK__ANABFMECNKN(KAHMAJKJMBK_o *__this,PJKHAJKEHEL_o *NDOMOKBINFD,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_JFAGMCHGOEH__o *__this_00;
  System_String_o *item;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 035c30c8 to 036c30d7 has its CatchHandler @ 035c3190 */
                    /* try { // try from 035c30d8 to 036c3167 has its CatchHandler @ 035c2f00 */
  if ((DAT_04568619 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_11464);
    DAT_04568619 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (NDOMOKBINFD == (PJKHAJKEHEL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11464,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (NDOMOKBINFD->fields).ODHIGGJOPEK;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar4->fields)._size;
                    /* try { // try from 035c3168 to 036c316f has its CatchHandler @ 035c31b4 */
                    /* try { // try from 035c3170 to 036c3173 has its CatchHandler @ 035c31a8 */
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                    /* try { // try from 035c3174 to 036c3177 has its CatchHandler @ 035c319c */
    if (0 < length) {
                    /* try { // try from 035c3178 to 036c317b has its CatchHandler @ 035c3198 */
                    /* try { // try from 035c317c to 036c317f has its CatchHandler @ 035c2f00 */
                    /* try { // try from 035c3180 to 036c3183 has its CatchHandler @ 035c318c */
                    /* try { // try from 035c3184 to 036c31c3 has its CatchHandler @ 035c2f00 */
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).DABLKOLPECH;
                    /* catch() { ... } // from try @ 035c3180 with catch @ 035c318c */
    if (__this_00 != (System_Collections_Generic_List_JFAGMCHGOEH__o *)0x0) {
                    /* catch() { ... } // from try @ 035c30c8 with catch @ 035c3190 */
                    /* catch() { ... } // from try @ 035c30ac with catch @ 035c3194 */
                    /* catch() { ... } // from try @ 035c3178 with catch @ 035c3198 */
                    /* catch() { ... } // from try @ 035c3174 with catch @ 035c319c */
                    /* catch() { ... } // from try @ 035c30b8 with catch @ 035c31a0 */
                    /* catch() { ... } // from try @ 035c3090 with catch @ 035c31a4 */
                    /* catch() { ... } // from try @ 035c3170 with catch @ 035c31a8 */
                    /* catch() { ... } // from try @ 035c3028 with catch @ 035c31ac */
                    /* catch() { ... } // from try @ 035c2fcc with catch @ 035c31b0 */
                    /* catch() { ... } // from try @ 035c3168 with catch @ 035c31b4 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
                    /* try { // try from 035c31c4 to 036c31c7 has its CatchHandler @ 035c31d8 */
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__
                            );
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    /* catch() { ... } // from try @ 035c31c4 with catch @ 035c31d8 */
          if (!bVar3) {
                    /* try { // try from 035c3254 to 036c325b has its CatchHandler @ 035c325c */
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
                    /* catch() { ... } // from try @ 035c31e0 with catch @ 035c325c
                       catch() { ... } // from try @ 035c3254 with catch @ 035c325c */
                    /* try { // try from 035c3260 to 036c33d3 has its CatchHandler @ 035c3260
                       catch() { ... } // from try @ 035c3260 with catch @ 035c3260
                       catch() { ... } // from try @ 035c34a0 with catch @ 035c3260
                       catch() { ... } // from try @ 035c3554 with catch @ 035c3260
                       catch() { ... } // from try @ 035c355c with catch @ 035c3260
                       catch() { ... } // from try @ 035c3614 with catch @ 035c3260 */
            return;
          }
                    /* try { // try from 035c31e0 to 036c3247 has its CatchHandler @ 035c325c */
          if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (*(char *)((long)&local_50.fields._current[3].monitor + 4) == '\0');
        pSVar4 = (NDOMOKBINFD->fields).ODHIGGJOPEK;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = local_50.fields._current[5].monitor;
        pSVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pSVar5 == (System_String_array *)0x0) break;
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1);
        }
        else {
                    /* try { // try from 035c3248 to 036c3253 has its CatchHandler @ 035c2f00 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

