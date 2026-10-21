// NLBPJNEGNNM$$Clone @ RVA 0x3557300

NLBPJNEGNNM_o * NLBPJNEGNNM__Clone(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  NLBPJNEGNNM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568b72 & 1) == 0) {
    FUN_01bab630(&NLBPJNEGNNM_TypeInfo);
    DAT_04568b72 = 1;
    method = extraout_x1;
  }
  __this_00 = (NLBPJNEGNNM_o *)thunk_FUN_01bda818(NLBPJNEGNNM_TypeInfo,method);
  NLBPJNEGNNM___ctor(__this_00,__this,in_x2);
  return __this_00;
}

