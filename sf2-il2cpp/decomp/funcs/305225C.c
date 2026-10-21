// IKMOIKFPPBF$$PCPAFLBHBMF @ RVA 0x305225C

System_String_o * IKMOIKFPPBF__PCPAFLBHBMF(System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  IKMOIKFPPBF_c *method_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e55 & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    DAT_04565e55 = 1;
    method = extraout_x1;
  }
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IKMOIKFPPBF_TypeInfo,method);
  }
  value = IBMPAMLCCHF__EOJPLECOGAD
                    (EHNFGMGKCHO,IKMOIKFPPBF_TypeInfo->static_fields->EDCHCICLDBD,
                     IKMOIKFPPBF_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    method_00 = IKMOIKFPPBF_TypeInfo;
    if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
    }
    IKMOIKFPPBF__GKLMBGBOODF((MethodInfo *)method_00);
  }
  return value;
}

