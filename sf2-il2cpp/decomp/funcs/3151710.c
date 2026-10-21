// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$get_Prices @ RVA 0x3151710

System_Collections_Generic_List_int__o *
Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_Prices
          (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t item;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_01;
  MethodInfo *extraout_x1;
  System_Int32_array *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456680d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_0456680d = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  __this_01 = (__this->fields).MIOLFPIJMDH;
  if (__this_01 == (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__
                      );
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
      return __this_00;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_50.fields._current[3].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                       ((long)local_50.fields._current[3].monitor + 0x18),(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<int>_Add__;
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) break;
    pSVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar4 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar4->m_Items[(int)uVar1] = item;
    }
    else {
      System_Collections_Generic_List<int>__AddWithResize
                (__this_00,item,
                 *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

