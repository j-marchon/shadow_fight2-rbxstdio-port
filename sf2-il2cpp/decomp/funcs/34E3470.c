// FIKENOMMMBH$$CANFFBLJIDC @ RVA 0x34E3470

void FIKENOMMMBH__CANFFBLJIDC
               (System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,
               System_Collections_Generic_Dictionary_string__List_string___o *KENFFDHLNDA,
               MethodInfo *method)

{
  System_String_o *key;
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  JMDPBFOCHHP_o *pJVar5;
  POLAJNLKPAK_o *__this;
  System_String_o *value;
  System_Collections_Generic_List_object__o *pSVar6;
  Il2CppClass *pIVar7;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 035e3490 to 036e3497 has its CatchHandler @ 035e35d4 */
  if ((DAT_04568749 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>_Add__);
                    /* try { // try from 035e34ac to 036e34bb has its CatchHandler @ 035e35d0 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>_ContainsKey__);
                    /* try { // try from 035e34bc to 036e34cb has its CatchHandler @ 035e35cc */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__);
                    /* try { // try from 035e34cc to 036e35ef has its CatchHandler @ 035e3384 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_19886);
    DAT_04568749 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (GJBLBEALOBO == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)GJBLBEALOBO,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    do {
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
      pIVar3 = local_80.fields._current;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
        return;
      }
    } while (local_80.fields._current == (Il2CppObject *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e34bc with catch @ 035e35cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e34ac with catch @ 035e35d0
                        */
    pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3490 with catch @ 035e35d4
                        */
    if (pJVar5 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (pJVar5->fields).FMPOOGLPALN;
    if (__this == (POLAJNLKPAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    value = POLAJNLKPAK__LMFIOPLCOHM(__this,(System_String_o *)pIVar3[4].klass,(MethodInfo *)0x0);
                    /* try { // try from 035e35f0 to 036e35f3 has its CatchHandler @ 035e3614 */
                    /* try { // try from 035e35f4 to 036e361b has its CatchHandler @ 035e3384 */
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (KENFFDHLNDA == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) break;
    key = StringLiteral_19886;
    if (!bVar4) {
      key = value;
    }
                    /* catch() { ... } // from try @ 035e35f0 with catch @ 035e3614 */
    bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)KENFFDHLNDA,
                       (Il2CppObject *)key,
                       Method_System_Collections_Generic_Dictionary<string,_List<string>>_ContainsKey__
                      );
    if (bVar4) {
                    /* try { // try from 035e361c to 036e3623 has its CatchHandler @ 035e3638 */
                    /* try { // try from 035e3624 to 036e362f has its CatchHandler @ 035e3384 */
                    /* try { // try from 035e3630 to 036e3637 has its CatchHandler @ 035e3638 */
      pSVar6 = (System_Collections_Generic_List_object__o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)KENFFDHLNDA,
                          (Il2CppObject *)key,
                          Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__
                         );
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e361c with catch @ 035e3638
                       catch(type#2 @ 00000000) { ... } // from try @ 035e3630 with catch @ 035e3638
                        */
      pIVar7 = pIVar3[4].klass;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = (Il2CppObject *)pIVar7;
        thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1);
      }
      else {
                    /* try { // try from 035e36ec to 036e3817 has its CatchHandler @ 035e36ec
                       catch() { ... } // from try @ 035e36ec with catch @ 035e36ec
                       catch() { ... } // from try @ 035e3918 with catch @ 035e36ec
                       catch() { ... } // from try @ 035e394c with catch @ 035e36ec
                       catch() { ... } // from try @ 035e399c with catch @ 035e36ec
                       catch() { ... } // from try @ 035e39bc with catch @ 035e36ec
                       catch() { ... } // from try @ 035e39e8 with catch @ 035e36ec
                       catch() { ... } // from try @ 035e3a10 with catch @ 035e36ec */
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar6,(Il2CppObject *)pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      pSVar6 = (System_Collections_Generic_List_object__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (pSVar6,Method_System_Collections_Generic_List<string>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar7 = pIVar3[4].klass;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = (Il2CppObject *)pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar6,(Il2CppObject *)pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      System_Collections_Generic_Dictionary<object,_object>__Add
                ((System_Collections_Generic_Dictionary_object__object__o *)KENFFDHLNDA,
                 (Il2CppObject *)key,(Il2CppObject *)pSVar6,
                 Method_System_Collections_Generic_Dictionary<string,_List<string>>_Add__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

