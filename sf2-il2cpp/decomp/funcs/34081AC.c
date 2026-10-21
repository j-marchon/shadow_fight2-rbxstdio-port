// MGNPHCAAEIO$$JLNDJMOBBLI @ RVA 0x34081AC

int32_t MGNPHCAAEIO__JLNDJMOBBLI(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  
  if ((DAT_04568023 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568023 = 1;
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
    method = extraout_x1_00;
  }
  uVar1 = -CJNHFNHJHPE;
  if (-1 < CJNHFNHJHPE) {
    uVar1 = CJNHFNHJHPE;
  }
  if (uVar1 < 6) {
    return CJNHFNHJHPE;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar2 = MGNPHCAAEIO__AHIPAMALCCN(CJNHFNHJHPE,5,in_x2);
  return iVar2;
}

