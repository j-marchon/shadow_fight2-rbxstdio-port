// GCGLGALIFGP$$IFLJJLLDCAC @ RVA 0x3283A4C

int32_t GCGLGALIFGP__IFLJJLLDCAC(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  int32_t iVar5;
  
  if ((DAT_045672a1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6020);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6021);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6022);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6023);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045672a1 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6020,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6021,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(DIHAKADKIKM,pSVar4,(MethodInfo *)0x0);
  if (bVar1) {
    iVar5 = 1;
  }
  else {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6022,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6023,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(DIHAKADKIKM,pSVar4,(MethodInfo *)0x0);
    iVar5 = 2;
    if (!bVar1) {
      iVar5 = 0;
    }
  }
  return iVar5;
}

