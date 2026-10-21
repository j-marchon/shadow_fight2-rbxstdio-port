// BPOJGPCCMPD$$AJJLBBCJAAL @ RVA 0x31CB590

System_String_o *
BPOJGPCCMPD__AJJLBBCJAAL(BPOJGPCCMPD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566c6d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4991);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4992);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4993);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4994);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566c6d = 1;
  }
  pSVar1 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (pSVar1 == (System_String_o *)0x0) {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4991,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4992,(MethodInfo *)0x0)
    ;
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  BPOJGPCCMPD__DHAAGKPHJLA(pSVar1,method_00);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4993,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4994,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  return pSVar1;
}

