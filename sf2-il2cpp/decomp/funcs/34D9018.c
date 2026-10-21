// OJHLANCHFPC$$Clone @ RVA 0x34D9018

OJHLANCHFPC_o * OJHLANCHFPC__Clone(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  OJHLANCHFPC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045686f7 & 1) == 0) {
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    DAT_045686f7 = 1;
    method = extraout_x1;
  }
  __this_00 = (OJHLANCHFPC_o *)thunk_FUN_01bda818(OJHLANCHFPC_TypeInfo,method);
  OJHLANCHFPC___ctor(__this_00,__this,in_x2);
  return __this_00;
}

