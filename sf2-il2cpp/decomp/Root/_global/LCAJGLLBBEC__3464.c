// TypeDefIndex 3464
// Namespace: 
// public static class LCAJGLLBBEC
// Fields:

// ===== public static LCAJGLLBBEC.ELJAALFNLIP HGMMJIIEOLF(string ACCIHBHMFPN)  [RVA 0x3569968]
// LCAJGLLBBEC$$HGMMJIIEOLF @ RVA 0x3569968

int32_t LCAJGLLBBEC__HGMMJIIEOLF(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *message;
  
  if ((DAT_04568c19 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_9177/*"ModelType - parseType - unknownType: "*/);
    FUN_01bab630(&StringLiteral_5759/*"Enemy"*/);
    FUN_01bab630(&StringLiteral_3552/*"Both"*/);
    FUN_01bab630(&StringLiteral_4328/*"Child"*/);
    FUN_01bab630(&StringLiteral_10134/*"Parent"*/);
    FUN_01bab630(&StringLiteral_12533/*"SuperParent"*/);
    FUN_01bab630(&StringLiteral_9638/*"Null"*/);
    FUN_01bab630(&StringLiteral_5761/*"EnemyChild"*/);
    DAT_04568c19 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (uVar2 < 0x67e00bc8) {
    if (uVar2 < 0x40b5b03d) {
      if (uVar2 == 0x3be6834b) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5759/*"Enemy"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 2;
        }
      }
      else if ((uVar2 == 0x40b5b03c) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_12533/*"SuperParent"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 7;
      }
    }
    else if (uVar2 == 0x516318c2) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3552/*"Both"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 5;
      }
    }
    else if ((uVar2 == 0x67e00bc7) &&
            (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 1;
    }
  }
  else if (uVar2 < 0xc156ee1e) {
    if (uVar2 == 0x8dd5fafd) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4328/*"Child"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 4;
      }
    }
    else if ((uVar2 == 0xc156ee1d) &&
            (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10134/*"Parent"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 3;
    }
  }
  else if (uVar2 == 0xe5e55f43) {
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5761/*"EnemyChild"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return 6;
    }
  }
  else if ((uVar2 == 0xf73397c4) &&
          (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_9638/*"Null"*/,(MethodInfo *)0x0),
          bVar1)) {
    return 0;
  }
  message = System_String__Concat(StringLiteral_9177/*"ModelType - parseType - unknownType: "*/,ACCIHBHMFPN,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  return 0;
}

