// NLPJLHOEAOE$$DGBOOECJDDG @ RVA 0x3206D08

System_String_o * NLPJLHOEAOE__DGBOOECJDDG(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566e34 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_22364);
    FUN_01bab630(&StringLiteral_21895);
    DAT_04566e34 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  pSVar1 = System_String__Format
                     (StringLiteral_22364,(Il2CppObject *)pSVar1,StringLiteral_21895,
                      (MethodInfo *)0x0);
  return pSVar1;
}

