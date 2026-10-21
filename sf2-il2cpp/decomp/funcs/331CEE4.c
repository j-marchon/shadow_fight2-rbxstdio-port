// EHCCNKFIPPA$$NBJIHGJNPGI @ RVA 0x331CEE4

PHDCILJMEHO_o *
EHCCNKFIPPA__NBJIHGJNPGI(EHCCNKFIPPA_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_00;
  PHDCILJMEHO_o *pPVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567824 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    DAT_04567824 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    if (!bVar1) {
      pPVar2 = (PHDCILJMEHO_o *)0x0;
      break;
    }
    if ((PHDCILJMEHO_o *)local_48.fields._current == (PHDCILJMEHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar2 = (PHDCILJMEHO_o *)local_48.fields._current;
  } while (((PHDCILJMEHO_Fields *)((long)local_48.fields._current + 0x10))->MLPFFJNBKBN !=
           EIKFGOCCOIE);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
  return pPVar2;
}

