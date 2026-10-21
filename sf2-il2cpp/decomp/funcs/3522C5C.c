// LLKDCCJMFLE$$GBFOJMJMAMF @ RVA 0x3522C5C

bool LLKDCCJMFLE__GBFOJMJMAMF(MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  LLKDCCJMFLE_c *method_00;
  System_String_o *KDPNKJLDLAG;
  System_String_o *b;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar2;
  
                    /* try { // try from 03622c64 to 03722c6f has its CatchHandler @ 03622590 */
                    /* try { // try from 03622c70 to 03722c77 has its CatchHandler @ 03622c78 */
  if ((DAT_045689e1 & 1) == 0) {
                    /* catch() { ... } // from try @ 03622bf4 with catch @ 03622c78
                       catch() { ... } // from try @ 03622c70 with catch @ 03622c78 */
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_6978);
    DAT_045689e1 = 1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
  }
  KDPNKJLDLAG = LLKDCCJMFLE__IDCJKHFCJKM((MethodInfo *)method_00);
  GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar1 = GNAFJMPJNKI__NCOIGMBGENK(GMGGINDHNPI,(MethodInfo *)0x0);
  b = StringLiteral_6978;
  if (bVar1) {
    pMVar2 = extraout_x1;
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar2 = extraout_x1_00;
    }
    b = LLKDCCJMFLE__JPAHNBCHDGK(KDPNKJLDLAG,pMVar2);
  }
  bVar1 = System_String__op_Inequality(KDPNKJLDLAG,b,(MethodInfo *)0x0);
  if (bVar1) {
    pMVar2 = extraout_x1_01;
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar2 = extraout_x1_02;
    }
    LLKDCCJMFLE__BJGGBNJEDLM(b,pMVar2);
  }
  return bVar1;
}

