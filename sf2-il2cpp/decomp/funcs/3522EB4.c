// LLKDCCJMFLE$$JGNHBFFLBIB @ RVA 0x3522EB4

bool LLKDCCJMFLE__JGNHBFFLBIB(MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  
  if ((DAT_045689e4 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_045689e4 = 1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
  }
  bVar1 = LLKDCCJMFLE__ELJDBJCJAEF((MethodInfo *)method_00);
  return bVar1;
}

