// NLPJLHOEAOE$$PGDMIFLKLJE @ RVA 0x32080E0

System_String_o *
NLPJLHOEAOE__PGDMIFLKLJE(NLPJLHOEAOE_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_KeyValuePair_string__COALAGILPBO___o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined8 local_38;
  
  if ((DAT_04566e43 & 1) == 0) {
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
    FUN_01bab630(&StringLiteral_5045);
    DAT_04566e43 = 1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MECGFIGECAD;
  if (__this_00 != (System_Collections_Generic_List_KeyValuePair_string__COALAGILPBO___o *)0x0) {
    System_Collections_Generic_List<KeyValuePair<object,_Int32Enum>>__GetEnumerator
              (&local_50,(System_Collections_Generic_List_T__o *)__this_00,
               Method_System_Collections_Generic_List<KeyValuePair<string,_COALAGILPBO>>_GetEnumerator__
              );
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_Int32Enum>>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_COALAGILPBO>>_MoveNext__
                        );
      pIVar1 = local_50.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<KeyValuePair<object,_Int32Enum>>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_COALAGILPBO>>_Dispose__
                  );
        return StringLiteral_5045;
      }
    } while ((int)local_38 != ACCIHBHMFPN);
    System_Collections_Generic_List_Enumerator<KeyValuePair<object,_Int32Enum>>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_COALAGILPBO>>_Dispose__
              );
    return (System_String_o *)pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

