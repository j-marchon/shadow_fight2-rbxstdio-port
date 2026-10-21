// PNLFHHJGDLI$$CMELEMCIOPP @ RVA 0x3326D60

void PNLFHHJGDLI__CMELEMCIOPP(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar2;
  System_Collections_Generic_KeyValuePair_string__uint__o SVar3;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined8 uStack_38;
  
  if ((DAT_0456788b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__
                );
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456788b = 1;
    method = extraout_x1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  SVar3 = PNLFHHJGDLI__BKDNCPEANFN(AAIHDEKMIJG,method);
  bVar1 = System_String__op_Inequality(SVar3.fields.key,StringLiteral_1,(MethodInfo *)0x0);
  pMVar2 = extraout_x1_01;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
    pMVar2 = extraout_x1_02;
  }
  if (bVar1) {
    PNLFHHJGDLI__KIFAFGCJCEJ(AAIHDEKMIJG,pMVar2);
    PNLFHHJGDLI__CMELEMCIOPP(SVar3.fields.value,method_00);
  }
  else {
    __this = PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
    if (__this == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<KeyValuePair<object,_uint>>__GetEnumerator
              (&local_50,(System_Collections_Generic_List_T__o *)__this,
               Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                             ), bVar1) {
      bVar1 = System_String__op_Equality(SVar3.fields.key,AAIHDEKMIJG,(MethodInfo *)0x0);
      if (bVar1) {
        pMVar2 = extraout_x1_03;
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar2 = extraout_x1_04;
        }
        PNLFHHJGDLI__CMELEMCIOPP(SVar3.fields.value,pMVar2);
      }
    }
    System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
              );
  }
  return;
}

