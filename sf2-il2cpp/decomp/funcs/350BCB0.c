// KBCOFHAJOCK$$DOGHKAHOCJI @ RVA 0x350BCB0

PLCCJCFAFKA_o * KBCOFHAJOCK__DOGHKAHOCJI(KBCOFHAJOCK_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  MethodInfo *extraout_x1;
  PLCCJCFAFKA_o *pPVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045688cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
    DAT_045688cf = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJJILEMLFOI;
  if (__this_00 == (System_Collections_Generic_List_PLCCJCFAFKA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    pPVar2 = (PLCCJCFAFKA_o *)local_38.fields._current;
    if (!bVar1) {
      pPVar2 = (PLCCJCFAFKA_o *)0x0;
      break;
    }
    if ((PLCCJCFAFKA_o *)local_38.fields._current == (PLCCJCFAFKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = PLCCJCFAFKA__LDKFOHPNENK((PLCCJCFAFKA_o *)local_38.fields._current,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
  return pPVar2;
}

