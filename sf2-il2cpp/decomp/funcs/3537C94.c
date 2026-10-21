// EPFMFHDGMCE$$OPHCGMGNFFO @ RVA 0x3537C94

JLGNBOILFLN_o *
EPFMFHDGMCE__OPHCGMGNFFO(EPFMFHDGMCE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  JLGNBOILFLN_o *__this_01;
  System_String_o *a;
  int index;
  
  if ((DAT_04568a9f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568a9f = 1;
  }
  __this_00 = (__this->fields).GCHAMOPMNHF;
  if (__this_00 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (JLGNBOILFLN_o *)0x0;
      }
      __this_01 = (JLGNBOILFLN_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
      if (__this_01 == (JLGNBOILFLN_o *)0x0) break;
      a = JLGNBOILFLN__GKMAFGODLLG(__this_01,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
        return __this_01;
      }
      __this_00 = (__this->fields).GCHAMOPMNHF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

