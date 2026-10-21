// DBGBHDDCAJC$$CMGOIFKPPPB @ RVA 0x31D94E4

void DBGBHDDCAJC__CMGOIFKPPPB(DBGBHDDCAJC_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566d04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04566d04 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  b = LLKDCCJMFLE__IDCJKHFCJKM((MethodInfo *)0x0);
  __this_00 = (__this->fields).KDIMDBHMBEM;
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
    if (!bVar1) goto LAB_032d95d0;
    bVar1 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current,b,(MethodInfo *)0x0);
  } while (!bVar1);
  DBGBHDDCAJC__NOEJODPMGEB(__this,method_00);
LAB_032d95d0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return;
}

