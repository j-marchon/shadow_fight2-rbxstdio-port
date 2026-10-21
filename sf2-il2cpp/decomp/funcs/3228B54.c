// PLCCJCFAFKA$$COMOKILJDGJ @ RVA 0x3228B54

LGABIPDBOEP_o *
PLCCJCFAFKA__COMOKILJDGJ(PLCCJCFAFKA_o *__this,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LGABIPDBOEP__o *__this_00;
  System_String_o *__this_01;
  LGABIPDBOEP_o *pLVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566f88 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGABIPDBOEP>_GetEnumerator__);
    DAT_04566f88 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).GFBNJPMOEKD;
  if (__this_00 == (System_Collections_Generic_List_LGABIPDBOEP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LGABIPDBOEP>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_MoveNext__);
    pLVar2 = (LGABIPDBOEP_o *)local_48.fields._current;
    if (!bVar1) {
      pLVar2 = (LGABIPDBOEP_o *)0x0;
      break;
    }
    if ((LGABIPDBOEP_o *)local_48.fields._current == (LGABIPDBOEP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = ((LGABIPDBOEP_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK;
    if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals(__this_01,CNIELFLIKJB,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_Dispose__);
  return pLVar2;
}

