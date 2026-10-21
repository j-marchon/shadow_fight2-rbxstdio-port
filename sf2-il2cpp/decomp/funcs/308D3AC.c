// KKGHPKOFEHM$$Clone @ RVA 0x308D3AC

KKGHPKOFEHM_o * KKGHPKOFEHM__Clone(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  KKGHPKOFEHM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456606b & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    DAT_0456606b = 1;
    method = extraout_x1;
  }
  __this_00 = (KKGHPKOFEHM_o *)thunk_FUN_01bda818(KKGHPKOFEHM_TypeInfo,method);
  KKGHPKOFEHM___ctor(__this_00,__this,in_x2);
  return __this_00;
}

