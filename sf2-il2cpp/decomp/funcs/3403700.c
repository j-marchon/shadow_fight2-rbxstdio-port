// MGNPHCAAEIO.HLAKGGFFNAO$$BHJOLIJDBLO @ RVA 0x3403700

HBNENINHPGF_o *
MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
          (MGNPHCAAEIO_HLAKGGFFNAO_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  HBNENINHPGF_o *pHVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568074 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    DAT_04568074 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIELINNGEBJ;
  if (__this_00 == (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    pHVar2 = (HBNENINHPGF_o *)local_48.fields._current;
    if (!bVar1) {
      pHVar2 = (HBNENINHPGF_o *)0x0;
      break;
    }
    if ((HBNENINHPGF_o *)local_48.fields._current == (HBNENINHPGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((HBNENINHPGF_Fields *)((long)local_48.fields._current + 0x10))->
                       _COIPKAKHDFP_k__BackingField,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
  return pHVar2;
}

