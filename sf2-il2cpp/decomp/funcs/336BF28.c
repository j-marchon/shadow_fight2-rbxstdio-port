// IEHDDOIHPNI$$EIJGGJGKJBF @ RVA 0x336BF28

System_Collections_Generic_List_HOOAAGABMBL__o * IEHDDOIHPNI__EIJGGJGKJBF(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *item;
  bool bVar2;
  int64_t iVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  long lVar5;
  HOOAAGABMBL_array *pHVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567af3 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567af3 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar7 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  iVar3 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IEHDDOIHPNI_TypeInfo);
  }
  pSVar4 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
  if (pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  pSVar4 = (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      item = local_70.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        return pSVar4;
      }
      if ((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar5 = (*(((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable)._6_PDECHBMCBDB.
                methodPtr)(local_70.fields._current,0,
                           (((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable).
                           _6_PDECHBMCBDB.method);
    } while ((lVar5 == 0) || (iVar3 + lVar7 < *(long *)(lVar5 + 0x70) + -600));
    if (pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      pSVar4 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
      if (pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    lVar5 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
    pHVar6 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pHVar6 == (HOOAAGABMBL_array *)0x0) break;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pHVar6->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
      thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

