// Nekki.SF2.Core.Fights.ModelContainer$$IHLKNJDGOMK @ RVA 0x355F6FC

int32_t Nekki_SF2_Core_Fights_ModelContainer__IHLKNJDGOMK
                  (Nekki_SF2_Core_Fights_ModelContainer_o *__this,System_String_o *ACCIHBHMFPN,
                  MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  undefined8 *puVar3;
  
  if ((DAT_04568bc0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_4617);
    FUN_01bab630(&StringLiteral_3076);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_10491);
    FUN_01bab630(&StringLiteral_6589);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_7066);
    DAT_04568bc0 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (uVar2 < 0x93d79fb3) {
    if (uVar2 < 0x1d39e33f) {
      if (uVar2 == 0x1c5c36fb) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6589,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 7;
      }
      if (uVar2 != 0x1d39e33e) {
        return 0;
      }
      puVar3 = &StringLiteral_10823;
    }
    else {
      if (uVar2 == 0x84b84174) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3076,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 1;
      }
      if (uVar2 == 0x93d79fb2) {
        puVar3 = &StringLiteral_4617;
        goto LAB_0365f984;
      }
      if (uVar2 != 0x3e128863) {
        return 0;
      }
      puVar3 = &StringLiteral_10876;
    }
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return 8;
    }
  }
  else {
    if (uVar2 < 0xb960112d) {
      if (uVar2 == 0x9d9dc599) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_7066,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 3;
      }
      if (uVar2 == 0xb7c10361) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_14870,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 2;
      }
      if (uVar2 != 0xb960112c) {
        return 0;
      }
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8772,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 5;
    }
    if (uVar2 == 0xcb2ec7a2) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11017,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 4;
    }
    if (uVar2 == 0xcd17328e) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10491,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 9;
    }
    if (uVar2 != 0xea117bb0) {
      return 0;
    }
    puVar3 = &StringLiteral_11073;
LAB_0365f984:
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return 6;
    }
  }
  return 0;
}

