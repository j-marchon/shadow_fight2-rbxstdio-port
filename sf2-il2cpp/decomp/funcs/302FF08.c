// BFKOGEBDAEH$$GKMAFGODLLG @ RVA 0x302FF08

System_String_o * BFKOGEBDAEH__GKMAFGODLLG(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04565cf2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4417);
    FUN_01bab630(&StringLiteral_4415);
    FUN_01bab630(&StringLiteral_4413);
    FUN_01bab630(&StringLiteral_4416);
    FUN_01bab630(&StringLiteral_4414);
    DAT_04565cf2 = 1;
  }
  if (CJNHFNHJHPE - 1U < 8) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_4416_03fc6308)[(int)(CJNHFNHJHPE - 1U)];
  }
  else {
    puVar1 = &StringLiteral_4413;
  }
  return (System_String_o *)*puVar1;
}

