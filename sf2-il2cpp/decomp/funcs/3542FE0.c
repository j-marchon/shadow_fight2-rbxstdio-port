// LEGDPJHPEOB$$EOGEJOBHJMC @ RVA 0x3542FE0

int32_t LEGDPJHPEOB__EOGEJOBHJMC(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  undefined8 *puVar3;
  
  if ((DAT_04568b08 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_5754);
    FUN_01bab630(&StringLiteral_12391);
    FUN_01bab630(&StringLiteral_2948);
    FUN_01bab630(&StringLiteral_6908);
    FUN_01bab630(&StringLiteral_8404);
    FUN_01bab630(&StringLiteral_9975);
    FUN_01bab630(&StringLiteral_6906);
    FUN_01bab630(&StringLiteral_4560);
    FUN_01bab630(&StringLiteral_5832);
    FUN_01bab630(&StringLiteral_4624);
    FUN_01bab630(&StringLiteral_9968);
    FUN_01bab630(&StringLiteral_8406);
    DAT_04568b08 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (uVar2 < 0x5ce477a5) {
    if (uVar2 < 0x21e5581e) {
      if (uVar2 == 0x16f8b8f) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5832,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 1;
      }
      if (uVar2 == 0xcceca53) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6908,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 3;
      }
      if (uVar2 != 0x21e5581d) {
        return 0;
      }
      puVar3 = &StringLiteral_9968;
    }
    else {
      if (uVar2 == 0x37463de4) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_12391,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 9;
      }
      if (uVar2 == 0x51cba6d7) {
        puVar3 = &StringLiteral_4577;
        goto LAB_0364331c;
      }
      if (uVar2 != 0x5ce477a4) {
        return 0;
      }
      puVar3 = &StringLiteral_9975;
    }
  }
  else {
    if (0x96ddac39 < uVar2) {
      if (uVar2 < 0xc7232af1) {
        if (uVar2 == 0xa197a3d8) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8404,(MethodInfo *)0x0);
          if (!bVar1) {
            return 0;
          }
          return 4;
        }
        if (uVar2 != 0xc7232af0) {
          return 0;
        }
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8406,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 5;
      }
      if (uVar2 != 0xcca3205e) {
        if (uVar2 != 0xfe231bbb) {
          return 0;
        }
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5754,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 10;
      }
      puVar3 = &StringLiteral_4560;
LAB_0364331c:
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 7;
    }
    if (uVar2 == 0x96ddac39) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6906,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 2;
    }
    if (uVar2 == 0x669c4958) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4624,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 8;
    }
    if (uVar2 != 0x71b5ed46) {
      return 0;
    }
    puVar3 = &StringLiteral_2948;
  }
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
  return 6;
}

