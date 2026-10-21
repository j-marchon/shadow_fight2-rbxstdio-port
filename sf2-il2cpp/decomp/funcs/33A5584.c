// GGLKHCAIGDI$$LNKIBCOEAPL @ RVA 0x33A5584

LGFLCMBIFCN_o *
GGLKHCAIGDI__LNKIBCOEAPL(GGLKHCAIGDI_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LGFLCMBIFCN__o *__this_00;
  LGFLCMBIFCN_o *pLVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567ceb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGFLCMBIFCN>_GetEnumerator__);
    DAT_04567ceb = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PJGPKMDGOIE;
  if (__this_00 == (System_Collections_Generic_List_LGFLCMBIFCN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LGFLCMBIFCN>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_MoveNext__);
    pLVar2 = (LGFLCMBIFCN_o *)local_48.fields._current;
    if (!bVar1) {
      pLVar2 = (LGFLCMBIFCN_o *)0x0;
      break;
    }
    if ((LGFLCMBIFCN_o *)local_48.fields._current == (LGFLCMBIFCN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((LGFLCMBIFCN_Fields *)((long)local_48.fields._current + 0x10))->
                       _COIPKAKHDFP_k__BackingField,AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_Dispose__);
  return pLVar2;
}

