// DKDMBPOCAJL$$JHDLBBNGEGA @ RVA 0x2FF0620

System_String_o * DKDMBPOCAJL__JHDLBBNGEGA(int32_t EFJNKONCKNF,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04565a65 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4374);
    FUN_01bab630(&StringLiteral_4399);
    FUN_01bab630(&StringLiteral_4384);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_4400);
    DAT_04565a65 = 1;
  }
  if (EFJNKONCKNF - 1U < 4) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_4384_03fc6268)[(int)(EFJNKONCKNF - 1U)];
  }
  else {
    puVar1 = &StringLiteral_1;
  }
  return (System_String_o *)*puVar1;
}

