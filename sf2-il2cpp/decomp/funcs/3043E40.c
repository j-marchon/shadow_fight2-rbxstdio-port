// PJKHAJKEHEL$$HCCKONOABKP @ RVA 0x3043E40

float PJKHAJKEHEL__HCCKONOABKP
                (PJKHAJKEHEL_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
                MethodInfo *method)

{
  bool bVar1;
  FPLCEOJCPOD_o *__this_00;
  float fVar2;
  int32_t local_5c;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04565dc0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10130);
    DAT_04565dc0 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  local_5c = 0;
  if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  fVar2 = -3.4028235e+38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_58,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      if (fVar2 == -3.4028235e+38) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_10130,(MethodInfo *)0x0);
      }
      return fVar2;
    }
    local_5c = 0;
    __this_00 = (__this->fields).ACHJNNOKEDK;
    if (__this_00 == (FPLCEOJCPOD_o *)0x0) break;
    bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                      (__this_00,(System_String_o *)local_58.fields._current,&local_5c,true,false,
                       (MethodInfo *)0x0);
    if ((bVar1) && (fVar2 < (float)local_5c)) {
      fVar2 = (float)local_5c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

