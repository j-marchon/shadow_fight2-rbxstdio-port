// HOOAAGABMBL$$BOHFONMHMOB @ RVA 0x30F10EC

void HOOAAGABMBL__BOHFONMHMOB
               (HOOAAGABMBL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool_conflict bVar1;
  undefined6 uVar2;
  int64_t iVar3;
  int64_t iVar4;
  int64_t iVar5;
  
  iVar5 = (CJNHFNHJHPE->fields).hiddenValue;
  iVar4 = (CJNHFNHJHPE->fields).currentCryptoKey;
  bVar1 = (CJNHFNHJHPE->fields).inited;
  uVar2 = *(undefined6 *)&(CJNHFNHJHPE->fields).field_0x1a;
  iVar3 = (CJNHFNHJHPE->fields).fakeValue;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive =
       (CJNHFNHJHPE->fields).fakeValueActive;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.inited = bVar1;
  *(undefined6 *)&(__this->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a = uVar2;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue = iVar3;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue = iVar5;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.currentCryptoKey = iVar4;
  return;
}

