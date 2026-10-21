// IPPEHAJADOO$$DBGHGKLANPG @ RVA 0x313FEB4

void IPPEHAJADOO__DBGHGKLANPG
               (IPPEHAJADOO_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  
  if ((DAT_04566750 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    DAT_04566750 = 1;
  }
  __this_00 = (__this->fields).MBPELMMKGMB;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
      __this_00 = (__this->fields).MBPELMMKGMB;
      if (__this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_0323ff40;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_AddRange__);
    return;
  }
LAB_0323ff40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

