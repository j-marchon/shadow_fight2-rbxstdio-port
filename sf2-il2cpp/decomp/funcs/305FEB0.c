// ACHLOMELAJE$$GNICHBNKEMA @ RVA 0x305FEB0

void ACHLOMELAJE__GNICHBNKEMA
               (ACHLOMELAJE_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined6 uVar3;
  int64_t iVar4;
  int64_t iVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  if ((DAT_04565eb9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10087);
    DAT_04565eb9 = 1;
  }
  iVar5 = (CJNHFNHJHPE->fields).currentCryptoKey;
  bVar1 = (CJNHFNHJHPE->fields).fakeValueActive;
  bVar2 = (CJNHFNHJHPE->fields).inited;
  uVar3 = *(undefined6 *)&(CJNHFNHJHPE->fields).field_0x1a;
  iVar4 = (CJNHFNHJHPE->fields).fakeValue;
  (__this->fields).MBINFANFLMC.fields.hiddenValue = (CJNHFNHJHPE->fields).hiddenValue;
  (__this->fields).MBINFANFLMC.fields.currentCryptoKey = iVar5;
  (__this->fields).MBINFANFLMC.fields.fakeValueActive = bVar1;
  (__this->fields).MBINFANFLMC.fields.inited = bVar2;
  *(undefined6 *)&(__this->fields).MBINFANFLMC.fields.field_0x1a = uVar3;
  (__this->fields).MBINFANFLMC.fields.fakeValue = iVar4;
  local_50.fields.hiddenValue = (CJNHFNHJHPE->fields).hiddenValue;
  local_50.fields.currentCryptoKey = (CJNHFNHJHPE->fields).currentCryptoKey;
  local_50.fields.fakeValueActive = (CJNHFNHJHPE->fields).fakeValueActive;
  local_50.fields.inited = (CJNHFNHJHPE->fields).inited;
  local_50.fields._26_6_ = *(undefined6 *)&(CJNHFNHJHPE->fields).field_0x1a;
  local_50.fields.fakeValue = (CJNHFNHJHPE->fields).fakeValue;
  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_50,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP((KIHIPAJGNBF_o *)__this,StringLiteral_10087,iVar4,(MethodInfo *)0x0);
  return;
}

