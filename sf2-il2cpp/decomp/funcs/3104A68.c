// MGENAMAJALB$$CPIACIDINLI @ RVA 0x3104A68

System_String_o * MGENAMAJALB__CPIACIDINLI(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045664e9 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1557);
    DAT_045664e9 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_String__Concat
                     (MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,StringLiteral_1557,
                      (MethodInfo *)0x0);
  return pSVar1;
}

