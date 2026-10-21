// NBCGIBBCCHL$$AJJLBBCJAAL @ RVA 0x3198F68

System_String_o *
NBCGIBBCCHL__AJJLBBCJAAL(NBCGIBBCCHL_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int32_t CJNHFNHJHPE;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  DBIINAFCKME_o *pDVar6;
  System_String_o *pSVar7;
  undefined1 local_4c [4];
  int32_t local_48;
  System_Nullable_bool__Fields local_44 [2];
  System_Nullable_int__Fields local_38;
  
  if ((DAT_04566a92 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6180);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6181);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6182);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6183);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6184);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6185);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6186);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6187);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6188);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6189);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6190);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6191);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_04566a92 = 1;
  }
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0;
  local_44[0].hasValue = false;
  local_44[0].value = false;
  local_48 = 0;
  local_4c[0] = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_032994e0;
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
  }
  else {
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar7 = OPAEPDIIOEB->m_Items[0];
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6180,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6181,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar7,pSVar5,(MethodInfo *)0x0);
    if (bVar2) {
      local_38 = (System_Nullable_int__Fields)
                 AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (((ulong)local_38 & 0xff) == 0) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6184,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6185,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        pDVar6 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
        if (pDVar6 == (DBIINAFCKME_o *)0x0) goto LAB_032994e0;
        local_48 = (pDVar6->fields).NFLCPBJPAML;
      }
      else {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar6 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
        CJNHFNHJHPE = System_Nullable<int>__get_Value
                                ((System_Nullable_int__o)&local_38,
                                 Method_System_Nullable<int>_get_Value__);
        if (pDVar6 == (DBIINAFCKME_o *)0x0) {
LAB_032994e0:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        DBIINAFCKME__PKLLLKDDACP(pDVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6186,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6187,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        local_48 = System_Nullable<int>__get_Value
                             ((System_Nullable_int__o)&local_38,
                              Method_System_Nullable<int>_get_Value__);
      }
      pSVar7 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6182,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6183,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar7,pSVar5,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar5 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
        return pSVar5;
      }
      local_44[0] = (System_Nullable_bool__Fields)
                    AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (((ushort)local_44[0] & 0xff) == 0) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6188,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6189,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        pDVar6 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
        if (pDVar6 == (DBIINAFCKME_o *)0x0) goto LAB_032994e0;
        local_4c[0] = (pDVar6->fields).LKBMEDFBJDE;
        uVar1 = (bool_TypeInfo->_2).cctor_finished;
      }
      else {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar6 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
        bVar2 = System_Nullable<bool>__get_Value
                          ((System_Nullable_bool__o)SUB82(local_44,0),
                           Method_System_Nullable<bool>_get_Value__);
        if (pDVar6 == (DBIINAFCKME_o *)0x0) goto LAB_032994e0;
        DBIINAFCKME__GGPGBMMEIDN(pDVar6,bVar2,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6190,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6191,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        local_4c[0] = System_Nullable<bool>__get_Value
                                ((System_Nullable_bool__o)SUB82(local_44,0),
                                 Method_System_Nullable<bool>_get_Value__);
        uVar1 = (bool_TypeInfo->_2).cctor_finished;
      }
      if (uVar1 == 0) {
        thunk_FUN_01ba7564(bool_TypeInfo);
      }
      pSVar7 = System_Boolean__ToString(SUB81(local_4c,0),(MethodInfo *)0x0);
    }
    pSVar5 = System_String__Concat(pSVar5,pSVar7,(MethodInfo *)0x0);
  }
  return pSVar5;
}

