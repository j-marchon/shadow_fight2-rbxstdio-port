// MGNPHCAAEIO.FGHBAEIKNBF$$HALKOOLIBED @ RVA 0x3410BF8

KFGGMKHNCGM_o *
MGNPHCAAEIO_FGHBAEIKNBF__HALKOOLIBED
          (MGNPHCAAEIO_FGHBAEIKNBF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_00;
  KFGGMKHNCGM_o *pKVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456808d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_GetEnumerator__);
    DAT_0456808d = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BJGBOCFLEGO;
  if (__this_00 == (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KFGGMKHNCGM>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_MoveNext__);
    pKVar2 = (KFGGMKHNCGM_o *)local_48.fields._current;
    if (!bVar1) {
      pKVar2 = (KFGGMKHNCGM_o *)0x0;
      break;
    }
    if ((KFGGMKHNCGM_o *)local_48.fields._current == (KFGGMKHNCGM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((KFGGMKHNCGM_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK,
                       KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_Dispose__);
  return pKVar2;
}

