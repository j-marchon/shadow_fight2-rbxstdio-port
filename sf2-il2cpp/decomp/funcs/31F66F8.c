// NLPJLHOEAOE$$ICKMHABALIC @ RVA 0x31F66F8

MEJIKMPNBNL_o * NLPJLHOEAOE__ICKMHABALIC(MethodInfo *method)

{
  bool bVar1;
  NLPJLHOEAOE_c *pNVar2;
  NLPJLHOEAOE_o *pNVar3;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar4;
  MEJIKMPNBNL_o *pMVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566dcb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dcb = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pNVar2 = NLPJLHOEAOE_TypeInfo;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
  }
  pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)pNVar2);
  if ((pNVar3 == (NLPJLHOEAOE_o *)0x0) ||
     (pSVar4 = (pNVar3->fields).LBGLAKOLFAC,
     pSVar4 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0)) {
LAB_032f68f4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__)
      ;
      pNVar2 = NLPJLHOEAOE_TypeInfo;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
      }
      pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)pNVar2);
      if ((pNVar3 == (NLPJLHOEAOE_o *)0x0) ||
         (pSVar4 = (pNVar3->fields).JFANFALIFFE,
         pSVar4 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0)) goto LAB_032f68f4;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      goto LAB_032f682c;
    }
    if ((MEJIKMPNBNL_o *)local_60.fields._current == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar5 = (MEJIKMPNBNL_o *)local_60.fields._current;
  } while (((MEJIKMPNBNL_Fields *)((long)local_60.fields._current + 0x10))->OHOEDCBKNGO == false);
  goto LAB_032f68c0;
  while( true ) {
    if ((MEJIKMPNBNL_o *)local_60.fields._current == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar5 = (MEJIKMPNBNL_o *)local_60.fields._current;
    if (((MEJIKMPNBNL_Fields *)((long)local_60.fields._current + 0x10))->OHOEDCBKNGO != false)
    break;
LAB_032f682c:
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__)
      ;
      pNVar2 = NLPJLHOEAOE_TypeInfo;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
      }
      pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)pNVar2);
      if ((pNVar3 == (NLPJLHOEAOE_o *)0x0) ||
         (pSVar4 = (pNVar3->fields).NFJPOJNCKIM,
         pSVar4 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0)) goto LAB_032f68f4;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      goto LAB_032f6898;
    }
  }
  goto LAB_032f68c0;
  while( true ) {
    if ((MEJIKMPNBNL_o *)local_60.fields._current == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar5 = (MEJIKMPNBNL_o *)local_60.fields._current;
    if (((MEJIKMPNBNL_Fields *)((long)local_60.fields._current + 0x10))->OHOEDCBKNGO != false)
    break;
LAB_032f6898:
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    if (!bVar1) {
      pMVar5 = (MEJIKMPNBNL_o *)0x0;
      break;
    }
  }
LAB_032f68c0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
  return pMVar5;
}

