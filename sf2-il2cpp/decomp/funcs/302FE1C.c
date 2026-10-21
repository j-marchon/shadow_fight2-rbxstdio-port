// BFKOGEBDAEH$$CCIALCAAHKG @ RVA 0x302FE1C

int32_t BFKOGEBDAEH__CCIALCAAHKG(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04565cf1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4417);
    FUN_01bab630(&StringLiteral_4415);
    FUN_01bab630(&StringLiteral_4416);
    FUN_01bab630(&StringLiteral_4414);
    DAT_04565cf1 = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_4416,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_4417,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_4414,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 4;
      }
      else {
        bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_4415,(MethodInfo *)0x0);
        iVar2 = 8;
        if (!bVar1) {
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

