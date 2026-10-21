// BBBBKBBFNOG$$BJOIGEMGMAF @ RVA 0x34D0ED0

int64_t BBBBKBBFNOG__BJOIGEMGMAF(MethodInfo *method)

{
  int64_t iVar1;
  BBBBKBBFNOG_StaticFields *pBVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_045686b2 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_045686b2 = 1;
  }
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  local_40.fields.fakeValueActive = (pBVar2->HEINPMAGCOD).fields.fakeValueActive;
  local_40.fields.inited = (pBVar2->HEINPMAGCOD).fields.inited;
  local_40.fields._26_6_ = *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a;
  local_40.fields.fakeValue = (pBVar2->HEINPMAGCOD).fields.fakeValue;
  local_40.fields.hiddenValue = (pBVar2->HEINPMAGCOD).fields.hiddenValue;
  local_40.fields.currentCryptoKey = (pBVar2->HEINPMAGCOD).fields.currentCryptoKey;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0);
  return iVar1;
}

