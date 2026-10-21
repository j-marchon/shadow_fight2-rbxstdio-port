// IDDIABHBDEE$$APHOFEPIAHM @ RVA 0x3387CA4

System_String_o * IDDIABHBDEE__APHOFEPIAHM(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *str1;
  
  if ((DAT_04567bab & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_437);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_438);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04567bab = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_437,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_438,(MethodInfo *)0x0);
  str1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}

