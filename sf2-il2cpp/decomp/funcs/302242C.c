// OKKPDLAJBFD$$Clone @ RVA 0x302242C

OKKPDLAJBFD_o * OKKPDLAJBFD__Clone(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  OKKPDLAJBFD_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565c5c & 1) == 0) {
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    DAT_04565c5c = 1;
    method = extraout_x1;
  }
  __this_00 = (OKKPDLAJBFD_o *)thunk_FUN_01bda818(OKKPDLAJBFD_TypeInfo,method);
  OKKPDLAJBFD___ctor(__this_00,__this,in_x2);
  return __this_00;
}

