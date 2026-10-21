// KAHMAJKJMBK$$DGMPCAMKCHI @ RVA 0x34BDE30

void KAHMAJKJMBK__DGMPCAMKCHI(KAHMAJKJMBK_o *__this,PJKHAJKEHEL_o *NDOMOKBINFD,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_Collections_Generic_List_EFNDJJDBNFN__o *__this_00;
  System_Collections_Generic_List_ONMBPNGKBBO__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045685fb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFNDJJDBNFN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ONMBPNGKBBO>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_11463);
    DAT_045685fb = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  if (NDOMOKBINFD == (PJKHAJKEHEL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11463,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).BMHBDANJFFJ;
  if (__this_00 != (System_Collections_Generic_List_EFNDJJDBNFN__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a0,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EFNDJJDBNFN>_GetEnumerator__);
    ppSVar1 = &(NDOMOKBINFD->fields).NILOEHGNJNL;
    local_70.fields._index = local_a0.fields._index;
    local_70.fields._version = local_a0.fields._version;
    local_70.fields._list = local_a0.fields._list;
    local_70.fields._current = local_a0.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_MoveNext__);
      if (!bVar2) break;
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (NDOMOKBINFD == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *ppSVar1 = local_70.fields._current[5].monitor;
      thunk_FUN_01c20e04(ppSVar1);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_Dispose__);
    __this_01 = (__this->fields).DPAPFKANFNK;
    if (__this_01 != (System_Collections_Generic_List_ONMBPNGKBBO__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ONMBPNGKBBO>_GetEnumerator__);
      ppSVar1 = &(NDOMOKBINFD->fields).NBPNHMKOJKB;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_88,
                           Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_MoveNext__
                          );
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_88,
                     Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_Dispose__);
          return;
        }
        if (local_88.fields._current == (Il2CppObject *)0x0) break;
        if (NDOMOKBINFD == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *ppSVar1 = local_88.fields._current[5].monitor;
        thunk_FUN_01c20e04(ppSVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

