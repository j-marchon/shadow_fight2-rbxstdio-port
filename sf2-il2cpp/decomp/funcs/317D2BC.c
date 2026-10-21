// JADGCGOJLJB$$PKKPCLFNEDC @ RVA 0x317D2BC

int32_t JADGCGOJLJB__PKKPCLFNEDC(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04566995 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508);
    FUN_01bab630(&StringLiteral_3160);
    FUN_01bab630(&StringLiteral_7903);
    FUN_01bab630(&StringLiteral_7896);
    DAT_04566995 = 1;
  }
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3160,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3508,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 5;
    }
    else {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_7903,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 6;
      }
      else {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_7896,(MethodInfo *)0x0);
        iVar2 = 7;
        if (!bVar1) {
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

