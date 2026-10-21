// BBBBKBBFNOG$$ACHEEICHHHJ @ RVA 0x34D14CC

System_String_o * BBBBKBBFNOG__ACHEEICHHHJ(MethodInfo *method)

{
  int64_t iVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  System_String_o *str2;
  float fVar5;
  long local_38;
  
  if ((DAT_045686b8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6637);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6638);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6639);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6640);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    DAT_045686b8 = 1;
  }
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar5 = BBBBKBBFNOG_TypeInfo->static_fields->AHCKJLKAKMN;
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  iVar1 = System_Convert__ToInt64((fVar5 + -1.0) * 10000.0,(MethodInfo *)0x0);
  local_38 = iVar1 / 100;
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6637,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6638,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  str1 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6639,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6640,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,str1,str2,(MethodInfo *)0x0);
  return pSVar4;
}

