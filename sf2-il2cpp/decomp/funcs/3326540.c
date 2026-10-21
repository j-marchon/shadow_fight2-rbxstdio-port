// PNLFHHJGDLI$$BKDNCPEANFN @ RVA 0x3326540

System_Collections_Generic_KeyValuePair_string__uint__o
PNLFHHJGDLI__BKDNCPEANFN(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__uint__Fields SVar1;
  Il2CppObject *pIVar2;
  void *pvVar3;
  bool bVar4;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *__this;
  MethodInfo_263A6EC *in_x4;
  System_Collections_Generic_KeyValuePair_object__uint__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  void *pvStack_48;
  Il2CppObject local_40;
  
  if ((DAT_04567881 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__
                );
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567881 = 1;
  }
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (void *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pvStack_48 = (void *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00.fields._8_8_ = StringLiteral_1;
  __this_00.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_uint>___ctor
            (__this_00,(Il2CppObject *)0x0,
             (uint32_t)Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__,in_x4);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (__this == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_uint>>__GetEnumerator
            (&local_60,(System_Collections_Generic_List_T__o *)__this,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__);
  do {
    bVar4 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                      );
    pvVar3 = pvStack_48;
    pIVar2 = local_60.fields._current;
    if (!bVar4) goto LAB_03426670;
    bVar4 = System_String__op_Equality
                      ((System_String_o *)local_60.fields._current,AAIHDEKMIJG,(MethodInfo *)0x0);
  } while (!bVar4);
  local_40.klass = (Il2CppClass *)pIVar2;
  local_40.monitor = pvVar3;
LAB_03426670:
  System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__Dispose
            (&local_60,
             Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
            );
  SVar1._8_8_ = local_40.monitor;
  SVar1.key = (System_String_o *)local_40.klass;
  return (System_Collections_Generic_KeyValuePair_string__uint__o)SVar1;
}

