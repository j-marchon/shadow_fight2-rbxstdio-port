// HGHOHEHDJOB$$AJJLBBCJAAL @ RVA 0x31BE340

System_String_o *
HGHOHEHDJOB__AJJLBBCJAAL(HGHOHEHDJOB_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t KPMCKIKFGOF;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  System_String_o *str2;
  int32_t local_44;
  System_Nullable_int__Fields local_38;
  
  if ((DAT_04566c01 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5851);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5852);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5853);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5854);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MKFPGMBBGIA_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_04566c01 = 1;
  }
  local_44 = 0;
  local_38 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)local_38 & 0xff) == 0) {
    KPMCKIKFGOF = 0;
  }
  else {
    KPMCKIKFGOF = System_Nullable<int>__get_Value
                            ((System_Nullable_int__o)&local_38,
                             Method_System_Nullable<int>_get_Value__);
    if (50000 < KPMCKIKFGOF) {
      KPMCKIKFGOF = 50000;
    }
  }
  local_44 = KPMCKIKFGOF;
  if ((MKFPGMBBGIA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MKFPGMBBGIA__PGLLKHLAMFE(KPMCKIKFGOF,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5851,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5852,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5853,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5854,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,str1,str2,(MethodInfo *)0x0);
  return pSVar3;
}

