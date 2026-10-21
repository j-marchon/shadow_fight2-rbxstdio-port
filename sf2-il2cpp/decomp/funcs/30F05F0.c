// HOOAAGABMBL$$OCFMKIPCMMO @ RVA 0x30F05F0

void HOOAAGABMBL__OCFMKIPCMMO
               (HOOAAGABMBL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined6 uVar3;
  int64_t iVar4;
  int64_t iVar5;
  
  iVar5 = (CJNHFNHJHPE->fields).currentCryptoKey;
  bVar1 = (CJNHFNHJHPE->fields).fakeValueActive;
  bVar2 = (CJNHFNHJHPE->fields).inited;
  uVar3 = *(undefined6 *)&(CJNHFNHJHPE->fields).field_0x1a;
  iVar4 = (CJNHFNHJHPE->fields).fakeValue;
  (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.hiddenValue =
       (CJNHFNHJHPE->fields).hiddenValue;
  (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.currentCryptoKey = iVar5;
  (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValueActive = bVar1;
  (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.inited = bVar2;
  *(undefined6 *)&(__this->fields)._EAOJFBDIFLL_k__BackingField.fields.field_0x1a = uVar3;
  (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValue = iVar4;
  return;
}

