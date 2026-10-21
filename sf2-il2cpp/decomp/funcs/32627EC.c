// BDGDJDGHMJI$$DMIFLGAIJAA @ RVA 0x32627EC

System_String_o * BDGDJDGHMJI__DMIFLGAIJAA(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_Nullable_int__o SVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  int32_t iVar3;
  
  if ((DAT_045671b7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5480);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5481);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_045671b7 = 1;
  }
  SVar1 = AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
  }
  iVar3 = SVar1.fields.value;
  if (((ulong)SVar1.fields & 0xff) == 0) {
    iVar3 = 1;
  }
  LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP = iVar3;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5480,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5481,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar2;
}

