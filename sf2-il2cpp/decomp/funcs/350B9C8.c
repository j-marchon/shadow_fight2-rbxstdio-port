// KBCOFHAJOCK$$CBEELEAJKIN @ RVA 0x350B9C8

PLCCJCFAFKA_o *
KBCOFHAJOCK__CBEELEAJKIN(KBCOFHAJOCK_o *__this,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  LGABIPDBOEP_o *pLVar2;
  PLCCJCFAFKA_o *pPVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045688cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
    DAT_045688cd = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJJILEMLFOI;
  if (__this_00 == (System_Collections_Generic_List_PLCCJCFAFKA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    pPVar3 = (PLCCJCFAFKA_o *)local_48.fields._current;
    if (!bVar1) {
      pPVar3 = (PLCCJCFAFKA_o *)0x0;
      break;
    }
    if ((PLCCJCFAFKA_o *)local_48.fields._current == (PLCCJCFAFKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar2 = PLCCJCFAFKA__COMOKILJDGJ
                       ((PLCCJCFAFKA_o *)local_48.fields._current,CNIELFLIKJB,(MethodInfo *)0x0);
  } while (pLVar2 == (LGABIPDBOEP_o *)0x0);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
  return pPVar3;
}

