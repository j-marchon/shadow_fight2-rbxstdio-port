// LCOODJKAICL$$CKHDCCFGNEN @ RVA 0x34A2CAC

void LCOODJKAICL__CKHDCCFGNEN(LCOODJKAICL_o *__this,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_String_o *item;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar3;
  
  if ((DAT_045684b7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&StringLiteral_1);
    DAT_045684b7 = 1;
  }
  __this_00 = (__this->fields).PKENPPJGGHL;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
      __this_00 = (__this->fields).PKENPPJGGHL;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_035a2d98;
    }
    item = StringLiteral_1;
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_035a2d98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

