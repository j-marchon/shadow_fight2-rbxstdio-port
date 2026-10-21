// IKMOIKFPPBF$$FHFADKNMJLB @ RVA 0x30526C4

System_Byte_array * IKMOIKFPPBF__FHFADKNMJLB(System_Byte_array *OCMMDIHLKMH,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  IKMOIKFPPBF_c *method_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e57 & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    DAT_04565e57 = 1;
    method = extraout_x1;
  }
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IKMOIKFPPBF_TypeInfo,method);
  }
  pSVar1 = IBMPAMLCCHF__FHFADKNMJLB
                     (OCMMDIHLKMH,IKMOIKFPPBF_TypeInfo->static_fields->EDCHCICLDBD,
                      IKMOIKFPPBF_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
  if (pSVar1 == (System_Byte_array *)0x0) {
    method_00 = IKMOIKFPPBF_TypeInfo;
    if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
    }
    IKMOIKFPPBF__GKLMBGBOODF((MethodInfo *)method_00);
    pSVar1 = (System_Byte_array *)0x0;
  }
  return pSVar1;
}

