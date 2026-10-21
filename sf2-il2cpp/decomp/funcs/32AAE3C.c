// BGFNOPDHEOM$$DGLJCGNHLIG @ RVA 0x32AAE3C

void BGFNOPDHEOM__DGLJCGNHLIG(MethodInfo *method)

{
  int32_t length;
  BGFNOPDHEOM_StaticFields *pBVar1;
  System_Collections_Generic_List_NLIDHEAMLMC__o *pSVar2;
  
  if ((DAT_04567430 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_Clear__);
    DAT_04567430 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar1 = BGFNOPDHEOM_TypeInfo->static_fields;
  pSVar2 = pBVar1->CNFEFGAGAMC;
  if (pSVar2 != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      pBVar1 = BGFNOPDHEOM_TypeInfo->static_fields;
    }
    pBVar1->JPDBJAEDIEM = -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

