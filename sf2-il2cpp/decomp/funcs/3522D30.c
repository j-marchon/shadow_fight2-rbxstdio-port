// LLKDCCJMFLE$$GBFOJMJMAMF @ RVA 0x3522D30

bool LLKDCCJMFLE__GBFOJMJMAMF(int32_t KDPNKJLDLAG,MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  System_String_o *a;
  System_String_o *b;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  
  if ((DAT_045689e2 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_045689e2 = 1;
    method = extraout_x1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  a = LLKDCCJMFLE__IDCJKHFCJKM((MethodInfo *)method_00);
  b = DBGBHDDCAJC__IPNPDKDBIGC(KDPNKJLDLAG,(MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
  if (bVar1) {
    method_01 = extraout_x1_00;
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_01 = extraout_x1_01;
    }
    LLKDCCJMFLE__BJGGBNJEDLM(b,method_01);
  }
  return bVar1;
}

