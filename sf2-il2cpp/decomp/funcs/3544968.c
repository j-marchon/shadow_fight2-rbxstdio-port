// LEGDPJHPEOB$$PNKIKHNEDGH @ RVA 0x3544968

int32_t LEGDPJHPEOB__PNKIKHNEDGH(System_String_o *HJBFKFHHAEO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04568b0f & 1) == 0) {
    FUN_01bab630(&StringLiteral_2948);
    FUN_01bab630(&StringLiteral_9975);
    DAT_04568b0f = 1;
  }
  bVar1 = System_String__op_Equality(HJBFKFHHAEO,StringLiteral_9975,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(HJBFKFHHAEO,StringLiteral_2948,(MethodInfo *)0x0);
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

