// Core.Network.ServerProvider$$MBKMBCLJDAE @ RVA 0x3578A88

System_String_o * Core_Network_ServerProvider__MBKMBCLJDAE(MethodInfo *method)

{
  int32_t iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_RuntimeFieldHandle_o fldHandle;
  
  if ((DAT_04568ca0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1032);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1033);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1034);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1035);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568ca0 = 1;
  }
  iVar1 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  if ((iVar1 - 4U < 5) || (iVar1 == 1)) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1034,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    fldHandle.fields.value =
         (System_RuntimeFieldHandle_Fields)
         (System_RuntimeFieldHandle_Fields)
         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1035.value;
  }
  else {
    if (iVar1 != 0) {
      return string_TypeInfo->static_fields->Empty;
    }
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1032,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    fldHandle.fields.value =
         (System_RuntimeFieldHandle_Fields)
         (System_RuntimeFieldHandle_Fields)
         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1033.value;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,fldHandle,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar2;
}

