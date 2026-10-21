// IHEKBNOFOKD$$BENDMCOBOKL @ RVA 0x35CBD44

void IHEKBNOFOKD__BENDMCOBOKL
               (System_String_o *DIHAKADKIKM,System_Func_string__o *OLCNFFOMADA,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar2;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_string__Func_string___array *pSVar3;
  System_Collections_Generic_List_KeyValuePair_string__Func_string____o *__this;
  System_Collections_Generic_KeyValuePair_object__object__o __this_00;
  Il2CppObject local_40;
  
  if ((DAT_04568fa1 & 1) == 0) {
    FUN_01bab630(&IHEKBNOFOKD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Func<string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_Add__);
    DAT_04568fa1 = 1;
  }
  if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = IHEKBNOFOKD_TypeInfo->static_fields->FIDOJDOEFIH;
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (System_Func_string__o *)0x0;
  __this_00.fields.value = (Il2CppObject *)DIHAKADKIKM;
  __this_00.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_object>___ctor
            (__this_00,(Il2CppObject *)OLCNFFOMADA,
             Method_System_Collections_Generic_KeyValuePair<string,_Func<string>>__ctor__,in_x4);
  lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_Add__;
  if (__this != (System_Collections_Generic_List_KeyValuePair_string__Func_string____o *)0x0) {
    item.fields.value = local_40.monitor;
    item.fields.key = (Il2CppObject *)local_40.klass;
    pSVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar3 != (System_Collections_Generic_KeyValuePair_string__Func_string___array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1].fields.key = (System_String_o *)local_40.klass;
        pSVar3->m_Items[(int)uVar1].fields.value = local_40.monitor;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,0);
      }
      else {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this,item,
                   *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

