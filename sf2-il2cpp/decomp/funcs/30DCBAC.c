// GFCCCDLDGEG$$AJJLBBCJAAL @ RVA 0x30DCBAC

System_String_o *
GFCCCDLDGEG__AJJLBBCJAAL(GFCCCDLDGEG_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppType *pIVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_string__MAHLPIPJBFB__o *__this_00;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  System_Type_o *pSVar8;
  System_String_array *pSVar9;
  System_String_o *pSVar10;
  System_String_o *str3;
  Il2CppObject *pIVar11;
  int32_t *piVar12;
  MethodInfo *method_00;
  uint uVar13;
  uint uVar14;
  System_Enum_o local_68;
  int32_t local_58;
  int32_t local_44;
  
  if ((DAT_04566367 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4747);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4748);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4749);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4750);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4751);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4752);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4753);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4754);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4755);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4756);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4757);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4758);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4759);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4760);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_TryGetValue__);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&MAHLPIPJBFB_var);
    FUN_01bab630(&MAHLPIPJBFB_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566367 = 1;
  }
  local_44 = 0;
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045663a8 == '\0') {
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    DAT_045663a8 = '\x01';
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ILNFICAMFCI_TypeInfo->static_fields->DHKAODBNGNJ == false) {
                    /* try { // try from 031dce64 to 032dcf3b has its CatchHandler @ 031dce64
                       catch() { ... } // from try @ 031dce64 with catch @ 031dce64
                       catch() { ... } // from try @ 031dd04c with catch @ 031dce64
                       catch() { ... } // from try @ 031dd1b0 with catch @ 031dce64
                       catch() { ... } // from try @ 031dd21c with catch @ 031dce64
                       catch() { ... } // from try @ 031dd2c8 with catch @ 031dce64 */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4747,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4748,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = System_String__Join(StringLiteral_1,OPAEPDIIOEB,(MethodInfo *)0x0);
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(ILNFICAMFCI_TypeInfo);
    }
    __this_00 = ILNFICAMFCI_TypeInfo->static_fields->OOKCNDCNADD;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__MAHLPIPJBFB__o *)0x0) {
LAB_031dd288:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_Int32Enum>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)pSVar4,&local_44,
                       Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_TryGetValue__
                      );
    iVar1 = local_44;
    pIVar2 = MAHLPIPJBFB_var;
    if (bVar3) {
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ILNFICAMFCI__DLBGAPAPJHA(iVar1,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4749,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4750,
                 (MethodInfo *)0x0);
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      local_68.klass = (System_Enum_c *)MAHLPIPJBFB_TypeInfo;
      local_58 = local_44;
      local_68.monitor = (void *)0xffffffffffffffff;
      pSVar4 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
LAB_031dce50:
      pSVar4 = System_String__Concat(pSVar7,pSVar4,(MethodInfo *)0x0);
    }
    else {
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
      if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Enum_TypeInfo);
      }
      pSVar9 = System_Enum__GetNames(pSVar8,(MethodInfo *)0x0);
      if (pSVar9 == (System_String_array *)0x0) goto LAB_031dd288;
      uVar13 = (uint)pSVar9->max_length;
      if (0 < (int)uVar13) {
        uVar14 = 0;
        do {
          if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
                    /* try { // try from 031dcf3c to 032dcf43 has its CatchHandler @ 031dd1ec */
          pSVar7 = pSVar9->m_Items[(int)uVar14];
                    /* try { // try from 031dcf54 to 032dcf5b has its CatchHandler @ 031dd1e4 */
          if ((pSVar7 == (System_String_o *)0x0) ||
             (pSVar10 = System_String__ToLower(pSVar7,(MethodInfo *)0x0),
             pSVar10 == (System_String_o *)0x0)) goto LAB_031dd288;
          bVar3 = System_String__Contains(pSVar10,pSVar4,(MethodInfo *)0x0);
          pIVar2 = MAHLPIPJBFB_var;
          if (bVar3) {
            if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar8 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
            if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(System_Enum_TypeInfo);
            }
            pIVar11 = System_Enum__Parse(pSVar8,pSVar7,(MethodInfo *)0x0);
            if (pIVar11 == (Il2CppObject *)0x0) goto LAB_031dd288;
            if ((pIVar11->klass->_1).element_class != (MAHLPIPJBFB_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
            piVar12 = (int32_t *)thunk_FUN_01bda96c();
            iVar1 = *piVar12;
            if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar3 = ILNFICAMFCI__DLBGAPAPJHA(iVar1,(MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            local_58 = iVar1;
            if (!bVar3) {
                    /* catch() { ... } // from try @ 031dd188 with catch @ 031dd1b0
                       try { // try from 031dd1b0 to 032dd203 has its CatchHandler @ 031dce64 */
                    /* catch() { ... } // from try @ 031dd168 with catch @ 031dd1b4 */
                    /* catch() { ... } // from try @ 031dd15c with catch @ 031dd1b8 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4753,
                         (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031dd02c with catch @ 031dd1bc */
                    /* catch() { ... } // from try @ 031dd148 with catch @ 031dd1c0 */
                    /* catch() { ... } // from try @ 031dcfdc with catch @ 031dd1c4 */
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 031dd038 with catch @ 031dd1c8 */
                    /* catch() { ... } // from try @ 031dd130 with catch @ 031dd1cc */
                    /* catch() { ... } // from try @ 031dcf68 with catch @ 031dd1d0 */
                    /* catch() { ... } // from try @ 031dcfe0 with catch @ 031dd1d4 */
                    /* catch() { ... } // from try @ 031dcfbc with catch @ 031dd1d8 */
                    /* catch() { ... } // from try @ 031dcffc with catch @ 031dd1dc */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4754,
                         (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031dcf78 with catch @ 031dd1e0 */
                    /* catch() { ... } // from try @ 031dcf54 with catch @ 031dd1e4 */
                    /* catch() { ... } // from try @ 031dcf98 with catch @ 031dd1e8 */
                    /* catch() { ... } // from try @ 031dcf3c with catch @ 031dd1ec */
              pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
              local_68.klass = (System_Enum_c *)MAHLPIPJBFB_TypeInfo;
                    /* try { // try from 031dd204 to 032dd21b has its CatchHandler @ 031dd2c0 */
              local_68.monitor = (void *)0xffffffffffffffff;
              pSVar7 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
                    /* try { // try from 031dd21c to 032dd2af has its CatchHandler @ 031dce64 */
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4755,
                         (MethodInfo *)0x0);
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4756,
                         (MethodInfo *)0x0);
              pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
              pSVar4 = System_String__Concat(pSVar4,pSVar7,pSVar10,(MethodInfo *)0x0);
              return pSVar4;
            }
                    /* try { // try from 031dd130 to 032dd147 has its CatchHandler @ 031dd1cc */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4751,
                       (MethodInfo *)0x0);
                    /* try { // try from 031dd148 to 032dd14f has its CatchHandler @ 031dd1c0 */
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031dd15c to 032dd163 has its CatchHandler @ 031dd1b8 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4752,
                       (MethodInfo *)0x0);
                    /* try { // try from 031dd168 to 032dd187 has its CatchHandler @ 031dd1b4 */
            pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
            local_68.klass = (System_Enum_c *)MAHLPIPJBFB_TypeInfo;
                    /* try { // try from 031dd188 to 032dd1af has its CatchHandler @ 031dd1b0 */
            local_68.monitor = (void *)0xffffffffffffffff;
            pSVar4 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
            goto LAB_031dce50;
          }
                    /* try { // try from 031dcf68 to 032dcf6b has its CatchHandler @ 031dd1d0 */
          uVar13 = (uint)pSVar9->max_length;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar13);
      }
                    /* try { // try from 031dcf78 to 032dcf7f has its CatchHandler @ 031dd1e0 */
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031dcf98 to 032dcfbb has its CatchHandler @ 031dd1e8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4757,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031dcfbc to 032dcfc3 has its CatchHandler @ 031dd1d8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4758,
                 (MethodInfo *)0x0);
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 031dcfdc to 032dcfdf has its CatchHandler @ 031dd1c4 */
                    /* try { // try from 031dcfe0 to 032dcff3 has its CatchHandler @ 031dd1d4 */
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031dcffc to 032dd007 has its CatchHandler @ 031dd1dc */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4759,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4760,
                 (MethodInfo *)0x0);
                    /* try { // try from 031dd02c to 032dd02f has its CatchHandler @ 031dd1bc */
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 031dd038 to 032dd04b has its CatchHandler @ 031dd1c8 */
      str3 = GFCCCDLDGEG__IGMDDJFPIJL((GFCCCDLDGEG_o *)pSVar10,method_00);
                    /* try { // try from 031dd04c to 032dd12f has its CatchHandler @ 031dce64 */
      pSVar4 = System_String__Concat(pSVar7,pSVar4,pSVar10,str3,(MethodInfo *)0x0);
    }
  }
  return pSVar4;
}

