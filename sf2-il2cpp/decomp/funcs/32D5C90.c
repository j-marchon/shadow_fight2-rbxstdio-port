// EAJJPPPJENA$$Clone @ RVA 0x32D5C90

EAJJPPPJENA_o * EAJJPPPJENA__Clone(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  EAJJPPPJENA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567587 & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    DAT_04567587 = 1;
    method = extraout_x1;
  }
  __this_00 = (EAJJPPPJENA_o *)thunk_FUN_01bda818(EAJJPPPJENA_TypeInfo,method);
  EAJJPPPJENA___ctor(__this_00,__this,in_x2);
  return __this_00;
}

