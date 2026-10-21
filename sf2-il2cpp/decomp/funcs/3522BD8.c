// LLKDCCJMFLE$$JPAHNBCHDGK @ RVA 0x3522BD8

System_String_o * LLKDCCJMFLE__JPAHNBCHDGK(System_String_o *KDPNKJLDLAG,MethodInfo *method)

{
  bool bVar1;
  System_String_o *NBBPAKAGEOP;
  System_String_o *IMJHEANBDDA;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03622bd0 with catch @ 03622be4 */
                    /* try { // try from 03622bf4 to 03722c63 has its CatchHandler @ 03622c78 */
  if ((DAT_045689e0 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045689e0 = 1;
    method = extraout_x1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
  }
  NBBPAKAGEOP = EOAOCPLIKOI__IDCJKHFCJKM((MethodInfo *)0x0);
  IMJHEANBDDA = DBGBHDDCAJC__CKLKBKIECEF(KDPNKJLDLAG,NBBPAKAGEOP,(MethodInfo *)0x0);
  bVar1 = DBGBHDDCAJC__JPMFEKNGHJF(IMJHEANBDDA,NBBPAKAGEOP,(MethodInfo *)0x0);
  if (!bVar1) {
    KDPNKJLDLAG = IMJHEANBDDA;
  }
  return KDPNKJLDLAG;
}

