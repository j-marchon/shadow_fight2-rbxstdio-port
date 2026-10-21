// GLPEFEEGCPM$$Clone @ RVA 0x3224F10

GLPEFEEGCPM_o * GLPEFEEGCPM__Clone(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  GLPEFEEGCPM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566f6f & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_04566f6f = 1;
    method = extraout_x1;
  }
  __this_00 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo,method);
  GLPEFEEGCPM___ctor(__this_00,__this,in_x2);
  return __this_00;
}

