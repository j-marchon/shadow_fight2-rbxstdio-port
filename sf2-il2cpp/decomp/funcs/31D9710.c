// DBGBHDDCAJC$$POBBPPFDCJB @ RVA 0x31D9710

System_String_o * DBGBHDDCAJC__POBBPPFDCJB(System_String_o *KDPNKJLDLAG,MethodInfo *method)

{
  bool bVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566d06 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302);
    FUN_01bab630(&StringLiteral_6978);
    FUN_01bab630(&StringLiteral_8719);
    DAT_04566d06 = 1;
  }
  bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_8302,(MethodInfo *)0x0);
  puVar2 = &StringLiteral_8719;
  if (!bVar1) {
    bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_8719,(MethodInfo *)0x0);
    puVar2 = &StringLiteral_6978;
    if ((!bVar1) &&
       (bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_6978,(MethodInfo *)0x0),
       puVar2 = &StringLiteral_8302, !bVar1)) {
      puVar2 = &StringLiteral_6978;
    }
  }
  return (System_String_o *)*puVar2;
}

