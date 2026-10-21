// OCMLPCKBHPN$$HMBNHEFIECG @ RVA 0x327C510

CAAJMGKIPIE_o * OCMLPCKBHPN__HMBNHEFIECG(System_String_o *HODNAIPOKHA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_CAAJMGKIPIE__o *__this;
  MethodInfo *extraout_x1;
  CAAJMGKIPIE_o *pCVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567263 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CAAJMGKIPIE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CAAJMGKIPIE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CAAJMGKIPIE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CAAJMGKIPIE>_GetEnumerator__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04567263 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
  }
  __this = OCMLPCKBHPN_TypeInfo->static_fields->EADAGMIKLJN;
  if (__this == (System_Collections_Generic_List_CAAJMGKIPIE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<CAAJMGKIPIE>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<CAAJMGKIPIE>_MoveNext__);
    pCVar2 = (CAAJMGKIPIE_o *)local_48.fields._current;
    if (!bVar1) {
      pCVar2 = (CAAJMGKIPIE_o *)0x0;
      break;
    }
    if ((CAAJMGKIPIE_o *)local_48.fields._current == (CAAJMGKIPIE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((CAAJMGKIPIE_Fields *)((long)local_48.fields._current + 0x10))->DEKCPPOJFEH,
                       HODNAIPOKHA,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<CAAJMGKIPIE>_Dispose__);
  return pCVar2;
}

