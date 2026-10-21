// JMCDPBKILIN$$Clone @ RVA 0x3129490

JMCDPBKILIN_o * JMCDPBKILIN__Clone(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  JMCDPBKILIN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456667f & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_0456667f = 1;
    method = extraout_x1;
  }
  __this_00 = (JMCDPBKILIN_o *)thunk_FUN_01bda818(JMCDPBKILIN_TypeInfo,method);
  JMCDPBKILIN___ctor(__this_00,__this,in_x2);
  return __this_00;
}

