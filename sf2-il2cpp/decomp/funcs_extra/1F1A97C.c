// NKOIBKNPICN$$OFABBFOGEAK<int> @ RVA 0x1F1A97C

/* WARNING: Removing unreachable block (ram,0x0201abe4) */

bool NKOIBKNPICN__OFABBFOGEAK<int>
               (System_Collections_Generic_List_T__o *PBDIPLHDHHD,
               System_Collections_Generic_List_T__o *PLANLFALEPE,MethodInfo_1F1A97C *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_bool__o *__this;
  Il2CppObject *obj;
  System_Boolean_array *pSVar4;
  int index;
  int32_t capacity;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  undefined1 local_60 [16];
  undefined8 local_50;
  int32_t local_34;
  
  if (method->rgctx_data == (MethodInfo_1F1A97C_RGCTXs *)0x0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<bool>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_List<bool>_TypeInfo);
    if (method->rgctx_data == (MethodInfo_1F1A97C_RGCTXs *)0x0) {
      FUN_01b8167c(method);
    }
  }
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_4_ = 0;
  local_60._12_4_ = 0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_34 = 0;
  if ((PLANLFALEPE != (System_Collections_Generic_List_T__o *)0x0) &&
     (PBDIPLHDHHD != (System_Collections_Generic_List_T__o *)0x0)) {
    capacity = (PBDIPLHDHHD->fields)._size;
    if (capacity < (PLANLFALEPE->fields)._size) {
      return false;
    }
    __this = (System_Collections_Generic_List_bool__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<bool>_TypeInfo);
    System_Collections_Generic_List<bool>___ctor
              (__this,capacity,Method_System_Collections_Generic_List<bool>__ctor__);
    if (0 < capacity) {
      if (__this == (System_Collections_Generic_List_bool__o *)0x0) goto LAB_0201abdc;
      do {
        lVar2 = Method_System_Collections_Generic_List<bool>_Add__;
        pSVar4 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar4 == (System_Boolean_array *)0x0) goto LAB_0201abdc;
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar4->m_Items[(int)uVar1] = false;
        }
        else {
          System_Collections_Generic_List<bool>__AddWithResize
                    (__this,false,
                     *(MethodInfo_269D358 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        capacity = capacity + -1;
      } while (capacity != 0);
    }
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_int__o *)PLANLFALEPE,
               (MethodInfo_26C8140 *)
               method->rgctx_data->_2_System_Collections_Generic_List_T__GetEnumerator);
    local_60._8_4_ = local_78.fields._index;
    local_60._12_4_ = local_78.fields._version;
    local_50 = local_78.fields._current;
LAB_0201aae8:
    bVar3 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                      ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
                       (MethodInfo_23F339C *)
                       method->rgctx_data[1]._0_System_Collections_Generic_List_T_);
    if (bVar3) {
      local_34 = (int32_t)local_50;
      if (0 < (PBDIPLHDHHD->fields)._size) {
        if (__this == (System_Collections_Generic_List_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        index = 0;
        do {
          bVar3 = System_Collections_Generic_List<bool>__get_Item
                            (__this,index,Method_System_Collections_Generic_List<bool>_get_Item__);
          if (!bVar3) {
            local_78.fields._list._0_4_ =
                 System_Collections_Generic_List<int>__get_Item
                           ((System_Collections_Generic_List_int__o *)PBDIPLHDHHD,index,
                            (MethodInfo_26C737C *)
                            method->rgctx_data->_7_System_Collections_Generic_List_T__get_Item);
            obj = (Il2CppObject *)thunk_FUN_01bda448(method->rgctx_data->_6_T,&local_78);
            bVar3 = System_Int32__Equals
                              ((int32_t)&local_34,obj,
                               method->rgctx_data->
                               _9_System_Collections_Generic_List_Enumerator_T__MoveNext);
            if (bVar3) goto LAB_0201ab80;
          }
          index = index + 1;
          if ((PBDIPLHDHHD->fields)._size <= index) {
            bVar3 = false;
            goto LAB_0201aba0;
          }
        } while( true );
      }
    }
    bVar3 = !bVar3;
LAB_0201aba0:
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
               (MethodInfo_23F3398 *)
               method->rgctx_data[1]._1_System_Collections_Generic_List_T__get_Count);
    return bVar3;
  }
LAB_0201abdc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_0201ab80:
  System_Collections_Generic_List<bool>__set_Item
            (__this,index,true,Method_System_Collections_Generic_List<bool>_set_Item__);
  goto LAB_0201aae8;
}

