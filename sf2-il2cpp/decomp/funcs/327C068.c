// OCMLPCKBHPN$$EBEHJAAILFL @ RVA 0x327C068

void OCMLPCKBHPN__EBEHJAAILFL
               (System_String_o *CNPLLCACLNO,System_Collections_Generic_List_string__o *KAJKLJBHCOJ,
               MethodInfo *method)

{
  Il2CppObject *AGCCAIHMFHC;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456725f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456725f = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (KAJKLJBHCOJ != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)KAJKLJBHCOJ,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          AGCCAIHMFHC = local_48.fields._current, bVar1) {
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCMLPCKBHPN__EBEHJAAILFL(CNPLLCACLNO,(System_String_o *)AGCCAIHMFHC,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

