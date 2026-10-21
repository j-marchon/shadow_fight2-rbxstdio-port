// FLDDBCHHMNC$$AJJLBBCJAAL @ RVA 0x30A7098

System_String_o *
FLDDBCHHMNC__AJJLBBCJAAL(FLDDBCHHMNC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  System_String_o *str1;
  float __this_00;
  float local_34;
  
  if ((DAT_04566179 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6379);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6380);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6381);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6382);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04566179 = 1;
  }
  local_34 = 0.0;
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6379,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6380,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
  }
  if (DAT_045661db == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_045661db = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_34 = FCJBEKHDLAF_TypeInfo->static_fields->_KLEIGLIICNB_k__BackingField;
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6381,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6382,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  str1 = System_Single__ToString(__this_00,(System_String_o *)&local_34,method_00);
  pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
  return pSVar3;
}

