// JCFJFJCKLKG$$Clone @ RVA 0x3331BA0

JCFJFJCKLKG_o * JCFJFJCKLKG__Clone(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  JCFJFJCKLKG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567913 & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    DAT_04567913 = 1;
    method = extraout_x1;
  }
  __this_00 = (JCFJFJCKLKG_o *)thunk_FUN_01bda818(JCFJFJCKLKG_TypeInfo,method);
  JCFJFJCKLKG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

