// OMFJHNMDIBF$$Clone @ RVA 0x343F118

OMFJHNMDIBF_o * OMFJHNMDIBF__Clone(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  OMFJHNMDIBF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568206 & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_04568206 = 1;
    method = extraout_x1;
  }
  __this_00 = (OMFJHNMDIBF_o *)thunk_FUN_01bda818(OMFJHNMDIBF_TypeInfo,method);
  OMFJHNMDIBF___ctor(__this_00,__this,in_x2);
  return __this_00;
}

