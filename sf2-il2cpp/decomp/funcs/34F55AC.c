// OLKKAIFGGAK$$BNLNHIPHKDG @ RVA 0x34F55AC

void OLKKAIFGGAK__BNLNHIPHKDG(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_01;
  OPNFCOGALLI_o *pOVar2;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045687d4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_GetEnumerator__);
    DAT_045687d4 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pOVar2 = (__this->fields).OAKOFJJIOFF;
  if ((pOVar2 != (OPNFCOGALLI_o *)0x0) &&
     (__this_00 = (__this->fields).HMIAFJALFCJ, __this_00 != (GBJGJEGPHKD_o *)0x0)) {
    __this_02 = (pOVar2->fields).HALIJPAEEBE;
    __this_01 = GBJGJEGPHKD__EKHACIPBPAP(__this_00,(MethodInfo *)0x0);
    if (__this_02 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<GEBHIBIEAJE>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_MoveNext__
                               ), bVar1) {
        if ((GEBHIBIEAJE_o *)local_60.fields._current == (GEBHIBIEAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GEBHIBIEAJE__DJHFPFGCIMH((GEBHIBIEAJE_o *)local_60.fields._current,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_Dispose__)
      ;
      if (__this_01 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<GEBHIBIEAJE>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_MoveNext__
                            );
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_Dispose__);
            return;
          }
          if ((GEBHIBIEAJE_o *)local_60.fields._current == (GEBHIBIEAJE_o *)0x0) break;
          GEBHIBIEAJE__DJHFPFGCIMH((GEBHIBIEAJE_o *)local_60.fields._current,(MethodInfo *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

