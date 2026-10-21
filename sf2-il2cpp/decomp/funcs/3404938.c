// MGNPHCAAEIO$$AMNHPJHAJAK @ RVA 0x3404938

void MGNPHCAAEIO__AMNHPJHAJAK(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_MNKGBNEMPCI__o *__this;
  IHDFIJGDCBL_o *__this_00;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_01;
  ABCMPMHNMAP_o *pAVar5;
  IHDFIJGDCBL_array *pIVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456800d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_get_Current__);
    FUN_01bab630(&IHDFIJGDCBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MNKGBNEMPCI>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456800d = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568076 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568076 = '\x01';
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = MGNPHCAAEIO_TypeInfo->static_fields->CGDCBPHBFDE;
  if (__this == (System_Collections_Generic_List_MNKGBNEMPCI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MNKGBNEMPCI>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_MoveNext__);
    pIVar3 = local_70.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<MNKGBNEMPCI>_Dispose__)
      ;
      return;
    }
    __this_00 = (IHDFIJGDCBL_o *)thunk_FUN_01bda818(IHDFIJGDCBL_TypeInfo);
    IHDFIJGDCBL___ctor(__this_00,(MethodInfo *)0x0);
    if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (__this_00 == (IHDFIJGDCBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this_00->fields).NPFMOEOIEKM = (System_String_o *)pIVar3[1].klass;
    thunk_FUN_01c20e04();
    (__this_00->fields).CHLMHEGKKNH = true;
    (__this_00->fields).OOBNCDKIDFK = true;
    (__this_00->fields).MLHNMNKFDLN = true;
    (__this_00->fields).GCPFHICEKFL = true;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<IHDFIJGDCBL>_Add__;
    pAVar5 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
    if (pAVar5 == (ABCMPMHNMAP_o *)0x0) break;
    __this_01 = (pAVar5->fields).ACHJNNOKEDK;
    if (__this_01 == (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar6 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pIVar6 == (IHDFIJGDCBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_01->fields)._size;
    if (uVar1 < (uint)pIVar6->max_length) {
      (__this_01->fields)._size = uVar1 + 1;
      pIVar6->m_Items[(int)uVar1] = __this_00;
      thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

