// OPNFCOGALLI$$FGNGCBDEBDN @ RVA 0x310AB80

void OPNFCOGALLI__FGNGCBDEBDN
               (OPNFCOGALLI_o *__this,System_Collections_Generic_List_string__o *OKAINPMIKKD,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566533 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04566533 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (OKAINPMIKKD != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)OKAINPMIKKD,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          bVar1) {
      OPNFCOGALLI__GNAKNCBOLOI(__this,(System_String_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

