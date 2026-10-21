// BDGDJDGHMJI$$CMAHLJPEJGE @ RVA 0x32657AC

void BDGDJDGHMJI__CMAHLJPEJGE(EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  MethodInfo *extraout_x1;
  
  if ((DAT_045671c6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5598);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5599);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CGFIAJGHIPL_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_045671c6 = 1;
    method = extraout_x1;
  }
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CGFIAJGHIPL_TypeInfo,method);
  }
  CGFIAJGHIPL__MDCDPEPHAIC(HEHMPFLAEGE,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5598,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5599,(MethodInfo *)0x0);
  message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

