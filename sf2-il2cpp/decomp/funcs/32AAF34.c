// BGFNOPDHEOM$$PFOBJKIPLCK @ RVA 0x32AAF34

NLIDHEAMLMC_o * BGFNOPDHEOM__PFOBJKIPLCK(int32_t PCLEALHGACC,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  NLIDHEAMLMC_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_NLIDHEAMLMC__o *pSVar4;
  int index;
  
  if ((DAT_04567432 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__);
    DAT_04567432 = 1;
    method = extraout_x1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo,method);
  }
  pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
  if (pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
LAB_033ab054:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pSVar4->fields)._size;
  if (0 < iVar1) {
    index = 0;
    while( true ) {
      if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
      if ((pSVar4 == (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) ||
         (pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__),
         pIVar2 == (Il2CppObject *)0x0)) goto LAB_033ab054;
      if (*(int *)&pIVar2[1].klass == PCLEALHGACC) {
        if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
        if (pSVar4 != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
          pNVar3 = (NLIDHEAMLMC_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Item__);
          return pNVar3;
        }
        goto LAB_033ab054;
      }
      if (iVar1 + -1 == index) break;
      index = index + 1;
    }
  }
  return (NLIDHEAMLMC_o *)0x0;
}

