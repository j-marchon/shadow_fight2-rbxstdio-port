// PNLFHHJGDLI$$KHLBONNDFGB @ RVA 0x3326B94

void PNLFHHJGDLI__KHLBONNDFGB(MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined8 local_38;
  
  if ((DAT_04567889 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__
                );
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567889 = 1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
    System_Collections_Generic_List<KeyValuePair<object,_uint>>__GetEnumerator
              (&local_50,(System_Collections_Generic_List_T__o *)pSVar3,
               Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__);
    while (bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                             ), bVar2) {
      iVar1 = (int32_t)local_38;
      method_00 = extraout_x1;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      PNLFHHJGDLI__CMELEMCIOPP(iVar1,method_00);
    }
    System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
              );
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
    if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

