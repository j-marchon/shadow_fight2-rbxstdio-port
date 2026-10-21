// MGENAMAJALB$$ANDNJCLBPGJ @ RVA 0x31048D8

System_String_o * MGENAMAJALB__ANDNJCLBPGJ(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045664ee & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1522);
    DAT_045664ee = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_String__Concat
                     (MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,StringLiteral_1522,
                      (MethodInfo *)0x0);
  return pSVar1;
}

