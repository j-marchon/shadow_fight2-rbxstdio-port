// DEKKGJNMFEB$$IPLAABHAGFM @ RVA 0x322D844

bool DEKKGJNMFEB__IPLAABHAGFM(DEKKGJNMFEB_o *__this,System_String_o *DAFCPNPODFD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566fbc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    DAT_04566fbc = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OKIANCELJJF;
  if (__this_00 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_0332d90c;
    }
    if ((GGLKHCAIGDI_o *)local_48.fields._current == (GGLKHCAIGDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = GGLKHCAIGDI__FCBPFKMMBJD
                      ((GGLKHCAIGDI_o *)local_48.fields._current,DAFCPNPODFD,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_0332d90c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
  return bVar1 && iVar3 == 4;
}

