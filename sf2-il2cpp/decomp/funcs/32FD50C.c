// PGICCMFLDPI$$Clone @ RVA 0x32FD50C

PGICCMFLDPI_o * PGICCMFLDPI__Clone(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  PGICCMFLDPI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045676f9 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045676f9 = 1;
    method = extraout_x1;
  }
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo,method);
  PGICCMFLDPI___ctor(__this_00,__this,in_x2);
  return __this_00;
}

