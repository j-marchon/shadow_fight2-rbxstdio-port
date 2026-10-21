// NLPJLHOEAOE$$LJAKPLJDGBJ @ RVA 0x31FCBB8

System_String_o * NLPJLHOEAOE__LJAKPLJDGBJ(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566e3c & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_21892);
    FUN_01bab630(&StringLiteral_22364);
    DAT_04566e3c = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  pSVar1 = System_String__Format
                     (StringLiteral_22364,(Il2CppObject *)pSVar1,StringLiteral_21892,
                      (MethodInfo *)0x0);
  return pSVar1;
}

