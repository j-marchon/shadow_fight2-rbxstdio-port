// Nekki.SF2.GUI.Profile.PerkSubItem$$MJKINAHFKIG @ RVA 0x33BA0B0

ECENNHNBAME_o *
Nekki_SF2_GUI_Profile_PerkSubItem__MJKINAHFKIG
          (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  JLGNBOILFLN_o *pJVar3;
  HEFOANCOHDC_o *pHVar4;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  int index;
  
  if ((DAT_04567d9a & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    DAT_04567d9a = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._CGEGGOPIPHH_k__BackingField != (JLGNBOILFLN_o *)0x0) {
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
LAB_034ba1f8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        pJVar3 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
        if (pJVar3 == (JLGNBOILFLN_o *)0x0) goto LAB_034ba1f8;
        if ((pJVar3->fields).LENFGEAJDMN != (HEFOANCOHDC_o *)0x0) {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
          if (((pIVar2 == (Il2CppObject *)0x0) ||
              (pJVar3 = (__this->fields)._CGEGGOPIPHH_k__BackingField,
              pJVar3 == (JLGNBOILFLN_o *)0x0)) ||
             (pHVar4 = (pJVar3->fields).LENFGEAJDMN, pHVar4 == (HEFOANCOHDC_o *)0x0))
          goto LAB_034ba1f8;
          bVar1 = System_String__op_Equality
                            (pIVar2[1].monitor,(pHVar4->fields).JJONOCGMEMK,(MethodInfo *)0x0);
          if (bVar1) {
            pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,index,
                                Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
            if (pIVar2 != (Il2CppObject *)0x0) {
              return pIVar2[3].monitor;
            }
            goto LAB_034ba1f8;
          }
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
  }
  return (ECENNHNBAME_o *)0x0;
}

