// IOIKBGAJIGO$$AEJJGGKAHBN @ RVA 0x33739B0

/* WARNING: Removing unreachable block (ram,0x03473c0c) */

void IOIKBGAJIGO__AEJJGGKAHBN(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *DDGBMJNBFPF;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *in_x2;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* catch() { ... } // from try @ 034737c4 with catch @ 034739b0 */
                    /* catch() { ... } // from try @ 0347391c with catch @ 034739b4 */
                    /* catch() { ... } // from try @ 03473748 with catch @ 034739b8 */
                    /* catch() { ... } // from try @ 0347371c with catch @ 034739bc */
                    /* catch() { ... } // from try @ 03473914 with catch @ 034739c0 */
                    /* catch() { ... } // from try @ 03473910 with catch @ 034739c4 */
                    /* catch() { ... } // from try @ 03473764 with catch @ 034739c8 */
                    /* catch() { ... } // from try @ 03473930 with catch @ 034739cc
                       catch() { ... } // from try @ 03473940 with catch @ 034739cc */
                    /* catch() { ... } // from try @ 034736f8 with catch @ 034739d0 */
                    /* catch() { ... } // from try @ 034735f4 with catch @ 034739d4 */
                    /* catch() { ... } // from try @ 03473908 with catch @ 034739d8 */
                    /* catch() { ... } // from try @ 03473634 with catch @ 034739dc */
  if ((DAT_04567b40 & 1) == 0) {
                    /* catch() { ... } // from try @ 034737f0 with catch @ 034739e0 */
                    /* catch() { ... } // from try @ 034735a0 with catch @ 034739e4 */
                    /* catch() { ... } // from try @ 034735b4 with catch @ 034739e8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* catch() { ... } // from try @ 034737c8 with catch @ 034739ec */
                    /* catch() { ... } // from try @ 03473784 with catch @ 034739f0 */
                    /* catch() { ... } // from try @ 0347390c with catch @ 034739f4
                       catch() { ... } // from try @ 03473918 with catch @ 034739f4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
                    /* catch() { ... } // from try @ 03473904 with catch @ 034739f8 */
                    /* catch() { ... } // from try @ 034735d8 with catch @ 034739fc */
                    /* catch() { ... } // from try @ 03473588 with catch @ 03473a00 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
                    /* catch() { ... } // from try @ 03473578 with catch @ 03473a04 */
                    /* catch() { ... } // from try @ 03473900 with catch @ 03473a08 */
                    /* catch() { ... } // from try @ 034738fc with catch @ 03473a0c */
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
                    /* catch() { ... } // from try @ 034738f8 with catch @ 03473a10 */
                    /* catch() { ... } // from try @ 03473534 with catch @ 03473a14 */
                    /* catch() { ... } // from try @ 034734d8 with catch @ 03473a18 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
                    /* try { // try from 03473a30 to 03573a33 has its CatchHandler @ 03473a40 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* catch() { ... } // from try @ 03473a30 with catch @ 03473a40 */
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_6489);
    DAT_04567b40 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 03473a80 to 03573aa7 has its CatchHandler @ 03473abc */
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<string>__ctor__);
  pIVar3 = StringLiteral_1;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar5 = (__this->fields)._items;
                    /* try { // try from 03473aa8 to 03573ab3 has its CatchHandler @ 034732c4 */
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar5 != (System_Object_array *)0x0) {
                    /* try { // try from 03473ab4 to 03573abb has its CatchHandler @ 03473abc */
      uVar1 = (__this->fields)._size;
                    /* catch() { ... } // from try @ 03473a80 with catch @ 03473abc
                       catch() { ... } // from try @ 03473ab4 with catch @ 03473abc */
      if (uVar1 < (uint)pSVar5->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = pIVar3;
        thunk_FUN_01c20e04();
      }
      else {
        in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,pIVar3,(MethodInfo_26E4DAC *)in_x2);
      }
      pIVar3 = StringLiteral_6489;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar5 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = pIVar3;
          thunk_FUN_01c20e04();
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,pIVar3,(MethodInfo_26E4DAC *)in_x2);
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
        local_60.fields._index = local_98.fields._index;
        local_60.fields._version = local_98.fields._version;
        local_60.fields._list = local_98.fields._list;
        local_60.fields._current = local_98.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                 ), pIVar3 = local_60.fields._current, bVar4) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__
                    );
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_80,
                                    Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                   ), DDGBMJNBFPF = local_80.fields._current, bVar4) {
            if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            IOIKBGAJIGO__AEJJGGKAHBN((System_String_o *)pIVar3,(System_String_o *)DDGBMJNBFPF,in_x2)
            ;
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

