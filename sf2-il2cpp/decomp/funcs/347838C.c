// ECFPHLHDCAC$$AJJLBBCJAAL @ RVA 0x347838C

System_String_o *
ECFPHLHDCAC__AJJLBBCJAAL(ECFPHLHDCAC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_String_o *str1;
  int32_t local_44;
  System_Nullable_int__Fields local_38;
  
  if ((DAT_0456833b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6033);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6034);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&OLKKAIFGGAK_TypeInfo);
    DAT_0456833b = 1;
  }
  local_44 = 0;
  local_38 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)local_38 & 0xff) == 0) {
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_38,0,Method_System_Nullable<int>__ctor__);
  }
  iVar1 = System_Nullable<int>__get_Value
                    ((System_Nullable_int__o)&local_38,Method_System_Nullable<int>_get_Value__);
  OLKKAIFGGAK_TypeInfo->static_fields->PCECHCGMNBH = iVar1 != 0;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6033,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6034,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_44 = System_Nullable<int>__get_Value
                       ((System_Nullable_int__o)&local_38,Method_System_Nullable<int>_get_Value__);
  str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
  return pSVar2;
}

