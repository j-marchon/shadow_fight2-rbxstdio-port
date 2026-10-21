// DBGBHDDCAJC$$IPNPDKDBIGC @ RVA 0x31D9690

System_String_o * DBGBHDDCAJC__IPNPDKDBIGC(int32_t KGLJICLJHEL,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566d05 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302);
    FUN_01bab630(&StringLiteral_6978);
    FUN_01bab630(&StringLiteral_9299);
    FUN_01bab630(&StringLiteral_8719);
    DAT_04566d05 = 1;
  }
  if ((uint)KGLJICLJHEL < 3) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_8302_03fc6510)[KGLJICLJHEL];
  }
  else {
    puVar1 = &StringLiteral_9299;
  }
  return (System_String_o *)*puVar1;
}

