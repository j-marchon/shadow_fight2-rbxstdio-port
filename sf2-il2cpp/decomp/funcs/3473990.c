// OGHIOMKFPLH$$ECKPHAJBDCI @ RVA 0x3473990

System_String_array * OGHIOMKFPLH__ECKPHAJBDCI(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_array **ppSVar5;
  
  if ((DAT_04568308 & 1) == 0) {
                    /* try { // try from 035739b0 to 03673b93 has its CatchHandler @ 035739b0
                       catch() { ... } // from try @ 035739b0 with catch @ 035739b0
                       catch() { ... } // from try @ 03573c08 with catch @ 035739b0
                       catch() { ... } // from try @ 03573c28 with catch @ 035739b0
                       catch() { ... } // from try @ 03573c84 with catch @ 035739b0
                       catch() { ... } // from try @ 03573cb4 with catch @ 035739b0
                       catch() { ... } // from try @ 03573ce8 with catch @ 035739b0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2788);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2789);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2790);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2791);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04568308 = 1;
  }
  if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (OGHIOMKFPLH_TypeInfo->static_fields->FGEHGJNMEPG == (System_String_array *)0x0) {
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2788,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2789,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if (pSVar1 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = pSVar4;
      thunk_FUN_01c20e04(pSVar1->m_Items,pSVar4);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2790,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2791,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = pSVar4;
        thunk_FUN_01c20e04();
        if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        ppSVar5 = &OGHIOMKFPLH_TypeInfo->static_fields->FGEHGJNMEPG;
        *ppSVar5 = pSVar1;
        thunk_FUN_01c20e04(ppSVar5,pSVar1);
        goto LAB_03573b64;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03573b64:
  if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OGHIOMKFPLH_TypeInfo->static_fields->FGEHGJNMEPG;
}

