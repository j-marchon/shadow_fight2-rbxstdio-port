// IBMLPPNMDCI$$Clone @ RVA 0x30F6214

IBMLPPNMDCI_o * IBMLPPNMDCI__Clone(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  IBMLPPNMDCI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566459 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    DAT_04566459 = 1;
    method = extraout_x1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(__this_00,__this,in_x2);
  return __this_00;
}

