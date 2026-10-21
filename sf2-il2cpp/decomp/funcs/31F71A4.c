// NLPJLHOEAOE$$JODLEMOLLDO @ RVA 0x31F71A4

NLPJLHOEAOE_EANNNIEHPHH_o *
NLPJLHOEAOE__JODLEMOLLDO(NLPJLHOEAOE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_NLPJLHOEAOE_EANNNIEHPHH__o *__this_00;
  NLPJLHOEAOE_EANNNIEHPHH_o *pNVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566dce & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_EANNNIEHPHH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_EANNNIEHPHH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_EANNNIEHPHH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NLPJLHOEAOE_EANNNIEHPHH>_GetEnumerator__);
    DAT_04566dce = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OFNOKDOEEAF;
  if (__this_00 == (System_Collections_Generic_List_NLPJLHOEAOE_EANNNIEHPHH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NLPJLHOEAOE_EANNNIEHPHH>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_EANNNIEHPHH>_MoveNext__
                      );
    pNVar2 = (NLPJLHOEAOE_EANNNIEHPHH_o *)local_48.fields._current;
    if (!bVar1) {
      pNVar2 = (NLPJLHOEAOE_EANNNIEHPHH_o *)0x0;
      break;
    }
    if ((NLPJLHOEAOE_EANNNIEHPHH_o *)local_48.fields._current == (NLPJLHOEAOE_EANNNIEHPHH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((NLPJLHOEAOE_EANNNIEHPHH_Fields *)((long)local_48.fields._current + 0x10))->
                       KGLJICLJHEL,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_EANNNIEHPHH>_Dispose__);
  return pNVar2;
}

