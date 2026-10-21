// LLKDCCJMFLE$$IDCJKHFCJKM @ RVA 0x35229F4

System_String_o * LLKDCCJMFLE__IDCJKHFCJKM(MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_045689de & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045689de = 1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
  }
  pSVar2 = LLKDCCJMFLE__LIHIMKCJCKO((MethodInfo *)method_00);
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
  if (bVar1) {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = EOAOCPLIKOI__IDCJKHFCJKM((MethodInfo *)0x0);
    return pSVar2;
  }
  return pSVar2;
}

