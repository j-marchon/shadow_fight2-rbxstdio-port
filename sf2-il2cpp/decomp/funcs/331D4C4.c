// EHCCNKFIPPA$$ACHDDKJACPF @ RVA 0x331D4C4

void EHCCNKFIPPA__ACHDDKJACPF
               (EHCCNKFIPPA_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,bool CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567826 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    DAT_04567826 = 1;
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
    if (!bVar1) goto LAB_0341d584;
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (local_48.fields._current[1].klass != (Il2CppClass *)EIKFGOCCOIE);
  *(bool *)&local_48.fields._current[1].monitor = CJNHFNHJHPE;
LAB_0341d584:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
  return;
}

