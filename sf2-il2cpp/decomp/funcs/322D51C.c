// DEKKGJNMFEB$$LDGJEEGACHJ @ RVA 0x322D51C

GGLKHCAIGDI_o *
DEKKGJNMFEB__LDGJEEGACHJ(DEKKGJNMFEB_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  GGLKHCAIGDI_o *pGVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566fbf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    DAT_04566fbf = 1;
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
    pGVar2 = (GGLKHCAIGDI_o *)local_48.fields._current;
    if (!bVar1) {
      pGVar2 = (GGLKHCAIGDI_o *)0x0;
      break;
    }
    if ((GGLKHCAIGDI_o *)local_48.fields._current == (GGLKHCAIGDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((GGLKHCAIGDI_Fields *)((long)local_48.fields._current + 0x10))->
                       _COIPKAKHDFP_k__BackingField,AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
  return pGVar2;
}

