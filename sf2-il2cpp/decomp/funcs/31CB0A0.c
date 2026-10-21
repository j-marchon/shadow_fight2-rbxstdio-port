// BPOJGPCCMPD$$ENPENMIBNFK @ RVA 0x31CB0A0

System_Collections_Generic_List_HOOAAGABMBL__o * BPOJGPCCMPD__ENPENMIBNFK(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  ulong uVar4;
  ACHLOMELAJE_o *__this_01;
  DOPEEDABNEK_o *pDVar5;
  HOOAAGABMBL_array *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566c6b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566c6b = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO_TypeInfo->static_fields->BIJJALJHKCD = true;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar5 == (DOPEEDABNEK_o *)0x0) ||
     (__this_00 = (pDVar5->fields)._BDIDINACBBH_k__BackingField,
     __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
LAB_032cb25c:
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    item = local_70.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return __this;
    }
    if ((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar4 = (*(((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable)._5_EFLKILFFJKH.
              methodPtr)(local_70.fields._current,
                         (((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable).
                         _5_EFLKILFFJKH.method);
  } while ((uVar4 & 1) != 0);
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                    (((HOOAAGABMBL_Fields *)((long)item + 0x10))->_ILMMODKJGFK_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar3) goto code_r0x032cb298;
  goto LAB_032cb2ec;
code_r0x032cb298:
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = ACHLOMELAJE__MHLDNEBLNJG
                    (__this_01,
                     ((HOOAAGABMBL_Fields *)((long)item + 0x10))->_ILMMODKJGFK_k__BackingField,
                     (MethodInfo *)0x0);
  if (bVar3) {
LAB_032cb2ec:
    lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
    if (__this == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar6 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pHVar6 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pHVar6->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
      thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_032cb25c;
}

