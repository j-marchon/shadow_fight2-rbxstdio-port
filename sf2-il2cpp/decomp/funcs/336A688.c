// MDFGJKBMECA.LGNCFOEJBDP$$PPOILNKHDCK @ RVA 0x336A688

System_String_o *
MDFGJKBMECA_LGNCFOEJBDP__PPOILNKHDCK
          (MDFGJKBMECA_LGNCFOEJBDP_o *__this,int32_t GCMHMONNHII,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04567ae2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04567ae2 = 1;
  }
  __this_00 = (__this->fields).AFFPHLIMPKL;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this_00->fields)._size <= GCMHMONNHII) {
      MDFGJKBMECA_LGNCFOEJBDP__GMIOEDHLEIM(__this,GCMHMONNHII,method);
      __this_00 = (__this->fields).AFFPHLIMPKL;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0346a708;
    }
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,GCMHMONNHII,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    return pSVar1;
  }
LAB_0346a708:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

