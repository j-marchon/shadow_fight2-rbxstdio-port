// JLGNBOILFLN$$MJKINAHFKIG @ RVA 0x3248A98

ECENNHNBAME_o * JLGNBOILFLN__MJKINAHFKIG(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  HEFOANCOHDC_o *pHVar4;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  int index;
  
  if ((DAT_045670d5 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    DAT_045670d5 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).LENFGEAJDMN != (HEFOANCOHDC_o *)0x0) {
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565f31 == '\0') {
      FUN_01bab630(&LDHBHPILNMA_TypeInfo);
      DAT_04565f31 = '\x01';
      method = extraout_x1_01;
    }
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo,method);
    }
    __this_00 = LDHBHPILNMA_TypeInfo->static_fields->GLNEIGKMPDC;
    if (__this_00 == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
LAB_03348bc4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) ||
           (pHVar4 = (__this->fields).LENFGEAJDMN, pHVar4 == (HEFOANCOHDC_o *)0x0))
        goto LAB_03348bc4;
        bVar2 = System_String__op_Equality
                          (pIVar3[1].monitor,(pHVar4->fields).JJONOCGMEMK,(MethodInfo *)0x0);
        if (bVar2) {
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
          if (pIVar3 != (Il2CppObject *)0x0) {
            return pIVar3[3].monitor;
          }
          goto LAB_03348bc4;
        }
        index = index + 1;
      } while (iVar1 != index);
    }
  }
  return (ECENNHNBAME_o *)0x0;
}

