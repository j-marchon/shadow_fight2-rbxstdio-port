// Core.Network.ServerProvider$$MCDPHNFBOFI @ RVA 0x3578BD4

void Core_Network_ServerProvider__MCDPHNFBOFI
               (Core_Network_ServerProvider_o *__this,ServerProviderBase_BNPEHNICKPJ_o *ABALBNDMLKB,
               MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  
  if ((DAT_04568c94 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1002);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1003);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1004);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1005);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1006);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1007);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    DAT_04568c94 = 1;
  }
  if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = OGHIOMKFPLH__FEFKCNPJBKL((MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1002,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1003,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_array *)0x0) {
    if (1 < (uint)pSVar2->max_length) {
      if (ABALBNDMLKB == (ServerProviderBase_BNPEHNICKPJ_o *)0x0) goto LAB_03678ea4;
      ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                (ABALBNDMLKB,pSVar5,(Il2CppObject *)pSVar2->m_Items[1],(MethodInfo *)0x0);
      if (DAT_04567a78 == '\0') {
        FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
        DAT_04567a78 = '\x01';
      }
      if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        (OGHIOMKFPLH_TypeInfo->static_fields->_ADLDJLCDIMD_k__BackingField,
                         (MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1004,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1005,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(OGHIOMKFPLH_TypeInfo);
      }
      if (DAT_04567a78 == '\0') {
        FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
        DAT_04567a78 = '\x01';
      }
      if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                (ABALBNDMLKB,pSVar5,
                 (Il2CppObject *)OGHIOMKFPLH_TypeInfo->static_fields->_ADLDJLCDIMD_k__BackingField,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1006,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1007,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((int)pSVar2->max_length != 0) {
        ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                  (ABALBNDMLKB,pSVar5,(Il2CppObject *)pSVar2->m_Items[0],(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03678ea4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

