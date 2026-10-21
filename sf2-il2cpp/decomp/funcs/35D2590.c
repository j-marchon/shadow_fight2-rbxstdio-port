// GGLDGAAPKCF$$HECPMGDKGFO @ RVA 0x35D2590

bool GGLDGAAPKCF__HECPMGDKGFO
               (HOOAAGABMBL_o *IHGFKLOLPOK,int32_t IDPMJOKDHNP,System_String_o **EHNFGMGKCHO,
               IGNEHHMICKB_o **EFGJLFEICDO,MethodInfo *method)

{
  ushort uVar1;
  byte bVar2;
  VirtualInvokeData *pVVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  System_String_o *str2;
  System_String_array *values;
  IGNEHHMICKB_o *pIVar7;
  KCJCIJHMEJF_c *pKVar8;
  ulong uVar9;
  int32_t *piVar10;
  KCJCIJHMEJF_o *pKVar11;
  int32_t local_44;
  
  local_44 = IDPMJOKDHNP;
  if ((DAT_04568fef & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_789);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_790);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_791);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_792);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_793);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_794);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_795);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_796);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_797);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_798);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_799);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_800);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568fef = 1;
  }
  *EHNFGMGKCHO = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(EHNFGMGKCHO);
  *EFGJLFEICDO = (IGNEHHMICKB_o *)0x0;
  thunk_FUN_01c20e04(EFGJLFEICDO,0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar11 == (KCJCIJHMEJF_o *)0x0) {
LAB_036d2b64:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar8 = pKVar11->klass;
  uVar1._0_1_ = (pKVar8->_2).rank;
  uVar1._1_1_ = (pKVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
        pVVar3 = pKVar8->vtable + (*piVar10 + 3);
        goto LAB_036d2780;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar11,KCJCIJHMEJF_TypeInfo,3);
LAB_036d2780:
  bVar2 = (*pVVar3->methodPtr)(pKVar11,IHGFKLOLPOK,pVVar3->method);
  if ((bVar2 & 1) != 0) {
    if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) goto LAB_036d2b64;
    pIVar7 = (IHGFKLOLPOK->fields)._NMBNLNIMMPI_k__BackingField;
    if (pIVar7 == (IGNEHHMICKB_o *)0x0) {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_793,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_794,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (values == (System_String_array *)0x0) goto LAB_036d2b64;
      if ((int)values->max_length == 0) {
LAB_036d2b68:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items,pSVar6);
      pSVar6 = OFFIONDOEPM__CNLBHLNMCCI
                         ((IHGFKLOLPOK->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto LAB_036d2b68;
      values->m_Items[1] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar6);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_795,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_796,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) goto LAB_036d2b68;
      values->m_Items[2] = pSVar6;
      thunk_FUN_01c20e04();
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto LAB_036d2b68;
      values->m_Items[3] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar6);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_797,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_798,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((uint)values->max_length < 5) goto LAB_036d2b68;
      values->m_Items[4] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 4,pSVar6);
      pSVar6 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto LAB_036d2b68;
      values->m_Items[5] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 5,pSVar6);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_799,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_800,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((uint)values->max_length < 7) goto LAB_036d2b68;
      values->m_Items[6] = pSVar6;
      thunk_FUN_01c20e04();
      pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
    }
    else {
      *EFGJLFEICDO = pIVar7;
      thunk_FUN_01c20e04(EFGJLFEICDO);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_789,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_790,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_791,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_792,(MethodInfo *)0x0
                );
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat(pSVar6,str1,str2,(MethodInfo *)0x0);
    }
    *EHNFGMGKCHO = pSVar6;
    thunk_FUN_01c20e04(EHNFGMGKCHO,pSVar6);
  }
  return (bool)(bVar2 & 1);
}

