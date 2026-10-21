// MGENAMAJALB$$OGBJBBKMGCC @ RVA 0x3105970

System_String_o * MGENAMAJALB__OGBJBBKMGCC(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f7 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1543);
    DAT_045664f7 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1543,(MethodInfo *)0x0);
  return pSVar1;
}

