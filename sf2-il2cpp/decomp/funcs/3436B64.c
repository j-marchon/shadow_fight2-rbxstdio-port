// Nekki.SF2.GUI.Shop.ShopScene$$KOPEODKDDDF @ RVA 0x3436B64

System_Collections_Generic_List_HOOAAGABMBL__o *
Nekki_SF2_GUI_Shop_ShopScene__KOPEODKDDDF(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  ulong uVar4;
  MethodInfo *extraout_x1;
  DOPEEDABNEK_o *pDVar5;
  HOOAAGABMBL_array *pHVar6;
  ACHLOMELAJE_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045681a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045681a9 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
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
  __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar5 == (DOPEEDABNEK_o *)0x0) ||
     (__this_01 = (pDVar5->fields)._BDIDINACBBH_k__BackingField,
     __this_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
LAB_03536d20:
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    item = local_60.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return __this_00;
    }
    if ((HOOAAGABMBL_o *)local_60.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar4 = (*(((HOOAAGABMBL_c *)(local_60.fields._current)->klass)->vtable)._5_EFLKILFFJKH.
              methodPtr)(local_60.fields._current,
                         (((HOOAAGABMBL_c *)(local_60.fields._current)->klass)->vtable).
                         _5_EFLKILFFJKH.method);
  } while ((uVar4 & 1) != 0);
                    /* try { // try from 03536d54 to 03636d7b has its CatchHandler @ 035371a4 */
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                    (((HOOAAGABMBL_Fields *)((long)item + 0x10))->_ILMMODKJGFK_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar3) goto code_r0x03536d5c;
  goto LAB_03536d74;
code_r0x03536d5c:
  if (__this_02 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = ACHLOMELAJE__MHLDNEBLNJG
                    (__this_02,
                     ((HOOAAGABMBL_Fields *)((long)item + 0x10))->_ILMMODKJGFK_k__BackingField,
                     (MethodInfo *)0x0);
  if (bVar3) {
LAB_03536d74:
    lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar6 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar6->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
                    /* try { // try from 03536db0 to 03636ddb has its CatchHandler @ 035371a0 */
      thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_03536d20;
}

