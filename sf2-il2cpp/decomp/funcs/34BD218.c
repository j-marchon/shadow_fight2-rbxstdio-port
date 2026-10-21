// KAHMAJKJMBK$$GMFBLDENDIM @ RVA 0x34BD218

void KAHMAJKJMBK__GMFBLDENDIM
               (KAHMAJKJMBK_o *__this,System_Collections_Generic_List_CNIGOFCKBGI__o *FAAMECCDGJM,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045685f8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    DAT_045685f8 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (FAAMECCDGJM != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)FAAMECCDGJM,
               Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__
                             ), bVar1) {
      KAHMAJKJMBK__JDMMBLAGLKD(__this,(CNIGOFCKBGI_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

