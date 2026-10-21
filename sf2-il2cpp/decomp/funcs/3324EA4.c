// PNLFHHJGDLI$$DHPLNPMCBCA @ RVA 0x3324EA4

void PNLFHHJGDLI__DHPLNPMCBCA
               (System_Collections_Generic_List_string__o *NFIPEKECAFG,MethodInfo *method)

{
  Il2CppObject *BNCJPLDMJMH;
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = NFIPEKECAFG;
  if ((DAT_0456786d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    auVar2 = FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456786d = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (NFIPEKECAFG != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)NFIPEKECAFG,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          BNCJPLDMJMH = local_48.fields._current, bVar1) {
      method_00 = extraout_x1;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      PNLFHHJGDLI__PPMOLPPCNFC((System_String_o *)BNCJPLDMJMH,method_00);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

