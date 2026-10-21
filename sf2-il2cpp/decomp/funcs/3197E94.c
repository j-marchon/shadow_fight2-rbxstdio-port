// OMMDIMHOHLK$$CPAKOHBPIPI @ RVA 0x3197E94

System_String_o * OMMDIMHOHLK__CPAKOHBPIPI(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566a89 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12538);
    FUN_01bab630(&StringLiteral_8693);
    FUN_01bab630(&StringLiteral_9253);
    FUN_01bab630(&StringLiteral_4203);
    FUN_01bab630(&StringLiteral_10840);
    FUN_01bab630(&StringLiteral_5770);
    FUN_01bab630(&StringLiteral_5245);
    FUN_01bab630(&StringLiteral_5055);
    FUN_01bab630(&StringLiteral_12164);
    DAT_04566a89 = 1;
  }
  switch(BKFOLMBMFNP) {
  case 7:
    puVar1 = &StringLiteral_5245;
    break;
  case 8:
    puVar1 = &StringLiteral_5770;
    break;
  case 9:
    puVar1 = &StringLiteral_9253;
    break;
  case 10:
    puVar1 = &StringLiteral_12164;
    break;
  case 0xb:
    puVar1 = &StringLiteral_4203;
    break;
  case 0xc:
    puVar1 = &StringLiteral_8693;
    break;
  case 0xd:
    puVar1 = &StringLiteral_5055;
    break;
  case 0xe:
    puVar1 = &StringLiteral_12538;
    break;
  case 0xf:
    puVar1 = &StringLiteral_10840;
    break;
  default:
    return (System_String_o *)0x0;
  }
  return (System_String_o *)*puVar1;
}

