// MMDDDDFHOLG$$BMJDNNBOAFL @ RVA 0x3361390

void MMDDDDFHOLG__BMJDNNBOAFL
               (MMDDDDFHOLG_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *DDOAJGPFCNB,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)DDOAJGPFCNB;
  if ((DAT_04567a86 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04567a86 = 1;
    method_00 = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  MMDDDDFHOLG__MOJEFCADBCO(__this,method_00);
  if (DDOAJGPFCNB != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)DDOAJGPFCNB,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                             ), bVar1) {
      MMDDDDFHOLG__OCJCMHLABBF(__this,(OLKKAIFGGAK_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

