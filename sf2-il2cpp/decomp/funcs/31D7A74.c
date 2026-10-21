// LCKCDEKNLOA$$NDJAJHFFPKP @ RVA 0x31D7A74

void LCKCDEKNLOA__NDJAJHFFPKP(LCKCDEKNLOA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_BOFEMGGNODC__o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_array *values;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  BOFEMGGNODC_o *__this_00;
  System_Action_PKHMIGFEJCL__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  System_Action_o *pSVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  int32_t local_64;
  
  if ((DAT_04566cf5 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3673);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3674);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3675);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3676);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3677);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3678);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3679);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3680);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_LCKCDEKNLOA_NDJAJHFFPKP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_get_Item__);
    FUN_01bab630(&string___TypeInfo);
    DAT_04566cf5 = 1;
  }
  local_64 = 0;
  piVar8 = &(__this->fields).KMCAGKMDGBB;
  pSVar2 = (__this->fields).NEIJJHEFLHP;
  if (*piVar8 < 0) {
    if (pSVar2 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) goto LAB_032d7f28;
LAB_032d7b9c:
    if ((pSVar2->fields)._size < 1) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3673,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3674,
                 (MethodInfo *)0x0);
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    }
    else {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,0,
                          Method_System_Collections_Generic_List<BOFEMGGNODC>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_032d7f28;
      pSVar9 = pIVar3[3].monitor;
    }
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3675,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3676,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (values == (System_String_array *)0x0) goto LAB_032d7f28;
    if ((int)values->max_length == 0) {
LAB_032d7f2c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[0] = pSVar6;
    thunk_FUN_01c20e04(values->m_Items,pSVar6);
    if ((uint)values->max_length < 2) goto LAB_032d7f2c;
    values->m_Items[1] = pSVar9;
    thunk_FUN_01c20e04(values->m_Items + 1,pSVar9);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3677,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3678,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if ((uint)values->max_length < 3) goto LAB_032d7f2c;
    values->m_Items[2] = pSVar9;
    thunk_FUN_01c20e04(values->m_Items + 2,pSVar9);
    pSVar9 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
    if ((uint)values->max_length < 4) goto LAB_032d7f2c;
    values->m_Items[3] = pSVar9;
    thunk_FUN_01c20e04(values->m_Items + 3,pSVar9);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3679,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3680,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if ((uint)values->max_length < 5) goto LAB_032d7f2c;
    values->m_Items[4] = pSVar9;
    thunk_FUN_01c20e04();
    pSVar2 = (__this->fields).NEIJJHEFLHP;
    if (pSVar2 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) goto LAB_032d7f28;
    local_64 = (pSVar2->fields)._size;
    pSVar9 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    if ((uint)values->max_length < 6) goto LAB_032d7f2c;
    values->m_Items[5] = pSVar9;
    thunk_FUN_01c20e04();
    pSVar9 = System_String__Concat(values,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).NEIJJHEFLHP;
    if (pSVar2 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) goto LAB_032d7f28;
  }
  else {
    if (pSVar2 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) goto LAB_032d7f28;
    if ((pSVar2->fields)._size <= *piVar8) goto LAB_032d7b9c;
  }
  __this_00 = (BOFEMGGNODC_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         (__this->fields).KMCAGKMDGBB,
                         Method_System_Collections_Generic_List<BOFEMGGNODC>_get_Item__);
  CJNHFNHJHPE = (System_Action_PKHMIGFEJCL__o *)
                thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (BOFEMGGNODC_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    BOFEMGGNODC__HAFNHPBMIBI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    iVar1 = *piVar8;
    *piVar8 = iVar1 + 1;
    pSVar2 = (__this->fields).NEIJJHEFLHP;
    if (pSVar2 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) {
      if (iVar1 + 1 < (pSVar2->fields)._size) {
        LCKCDEKNLOA__MAHFCKJGBPP(__this,AAJBIMFNMBB,method_00);
      }
      else {
        pSVar7 = (__this->fields).BHHLJDLBINB;
        if (pSVar7 == (System_Action_o *)0x0) goto LAB_032d7f28;
        (*(code *)(pSVar7->fields).super.super.invoke_impl)
                  ((pSVar7->fields).super.super.method_code,(pSVar7->fields).super.super.method);
      }
      return;
    }
  }
LAB_032d7f28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

