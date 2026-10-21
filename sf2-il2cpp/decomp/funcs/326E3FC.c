// ECNCJPCKOLN$$BJFJNFFFDCH @ RVA 0x326E3FC

System_String_o * ECNCJPCKOLN__BJFJNFFFDCH(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04567205 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3279);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_2529);
    DAT_04567205 = 1;
  }
  if ((uint)OHLKNCPBCBL < 4) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_2529_03fc6580)[OHLKNCPBCBL];
  }
  else {
    puVar1 = &StringLiteral_1;
  }
  return (System_String_o *)*puVar1;
}

