// HEINPCIAMNL$$ODPFFKGFEKI @ RVA 0x311D334

int32_t HEINPCIAMNL__ODPFFKGFEKI
                  (System_String_o *JLNPKGGFFDD,int32_t NGFCPILIEFN,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
  if ((DAT_04566602 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12538);
    FUN_01bab630(&StringLiteral_8693);
    FUN_01bab630(&StringLiteral_4203);
    FUN_01bab630(&StringLiteral_2774);
    FUN_01bab630(&StringLiteral_11376);
    FUN_01bab630(&StringLiteral_10840);
    FUN_01bab630(&StringLiteral_7627);
    FUN_01bab630(&StringLiteral_14785);
    FUN_01bab630(&StringLiteral_5055);
    FUN_01bab630(&StringLiteral_14792);
    FUN_01bab630(&StringLiteral_12164);
    DAT_04566602 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(JLNPKGGFFDD,(MethodInfo *)0x0);
  if (uVar2 < 0x38940054) {
    if (uVar2 < 0xb33a0e7) {
      if (uVar2 == 0x7748e11) {
        bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_4203,(MethodInfo *)0x0);
        if (bVar1) {
          NGFCPILIEFN = 0xb;
        }
      }
      else if ((uVar2 == 0xb33a0e6) &&
              (bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_12538,(MethodInfo *)0x0)
              , bVar1)) {
        NGFCPILIEFN = 0xe;
      }
    }
    else if (uVar2 == 0xebbc236) {
      bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_11376,(MethodInfo *)0x0);
      if (bVar1) {
        NGFCPILIEFN = 7;
      }
    }
    else if (uVar2 == 0x22f5f4a1) {
      bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_2774,(MethodInfo *)0x0);
      if (bVar1) {
        NGFCPILIEFN = 0x11;
      }
    }
    else if ((uVar2 == 0x38940053) &&
            (bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_7627,(MethodInfo *)0x0),
            bVar1)) {
      NGFCPILIEFN = 0x10;
    }
  }
  else if (uVar2 < 0x70892f86) {
    if (uVar2 == 0x47dce1a5) {
      bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_10840,(MethodInfo *)0x0);
      if (bVar1) {
        NGFCPILIEFN = 0xf;
      }
    }
    else if (uVar2 == 0x5b67c80c) {
      bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_14785,(MethodInfo *)0x0);
      if (bVar1) {
        NGFCPILIEFN = 8;
      }
    }
    else if ((uVar2 == 0x70892f85) &&
            (bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_5055,(MethodInfo *)0x0),
            bVar1)) {
      NGFCPILIEFN = 0xd;
    }
  }
  else if (uVar2 == 0xa13c5793) {
    bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_14792,(MethodInfo *)0x0);
    if (bVar1) {
      NGFCPILIEFN = 9;
    }
  }
  else if (uVar2 == 0xdf2b690e) {
    bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_8693,(MethodInfo *)0x0);
    if (bVar1) {
      NGFCPILIEFN = 0xc;
    }
  }
  else if ((uVar2 == 0x72b1c3ea) &&
          (bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_12164,(MethodInfo *)0x0),
          bVar1)) {
    NGFCPILIEFN = 10;
  }
  return NGFCPILIEFN;
}

