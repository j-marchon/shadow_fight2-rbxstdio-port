// LLKDCCJMFLE$$EJFBCLIKGJF @ RVA 0x3523220

void LLKDCCJMFLE__EJFBCLIKGJF(MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  MethodInfo *method_01;
  
  if ((DAT_045689e7 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_045689e7 = 1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
  }
  bVar1 = LLKDCCJMFLE__JGNHBFFLBIB((MethodInfo *)method_00);
  LLKDCCJMFLE__PJJDBFDMHHI((bool)(~bVar1 & 1),method_01);
  return;
}

