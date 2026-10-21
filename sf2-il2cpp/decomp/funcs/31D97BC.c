// DBGBHDDCAJC$$CKLKBKIECEF @ RVA 0x31D97BC

System_String_o *
DBGBHDDCAJC__CKLKBKIECEF
          (System_String_o *KDPNKJLDLAG,System_String_o *NBBPAKAGEOP,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)NBBPAKAGEOP;
  if ((DAT_04566d08 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302);
    DAT_04566d08 = 1;
    method_00 = extraout_x1;
  }
  iVar1 = DBGBHDDCAJC__DHJEDGPHIEL(NBBPAKAGEOP,method_00);
  if (iVar1 - 2U < 2) {
    pSVar2 = DBGBHDDCAJC__POBBPPFDCJB(KDPNKJLDLAG,method_01);
    return pSVar2;
  }
  if (iVar1 == 1) {
    pSVar2 = DBGBHDDCAJC__MBFFGMHMHML(KDPNKJLDLAG,method_01);
    return pSVar2;
  }
  return StringLiteral_8302;
}

