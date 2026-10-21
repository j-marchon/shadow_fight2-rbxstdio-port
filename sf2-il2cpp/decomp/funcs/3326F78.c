// PNLFHHJGDLI$$KIFAFGCJCEJ @ RVA 0x3326F78

void PNLFHHJGDLI__KIFAFGCJCEJ(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_object__uint__o item;
  bool bVar1;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  undefined8 uStack_48;
  
  if ((DAT_04567893 & 1) == 0) {
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
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Remove__);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567893 = 1;
    method = extraout_x1;
  }
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_48 = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  pSVar2 = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (pSVar2 == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_uint>>__GetEnumerator
            (&local_60,(System_Collections_Generic_List_T__o *)pSVar2,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_MoveNext__
                      );
    if (!bVar1) goto LAB_034270ac;
    item.fields._8_8_ = uStack_48;
    item.fields.key = local_60.fields._current;
    bVar1 = System_String__op_Equality
                      ((System_String_o *)local_60.fields._current,AAIHDEKMIJG,(MethodInfo *)0x0);
  } while (!bVar1);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = PNLFHHJGDLI_TypeInfo->static_fields->CMDACPPJJEF;
  if (pSVar2 == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_uint>>__Remove
            ((System_Collections_Generic_List_T__o *)pSVar2,item,
             Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Remove__);
LAB_034270ac:
  System_Collections_Generic_List_Enumerator<KeyValuePair<object,_uint>>__Dispose
            (&local_60,
             Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_uint>>_Dispose__
            );
  return;
}

