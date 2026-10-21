// OMMDIMHOHLK$$POBLIPFPGPD @ RVA 0x3197FD4

int32_t OMMDIMHOHLK__POBLIPFPGPD(System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
  if ((DAT_04566a8a & 1) == 0) {
    FUN_01bab630(&StringLiteral_12538);
    FUN_01bab630(&StringLiteral_8693);
    FUN_01bab630(&StringLiteral_6716);
    FUN_01bab630(&StringLiteral_9253);
    FUN_01bab630(&StringLiteral_4203);
    FUN_01bab630(&StringLiteral_10840);
    FUN_01bab630(&StringLiteral_5770);
    FUN_01bab630(&StringLiteral_5055);
    FUN_01bab630(&StringLiteral_12164);
    DAT_04566a8a = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(AFKICLAFDKC,(MethodInfo *)0x0);
  if (uVar2 < 0x17278db6) {
    if (uVar2 < 0x7748e12) {
      if (uVar2 == 0x428cc1d) {
        bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_6716,(MethodInfo *)0x0);
        if (bVar1) {
          return 7;
        }
      }
      else if ((uVar2 == 0x7748e11) &&
              (bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_4203,(MethodInfo *)0x0),
              bVar1)) {
        return 0xb;
      }
    }
    else if (uVar2 == 0xb33a0e6) {
      bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_12538,(MethodInfo *)0x0);
      if (bVar1) {
        return 0xe;
      }
    }
    else if ((uVar2 == 0x17278db5) &&
            (bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_5770,(MethodInfo *)0x0),
            bVar1)) {
      return 8;
    }
  }
  else if (uVar2 < 0x70892f86) {
    if (uVar2 == 0x47dce1a5) {
      bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_10840,(MethodInfo *)0x0);
      if (bVar1) {
        return 0xf;
      }
    }
    else if ((uVar2 == 0x70892f85) &&
            (bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_5055,(MethodInfo *)0x0),
            bVar1)) {
      return 0xd;
    }
  }
  else if (uVar2 == 0xb85dbc06) {
    bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_9253,(MethodInfo *)0x0);
    if (bVar1) {
      return 9;
    }
  }
  else if (uVar2 == 0xdf2b690e) {
    bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_8693,(MethodInfo *)0x0);
    if (bVar1) {
      return 0xc;
    }
  }
  else if ((uVar2 == 0x72b1c3ea) &&
          (bVar1 = System_String__op_Equality(AFKICLAFDKC,StringLiteral_12164,(MethodInfo *)0x0),
          bVar1)) {
    return 10;
  }
  return 0;
}

