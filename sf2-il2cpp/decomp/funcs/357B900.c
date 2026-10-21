// Core.Network.ServerProvider$$DCHPPPJFPJI @ RVA 0x357B900

void Core_Network_ServerProvider__DCHPPPJFPJI
               (ServerProviderBase_BNPEHNICKPJ_o *ABALBNDMLKB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  CPHBJEDCAEO_o *pCVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  CPHBJEDCAEO_c *pCVar11;
  KMBNFNCDDBP_o *pKVar12;
  ulong uVar13;
  int32_t *piVar14;
  int32_t local_70;
  int32_t local_6c;
  int64_t local_68;
  
  if ((DAT_04568cad & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1090);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1091);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1092);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1093);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1094);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1095);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1096);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1097);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1098);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1099);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1100);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1101);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1102);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1103);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1104);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1105);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1106);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1107);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_04568cad = 1;
  }
  pCVar4 = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pCVar4 != (CPHBJEDCAEO_o *)0x0) {
    pCVar11 = pCVar4->klass;
    uVar1._0_1_ = (pCVar11->_2).rank;
    uVar1._1_1_ = (pCVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar1;
    if (uVar13 != 0) {
      piVar14 = &((pCVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
          pVVar5 = pCVar11->vtable + *piVar14;
          goto LAB_0367bab8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar4,CPHBJEDCAEO_TypeInfo,0);
LAB_0367bab8:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pCVar4,pVVar5->method);
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar6,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1090,
                 (MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1091,
                 (MethodInfo *)0x0);
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
      if (ABALBNDMLKB == (ServerProviderBase_BNPEHNICKPJ_o *)0x0) goto LAB_0367c078;
      ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                (ABALBNDMLKB,pSVar9,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    }
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1092,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1093,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    pSVar9 = EOAOCPLIKOI__FPFBKLLGPGM((MethodInfo *)0x0);
    if (ABALBNDMLKB != (ServerProviderBase_BNPEHNICKPJ_o *)0x0) {
      ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                (ABALBNDMLKB,pSVar6,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1094,
                 (MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1095,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
      if (DAT_045611dc == '\0') {
        FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
        DAT_045611dc = '\x01';
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar12 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
      if (pKVar12 != (KMBNFNCDDBP_o *)0x0) {
        ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                  (ABALBNDMLKB,pSVar6,(Il2CppObject *)(pKVar12->fields).AHAKHHLCPAB,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1096,
                   (MethodInfo *)0x0);
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1097,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
        if (DAT_045611dc == '\0') {
          FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
          DAT_045611dc = '\x01';
        }
        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pKVar12 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
        if (pKVar12 != (KMBNFNCDDBP_o *)0x0) {
          pSVar9 = System_Int32__ToString((int)pKVar12 + 0x68,(MethodInfo *)0x0);
          ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                    (ABALBNDMLKB,pSVar6,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1098,
                     (MethodInfo *)0x0);
          pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar8,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1099,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
          if (DAT_045611dc == '\0') {
            FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
            DAT_045611dc = '\x01';
          }
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pKVar12 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
          if (pKVar12 != (KMBNFNCDDBP_o *)0x0) {
            local_68 = (pKVar12->fields).OPDGKICDOKN;
            pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_68);
            ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                      (ABALBNDMLKB,pSVar6,pIVar10,(MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1100,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1101,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            local_6c = UnityEngine_Screen__get_width((MethodInfo *)0x0);
            pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
            ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                      (ABALBNDMLKB,pSVar6,pIVar10,(MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1102,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1103,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            local_70 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
            pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_70);
            ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                      (ABALBNDMLKB,pSVar6,pIVar10,(MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1104,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1105,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            iVar3 = EOAOCPLIKOI__PNPFJEGMOPC((MethodInfo *)0x0);
            if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo);
            }
            pSVar9 = LLKDCCJMFLE__JCAHKFNICNA(iVar3,(MethodInfo *)0x0);
            ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                      (ABALBNDMLKB,pSVar6,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1106,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1107,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            iVar3 = EOAOCPLIKOI__KDONMCINCCB((MethodInfo *)0x0);
            pSVar9 = LLKDCCJMFLE__JCAHKFNICNA(iVar3,(MethodInfo *)0x0);
            ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                      (ABALBNDMLKB,pSVar6,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0367c078:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

