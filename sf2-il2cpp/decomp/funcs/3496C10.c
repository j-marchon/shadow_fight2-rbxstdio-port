// NGKBNOEJLPH$$NCPDMGFHHLE @ RVA 0x3496C10

bool NGKBNOEJLPH__NCPDMGFHHLE(NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456844e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456844e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045684c2 == '\0') {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_045684c2 = '\x01';
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = OCMLPCKBHPN_TypeInfo->static_fields->KCJPALKCAJK;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03596d30;
    }
    if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = ECENNHNBAME__CBJGGDFAACP
                      (NLEBDPHNIDI,(System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_03596d30:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return bVar1 && iVar3 == 4;
}

