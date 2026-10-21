// FEPCHKMAIBL$$BHCOJOPEOHH @ RVA 0x32C4748

void FEPCHKMAIBL__BHCOJOPEOHH(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  FEPCHKMAIBL_c *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674e4 & 1) == 0) {
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    DAT_045674e4 = 1;
    method = extraout_x1;
  }
  if (BKFOLMBMFNP == 10) {
    method_00 = FEPCHKMAIBL_TypeInfo;
    if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (FEPCHKMAIBL_c *)thunk_FUN_01ba7564(FEPCHKMAIBL_TypeInfo,method);
    }
    FEPCHKMAIBL__DGLJCGNHLIG((MethodInfo *)method_00);
    FEPCHKMAIBL__IKAAFAICDMD(method_01);
    return;
  }
  return;
}

