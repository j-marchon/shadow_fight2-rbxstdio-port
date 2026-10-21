// IDGOGBNEGAM$$NPAOCMPEILP @ RVA 0x3099D18

System_String_o * IDGOGBNEGAM__NPAOCMPEILP(int32_t EFJNKONCKNF,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566108 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11400);
    FUN_01bab630(&StringLiteral_11398);
    FUN_01bab630(&StringLiteral_11401);
    FUN_01bab630(&StringLiteral_11399);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566108 = 1;
  }
  if (EFJNKONCKNF - 1U < 4) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_11399_03fc63d8)[(int)(EFJNKONCKNF - 1U)];
  }
  else {
    puVar1 = &StringLiteral_1;
  }
  return (System_String_o *)*puVar1;
}

