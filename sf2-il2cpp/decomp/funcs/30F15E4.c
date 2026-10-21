// HOOAAGABMBL$$LGFJPGMBDGL @ RVA 0x30F15E4

int64_t HOOAAGABMBL__LGFJPGMBDGL(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  long lVar1;
  int64_t iVar2;
  float fVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_04566428 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566428 = 1;
  }
  local_40.fields.fakeValueActive =
       (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive;
  local_40.fields.inited = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.inited;
  local_40.fields._26_6_ =
       *(undefined6 *)&(__this->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a;
  local_40.fields.fakeValue = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue;
  local_40.fields.hiddenValue = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue;
  local_40.fields.currentCryptoKey =
       (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.currentCryptoKey;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  fVar3 = MGNPHCAAEIO_TypeInfo->static_fields->CEDCEKMCGPJ;
  lVar1 = -0x8000000000000000;
  if (fVar3 != INFINITY) {
    lVar1 = (long)fVar3;
  }
  return lVar1 * iVar2;
}

