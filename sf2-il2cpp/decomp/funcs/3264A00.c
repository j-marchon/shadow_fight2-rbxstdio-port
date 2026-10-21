// BDGDJDGHMJI$$NBCFNIKCLKP @ RVA 0x3264A00

System_String_o * BDGDJDGHMJI__NBCFNIKCLKP(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  
  if ((DAT_045671c0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5566);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5567);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    DAT_045671c0 = 1;
  }
  pSVar2 = AJAMDCEKAFE__LFCNNAGLPHO(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KDDOKHLOKMI_TypeInfo);
  }
  ppSVar3 = &KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                    (KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB,(MethodInfo *)0x0);
  if (bVar1) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5566,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5567,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar2;
  }
  if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB;
}

