// NFGLEDADCGL$$MCGJLCLKDNP @ RVA 0x316B1C8

HNFFPPPDKDK_o *
NFGLEDADCGL__MCGJLCLKDNP(NFGLEDADCGL_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  HNFFPPPDKDK_o *pHVar2;
  int index;
  
  if ((DAT_045668f2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_get_Item__);
    DAT_045668f2 = 1;
  }
  __this_00 = (__this->fields).PEJIOCBFEEE;
  if (__this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (HNFFPPPDKDK_o *)0x0;
      }
      pHVar2 = (HNFFPPPDKDK_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<HNFFPPPDKDK>_get_Item__);
      if (pHVar2 == (HNFFPPPDKDK_o *)0x0) break;
      bVar1 = System_String__op_Equality((pHVar2->fields).DEKCPPOJFEH,KGLJICLJHEL,(MethodInfo *)0x0)
      ;
      if (bVar1) {
        return pHVar2;
      }
      __this_00 = (__this->fields).PEJIOCBFEEE;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

