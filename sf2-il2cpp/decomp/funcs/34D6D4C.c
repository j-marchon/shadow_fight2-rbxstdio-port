// LCNCCGOAJBL$$PDDMBMNOHKH @ RVA 0x34D6D4C

System_String_o * LCNCCGOAJBL__PDDMBMNOHKH(System_String_o *HMMBINEDODK,MethodInfo *method)

{
  bool bVar1;
  LCNCCGOAJBL_c *method_00;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  int32_t local_14;
  
  if ((DAT_045686d9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4688);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4689);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_045686d9 = 1;
  }
  local_14 = -1;
  bVar1 = System_Int32__TryParse(HMMBINEDODK,&local_14,(MethodInfo *)0x0);
  if (bVar1) {
    local_14 = local_14 + -1;
    method_00 = LCNCCGOAJBL_TypeInfo;
    if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (LCNCCGOAJBL_c *)thunk_FUN_01ba7564();
    }
    __this = LCNCCGOAJBL__GPAIEPMDALL((MethodInfo *)method_00);
    if (-1 < local_14) {
      if (__this == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_14 < (__this->fields)._size) {
        pSVar2 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,local_14,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        return pSVar2;
      }
    }
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4688,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4689,(MethodInfo *)0x0)
    ;
    HMMBINEDODK = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  }
  return HMMBINEDODK;
}

