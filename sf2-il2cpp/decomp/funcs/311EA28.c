// KJBGNIGNECD$$LNGFDKLLGCL @ RVA 0x311EA28

KJBGNIGNECD_AHICALNEICM_o *
KJBGNIGNECD__LNGFDKLLGCL(KJBGNIGNECD_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *__this_00;
  KJBGNIGNECD_AHICALNEICM_o *pKVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566612 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJBGNIGNECD_AHICALNEICM>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJBGNIGNECD_AHICALNEICM>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJBGNIGNECD_AHICALNEICM>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_GetEnumerator__);
    DAT_04566612 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).GJBLBEALOBO;
  if (__this_00 == (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<KJBGNIGNECD_AHICALNEICM>_MoveNext__
                      );
    if (!bVar1) {
      pKVar2 = (KJBGNIGNECD_AHICALNEICM_o *)0x0;
      break;
    }
    if ((KJBGNIGNECD_AHICALNEICM_o *)local_48.fields._current == (KJBGNIGNECD_AHICALNEICM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pKVar2 = (KJBGNIGNECD_AHICALNEICM_o *)local_48.fields._current;
  } while (((KJBGNIGNECD_AHICALNEICM_Fields *)((long)local_48.fields._current + 0x10))->NOPGBJNLFHM
           != JLAFGLDIFOC);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<KJBGNIGNECD_AHICALNEICM>_Dispose__);
  return pKVar2;
}

