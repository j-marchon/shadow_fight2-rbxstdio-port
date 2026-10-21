// LFELBGMCDHD$$Clone @ RVA 0x33A0348

LFELBGMCDHD_o * LFELBGMCDHD__Clone(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  LFELBGMCDHD_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567ca9 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    DAT_04567ca9 = 1;
    method = extraout_x1;
  }
  __this_00 = (LFELBGMCDHD_o *)thunk_FUN_01bda818(LFELBGMCDHD_TypeInfo,method);
  LFELBGMCDHD___ctor(__this_00,__this,in_x2);
  return __this_00;
}

