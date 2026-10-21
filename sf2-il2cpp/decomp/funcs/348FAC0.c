// PBHDPJBLDLG$$MOIADPPPPLJ @ RVA 0x348FAC0

void PBHDPJBLDLG__MOIADPPPPLJ(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_int__object__o item;
  long lVar2;
  Il2CppObject **ppIVar3;
  MethodInfo_2638AE0 *in_x4;
  System_Collections_Generic_KeyValuePair_int__object__array *pSVar4;
  System_Collections_Generic_List_KeyValuePair_int__object___o *__this_00;
  System_Collections_Generic_KeyValuePair_int__object__o __this_01;
  undefined8 local_30;
  Il2CppObject *pIStack_28;
  
  if ((DAT_0456840e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_Add__);
    DAT_0456840e = 1;
  }
  if ((__this->fields).BINGHJMNJDD == false) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
              (__this->fields).DGGLBIIIEBM;
  local_30 = 0;
  pIStack_28 = (Il2CppObject *)0x0;
  __this_01.fields.value = (Il2CppObject *)0xffffffff;
  __this_01.fields._0_8_ = &local_30;
  System_Collections_Generic_KeyValuePair<int,_object>___ctor
            (__this_01,0,Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>__ctor__,
             in_x4);
  lVar2 = Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_Add__;
  if (__this_00 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
    item.fields.value = pIStack_28;
    item.fields._0_8_ = local_30;
    pSVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar4 != (System_Collections_Generic_KeyValuePair_int__object__array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        ppIVar3 = &pSVar4->m_Items[(int)uVar1].fields.value;
        *ppIVar3 = pIStack_28;
        *(undefined8 *)&pSVar4->m_Items[(int)uVar1].fields = local_30;
        thunk_FUN_01c20e04(ppIVar3,0);
        return;
      }
      System_Collections_Generic_List<KeyValuePair<int,_object>>__AddWithResize
                (__this_00,item,
                 *(MethodInfo_265FF1C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

