// ACHLOMELAJE$$FCPIAEEKGEL @ RVA 0x3062D30

int64_t ACHLOMELAJE__FCPIAEEKGEL
                  (ACHLOMELAJE_o *__this,System_String_o *ACCIHBHMFPN,System_String_o *KGLJICLJHEL,
                  MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int64_t iVar3;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  if ((DAT_04565ef3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3535);
    FUN_01bab630(&StringLiteral_4921);
    FUN_01bab630(&StringLiteral_6868);
    DAT_04565ef3 = 1;
  }
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6868,(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = &(__this->fields).HNBDIMMCOHD;
  }
  else {
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3535,(MethodInfo *)0x0);
    if (!bVar1) {
      method_00 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4921,(MethodInfo *)0x0);
      if (bVar1) {
        ACCIHBHMFPN = KGLJICLJHEL;
      }
      iVar2 = ACHLOMELAJE__FCPIAEEKGEL(__this,ACCIHBHMFPN,method_00);
      return (long)iVar2;
    }
    pCVar4 = &(__this->fields).OGOANIHOCBO;
  }
  local_50.fields.hiddenValue = (pCVar4->fields).hiddenValue;
  local_50.fields.currentCryptoKey = (pCVar4->fields).currentCryptoKey;
  local_50.fields.fakeValueActive = (pCVar4->fields).fakeValueActive;
  local_50.fields.inited = (pCVar4->fields).inited;
  local_50.fields._26_6_ = *(undefined6 *)&(pCVar4->fields).field_0x1a;
  local_50.fields.fakeValue = (pCVar4->fields).fakeValue;
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_50,(MethodInfo *)0x0);
  return iVar3;
}

