// MPLEHFFCFEM$$KOIPLDCENFI @ RVA 0x34E2760

System_String_o * MPLEHFFCFEM__KOIPLDCENFI(bool LIEPGMFEIIK,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04568745 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3002);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3003);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    FUN_01bab630(&MPLEHFFCFEM_TypeInfo);
    DAT_04568745 = 1;
    method = extraout_x1;
  }
  if ((MPLEHFFCFEM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MPLEHFFCFEM_TypeInfo,method);
    method = extraout_x1_00;
  }
  MPLEHFFCFEM_TypeInfo->static_fields->KIMAADAKAFB = LIEPGMFEIIK;
  if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MDKJJDGLPKO_TypeInfo,method);
  }
  MDKJJDGLPKO__GIENGNEGHPJ((MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3002,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3003,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

