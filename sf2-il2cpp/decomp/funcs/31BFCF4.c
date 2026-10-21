// AACDHACBIPI$$AJJLBBCJAAL @ RVA 0x31BFCF4

System_String_o *
AACDHACBIPI__AJJLBBCJAAL(AACDHACBIPI_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t value;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_String_o *str1;
  int32_t local_3c;
  System_Nullable_int__Fields local_38;
  
  if ((DAT_04566c11 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6375);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6376);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_04566c11 = 1;
  }
  local_3c = 0;
  local_38 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)local_38 & 0xff) == 0) {
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_38,0x3c,Method_System_Nullable<int>__ctor__);
  }
  value = System_Nullable<int>__get_Value
                    ((System_Nullable_int__o)&local_38,Method_System_Nullable<int>_get_Value__);
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo);
  }
  UnityEngine_Application__set_targetFrameRate(value,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6375,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6376,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_3c = UnityEngine_Application__get_targetFrameRate((MethodInfo *)0x0);
  str1 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}

