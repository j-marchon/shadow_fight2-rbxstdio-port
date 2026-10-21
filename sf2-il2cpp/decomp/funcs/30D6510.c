// CONLFJJLALA$$LJFOPOPKNCL @ RVA 0x30D6510

int32_t CONLFJJLALA__LJFOPOPKNCL(System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
  if ((DAT_04566332 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10848);
    FUN_01bab630(&StringLiteral_10963);
    FUN_01bab630(&StringLiteral_10858);
    FUN_01bab630(&StringLiteral_13976);
    FUN_01bab630(&StringLiteral_10805);
    FUN_01bab630(&StringLiteral_8371);
    FUN_01bab630(&StringLiteral_6487);
    DAT_04566332 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(OOGPLJBADCD,(MethodInfo *)0x0);
  if (uVar2 < 0x9e9f1308) {
    if (uVar2 == 0x9b8b1e2f) {
      bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_10805,(MethodInfo *)0x0);
      if (bVar1) {
        return -10;
      }
    }
    else if (uVar2 == 0x9e9f1307) {
      bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_6487,(MethodInfo *)0x0);
      if (bVar1) {
        return 10;
      }
    }
    else if ((uVar2 == 0xad3adb6) &&
            (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_8371,(MethodInfo *)0x0),
            bVar1)) {
      return 0x1e;
    }
  }
  else if (uVar2 < 0xcef5f626) {
    if (uVar2 == 0xaaf7b5bc) {
      bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_13976,(MethodInfo *)0x0);
      if (bVar1) {
        return 0x32;
      }
    }
    else if ((uVar2 == 0xcef5f625) &&
            (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_10848,(MethodInfo *)0x0),
            bVar1)) {
      return 0x14;
    }
  }
  else if (uVar2 == 0xd4f57fae) {
    bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_10963,(MethodInfo *)0x0);
    if (bVar1) {
      return 0x28;
    }
  }
  else if ((uVar2 == 0xfcbd38b9) &&
          (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_10858,(MethodInfo *)0x0),
          bVar1)) {
    return 0;
  }
  return -0x14;
}

