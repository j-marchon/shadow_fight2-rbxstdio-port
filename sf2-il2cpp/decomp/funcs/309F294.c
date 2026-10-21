// FOKJBDHLIMG$$JMMDGEOBMOC @ RVA 0x309F294

HEFOANCOHDC_o *
FOKJBDHLIMG__JMMDGEOBMOC(FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_String_o *__this_01;
  HEFOANCOHDC_o *pHVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566137 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_04566137 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).FLADBMFBNIH;
  if (__this_00 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    pHVar2 = (HEFOANCOHDC_o *)local_48.fields._current;
    if (!bVar1) {
      pHVar2 = (HEFOANCOHDC_o *)0x0;
      break;
    }
    if ((HEFOANCOHDC_o *)local_48.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = ((HEFOANCOHDC_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK;
    if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals(__this_01,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
  return pHVar2;
}

