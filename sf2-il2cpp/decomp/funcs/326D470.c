// ENKJOBOMOOB$$AJJLBBCJAAL @ RVA 0x326D470

System_String_o *
ENKJOBOMOOB__AJJLBBCJAAL(ENKJOBOMOOB_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_Nullable_int__o SVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  System_String_o *str2;
  SFButton_StaticFields *pSVar5;
  int32_t local_44;
  
  if ((DAT_045671f6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5099);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5100);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5101);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5102);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&SFButton_TypeInfo);
    DAT_045671f6 = 1;
  }
  local_44 = 0;
  SVar1 = AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)SVar1.fields & 0xff) == 0) {
    pSVar5 = SFButton_TypeInfo->static_fields;
    local_44 = pSVar5->ClickInvokeFramesOffset;
  }
  else {
    local_44 = SVar1.fields.value;
    pSVar5 = SFButton_TypeInfo->static_fields;
  }
  pSVar5->ClickInvokeFramesOffset = local_44;
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5099,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5100,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0336d5c0 to 0346d7a7 has its CatchHandler @ 0336d5c0
                       catch() { ... } // from try @ 0336d5c0 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dbb4 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dc20 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dd34 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dd74 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dd8c with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336de88 with catch @ 0336d5c0 */
  str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5101,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5102,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,str1,str2,(MethodInfo *)0x0);
  return pSVar4;
}

