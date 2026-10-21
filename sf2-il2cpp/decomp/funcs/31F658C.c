// NLPJLHOEAOE$$JCFMJBBOPMH @ RVA 0x31F658C

int32_t NLPJLHOEAOE__JCFMJBBOPMH
                  (NLPJLHOEAOE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KeyValuePair_string__COALAGILPBO___o *__this_00;
  int32_t iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined8 uStack_38;
  
  if ((DAT_04566dd5 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_COALAGILPBO>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_COALAGILPBO>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_COALAGILPBO>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_COALAGILPBO>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_COALAGILPBO>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_COALAGILPBO>>_GetEnumerator__
                );
    DAT_04566dd5 = 1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MECGFIGECAD;
  if (__this_00 == (System_Collections_Generic_List_KeyValuePair_string__COALAGILPBO___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_Int32Enum>>__GetEnumerator
            (&local_50,(System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<string,_COALAGILPBO>>_GetEnumerator__
            );
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_Int32Enum>>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_COALAGILPBO>>_MoveNext__
                      );
    if (!bVar1) {
      iVar2 = 0;
      break;
    }
    iVar2 = (int32_t)uStack_38;
    bVar1 = System_String__op_Equality
                      ((System_String_o *)local_50.fields._current,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<KeyValuePair<object,_Int32Enum>>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_COALAGILPBO>>_Dispose__
            );
  return iVar2;
}

