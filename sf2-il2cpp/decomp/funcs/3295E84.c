// LJGNFBFLOCD$$AJJLBBCJAAL @ RVA 0x3295E84

System_String_o *
LJGNFBFLOCD__AJJLBBCJAAL(LJGNFBFLOCD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  LPGLKMNHELJ_o *__this_00;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *str1;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  
  if ((DAT_04567368 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6172);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6173);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6174);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6175);
    FUN_01bab630(&byte___TypeInfo);
    __this = (LJGNFBFLOCD_o *)FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    DAT_04567368 = 1;
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6172,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6173,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    str1 = LJGNFBFLOCD__IGMDDJFPIJL((LJGNFBFLOCD_o *)pSVar3,method_00);
    pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((int)OPAEPDIIOEB->max_length != 0) {
    pSVar3 = OPAEPDIIOEB->m_Items[0];
    __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
    LPGLKMNHELJ___ctor(__this_00,pSVar3,true,false,(MethodInfo *)0x0);
    JJPNLEPEAFM__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6174,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6175,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

