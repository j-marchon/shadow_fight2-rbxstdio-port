// JGELBDHDHAO$$Clone @ RVA 0x3504508

JGELBDHDHAO_o * JGELBDHDHAO__Clone(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  JGELBDHDHAO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568884 & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    DAT_04568884 = 1;
    method = extraout_x1;
  }
  __this_00 = (JGELBDHDHAO_o *)thunk_FUN_01bda818(JGELBDHDHAO_TypeInfo,method);
  JGELBDHDHAO___ctor(__this_00,__this,in_x2);
  return __this_00;
}

