// BDMABHJEEGD$$Clone @ RVA 0x310C580

BDMABHJEEGD_o * BDMABHJEEGD__Clone(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  BDMABHJEEGD_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456654d & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_0456654d = 1;
    method = extraout_x1;
  }
  __this_00 = (BDMABHJEEGD_o *)thunk_FUN_01bda818(BDMABHJEEGD_TypeInfo,method);
  BDMABHJEEGD___ctor(__this_00,__this,in_x2);
  return __this_00;
}

