// OBCMNBDBNFO$$Clone @ RVA 0x3502ECC

OBCMNBDBNFO_o * OBCMNBDBNFO__Clone(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  OBCMNBDBNFO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456886d & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_0456886d = 1;
    method = extraout_x1;
  }
  __this_00 = (OBCMNBDBNFO_o *)thunk_FUN_01bda818(OBCMNBDBNFO_TypeInfo,method);
  OBCMNBDBNFO___ctor(__this_00,__this,in_x2);
  return __this_00;
}

