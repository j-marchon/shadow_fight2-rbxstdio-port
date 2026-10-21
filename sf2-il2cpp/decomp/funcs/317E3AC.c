// ICBMOMGINFH$$Clone @ RVA 0x317E3AC

ICBMOMGINFH_o * ICBMOMGINFH__Clone(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  ICBMOMGINFH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045669a0 & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_045669a0 = 1;
    method = extraout_x1;
  }
  __this_00 = (ICBMOMGINFH_o *)thunk_FUN_01bda818(ICBMOMGINFH_TypeInfo,method);
  ICBMOMGINFH___ctor(__this_00,__this,in_x2);
  return __this_00;
}

