// AFLJMCMKCIG$$Clone @ RVA 0x3132A00

AFLJMCMKCIG_o * AFLJMCMKCIG__Clone(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  AFLJMCMKCIG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045666da & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_045666da = 1;
    method = extraout_x1;
  }
  __this_00 = (AFLJMCMKCIG_o *)thunk_FUN_01bda818(AFLJMCMKCIG_TypeInfo,method);
  AFLJMCMKCIG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

