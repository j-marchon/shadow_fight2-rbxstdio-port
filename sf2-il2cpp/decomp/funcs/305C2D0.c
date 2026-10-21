// ACHLOMELAJE$$DLKOKAPHODP @ RVA 0x305C2D0

void ACHLOMELAJE__DLKOKAPHODP
               (ACHLOMELAJE_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  long lVar1;
  int iVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  undefined6 uVar5;
  int64_t iVar6;
  double dVar7;
  int64_t iVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  if ((DAT_04565e95 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&StringLiteral_10090);
    DAT_04565e95 = 1;
  }
  iVar2 = (__this->fields).FLJFBLEOGDG;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar7 = System_Math__Pow(10.0,(double)iVar2,(MethodInfo *)0x0);
  iVar6 = (CJNHFNHJHPE->fields).currentCryptoKey;
  bVar3 = (CJNHFNHJHPE->fields).fakeValueActive;
  bVar4 = (CJNHFNHJHPE->fields).inited;
  uVar5 = *(undefined6 *)&(CJNHFNHJHPE->fields).field_0x1a;
  iVar8 = (CJNHFNHJHPE->fields).fakeValue;
  (__this->fields).GMGHJMNBDDJ.fields.hiddenValue = (CJNHFNHJHPE->fields).hiddenValue;
  (__this->fields).GMGHJMNBDDJ.fields.currentCryptoKey = iVar6;
  (__this->fields).GMGHJMNBDDJ.fields.fakeValueActive = bVar3;
  (__this->fields).GMGHJMNBDDJ.fields.inited = bVar4;
  *(undefined6 *)&(__this->fields).GMGHJMNBDDJ.fields.field_0x1a = uVar5;
  (__this->fields).GMGHJMNBDDJ.fields.fakeValue = iVar8;
  local_50.fields.hiddenValue = (CJNHFNHJHPE->fields).hiddenValue;
  local_50.fields.currentCryptoKey = (CJNHFNHJHPE->fields).currentCryptoKey;
  local_50.fields.fakeValueActive = (CJNHFNHJHPE->fields).fakeValueActive;
  local_50.fields.inited = (CJNHFNHJHPE->fields).inited;
  local_50.fields._26_6_ = *(undefined6 *)&(CJNHFNHJHPE->fields).field_0x1a;
  local_50.fields.fakeValue = (CJNHFNHJHPE->fields).fakeValue;
  lVar1 = -0x8000000000000000;
  if (dVar7 != INFINITY) {
    lVar1 = (long)dVar7;
  }
  if (lVar1 < 2) {
    lVar1 = 1;
  }
  iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_50,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP
            ((KIHIPAJGNBF_o *)__this,StringLiteral_10090,iVar6 * lVar1,(MethodInfo *)0x0);
  return;
}

