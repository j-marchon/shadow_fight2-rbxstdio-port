// LCNCCGOAJBL$$JPMJECDEGDC @ RVA 0x34D6E9C

System_String_o * LCNCCGOAJBL__JPMJECDEGDC(MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  LCNCCGOAJBL_c *pLVar4;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar5;
  LCNCCGOAJBL_StaticFields *pLVar6;
  System_DateTime_Fields local_28;
  
  if ((DAT_045686db & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_045686db = 1;
  }
  local_28._dateData = 0;
  pLVar4 = LCNCCGOAJBL_TypeInfo;
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    pLVar4 = (LCNCCGOAJBL_c *)thunk_FUN_01ba7564();
  }
  __this = LCNCCGOAJBL__GPAIEPMDALL((MethodInfo *)pLVar4);
  pLVar4 = LCNCCGOAJBL_TypeInfo;
  if (LCNCCGOAJBL_TypeInfo->static_fields->FEBKHIENJBN == -1) {
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_28._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    iVar3 = System_DateTime__get_Second((System_DateTime_o)&local_28,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_035d7018;
    iVar1 = (__this->fields)._size;
    if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LCNCCGOAJBL_TypeInfo);
    }
    pLVar4 = LCNCCGOAJBL_TypeInfo;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    LCNCCGOAJBL_TypeInfo->static_fields->FEBKHIENJBN = iVar3 - iVar2 * iVar1;
  }
  if ((pLVar4->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(pLVar4);
    pLVar4 = LCNCCGOAJBL_TypeInfo;
  }
  pLVar6 = pLVar4->static_fields;
  iVar1 = pLVar6->FEBKHIENJBN + 1;
  pLVar6->FEBKHIENJBN = iVar1;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this->fields)._size <= iVar1) {
      if ((pLVar4->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(pLVar4);
        pLVar6 = LCNCCGOAJBL_TypeInfo->static_fields;
        pLVar4 = LCNCCGOAJBL_TypeInfo;
      }
      pLVar6->FEBKHIENJBN = 0;
    }
    if ((pLVar4->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pLVar4);
      pLVar4 = LCNCCGOAJBL_TypeInfo;
    }
    pSVar5 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,
                        pLVar4->static_fields->FEBKHIENJBN,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    return pSVar5;
  }
LAB_035d7018:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

