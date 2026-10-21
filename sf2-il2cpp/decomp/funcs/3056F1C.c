// NHBBOEHHEKG$$DELGACJHIMA @ RVA 0x3056F1C

System_String_o * NHBBOEHHEKG__DELGACJHIMA(System_String_o *JEDJNEFCHFH,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e6f & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_22365);
    FUN_01bab630(&StringLiteral_20153);
    DAT_04565e6f = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__DPOEFEMDMJI((MethodInfo *)0x0);
  pSVar1 = System_String__Format
                     (StringLiteral_22365,(Il2CppObject *)pSVar1,(Il2CppObject *)JEDJNEFCHFH,
                      StringLiteral_20153,(MethodInfo *)0x0);
  return pSVar1;
}

