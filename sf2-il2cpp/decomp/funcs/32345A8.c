// DLOALGNBPNL$$Clone @ RVA 0x32345A8

DLOALGNBPNL_o * DLOALGNBPNL__Clone(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  DLOALGNBPNL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456700d & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    DAT_0456700d = 1;
    method = extraout_x1;
  }
  __this_00 = (DLOALGNBPNL_o *)thunk_FUN_01bda818(DLOALGNBPNL_TypeInfo,method);
  DLOALGNBPNL___ctor(__this_00,__this,in_x2);
  return __this_00;
}

