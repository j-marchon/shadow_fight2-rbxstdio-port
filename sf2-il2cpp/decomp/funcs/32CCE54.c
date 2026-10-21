// BOFEMGGNODC$$FOLPIHAMEJE @ RVA 0x32CCE54

uint8_t BOFEMGGNODC__FOLPIHAMEJE(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  uint8_t uVar2;
  
  if ((DAT_04567525 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14806);
    FUN_01bab630(&StringLiteral_12132);
    DAT_04567525 = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_12132,(MethodInfo *)0x0);
  if (bVar1) {
    uVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_14806,(MethodInfo *)0x0);
    uVar2 = 2;
    if (!bVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

