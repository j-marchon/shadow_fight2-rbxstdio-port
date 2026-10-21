// NLPJLHOEAOE$$CCAEFPKPPIO @ RVA 0x31F75F4

void NLPJLHOEAOE__CCAEFPKPPIO(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566e24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    DAT_04566e24 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).LBGLAKOLFAC;
  if (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar1) {
      if ((MEJIKMPNBNL_o *)local_60.fields._current == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      MEJIKMPNBNL__FDFHMHPOHKA((MEJIKMPNBNL_o *)local_60.fields._current,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    pSVar2 = (__this->fields).JFANFALIFFE;
    if (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                               ), bVar1) {
        if ((MEJIKMPNBNL_o *)local_60.fields._current == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        MEJIKMPNBNL__FDFHMHPOHKA((MEJIKMPNBNL_o *)local_60.fields._current,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__)
      ;
      pSVar2 = (__this->fields).NFJPOJNCKIM;
      if (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
                   Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                            );
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
            return;
          }
          if ((MEJIKMPNBNL_o *)local_60.fields._current == (MEJIKMPNBNL_o *)0x0) break;
          MEJIKMPNBNL__FDFHMHPOHKA((MEJIKMPNBNL_o *)local_60.fields._current,(MethodInfo *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

