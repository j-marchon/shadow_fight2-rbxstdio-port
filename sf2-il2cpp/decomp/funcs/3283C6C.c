// GCGLGALIFGP$$AJJLBBCJAAL @ RVA 0x3283C6C

System_String_o *
GCGLGALIFGP__AJJLBBCJAAL(GCGLGALIFGP_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int iVar1;
  int32_t BFGGBPNAMBD;
  System_String_o *pSVar2;
  ACHLOMELAJE_o *pAVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = OPAEPDIIOEB;
  auVar8._0_8_ = __this;
  if ((DAT_045672a3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6025);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6026);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6027);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6028);
    FUN_01bab630(&byte___TypeInfo);
    auVar8 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672a3 = 1;
  }
  uVar7 = auVar8._0_8_;
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    iVar1 = (int)OPAEPDIIOEB->max_length;
    if (iVar1 < 2) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6025,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6026,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSVar2 = GCGLGALIFGP__IGMDDJFPIJL((GCGLGALIFGP_o *)pSVar6,method_00);
      pSVar6 = System_String__Concat(pSVar6,pSVar2,(MethodInfo *)0x0);
      return pSVar6;
    }
    pSVar6 = OPAEPDIIOEB->m_Items[0];
    pSVar2 = OPAEPDIIOEB->m_Items[1];
    if (iVar1 == 2) {
      BFGGBPNAMBD = 0;
    }
    else {
      BFGGBPNAMBD = GCGLGALIFGP__IFLJJLLDCAC(OPAEPDIIOEB->m_Items[2],auVar8._8_8_);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    uVar7 = 0;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__LMJFPPDAPBF(pAVar3,pSVar6,pSVar2,BFGGBPNAMBD,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      uVar7 = 0;
      if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,true,(MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6027,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6028,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar7);
}

