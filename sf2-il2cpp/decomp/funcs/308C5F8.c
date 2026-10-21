// OCJNPDKKKCM$$AJJLBBCJAAL @ RVA 0x308C5F8

System_String_o *
OCJNPDKKKCM__AJJLBBCJAAL(OCJNPDKKKCM_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_String_o *str1;
  MethodInfo *method_00;
  UnityEngine_Resolution_o __this_00;
  UnityEngine_Resolution_Fields local_40;
  
  if ((DAT_04566061 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5904);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5905);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566061 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5904,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5905,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_40 = (UnityEngine_Resolution_Fields)
             UnityEngine_Screen__get_currentResolution((MethodInfo *)0x0);
  __this_00.fields.m_RefreshRate.fields.numerator = 0;
  __this_00.fields.m_RefreshRate.fields.denominator = 0;
  __this_00.fields._0_8_ = &local_40;
  str1 = UnityEngine_Resolution__ToString(__this_00,method_00);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}

