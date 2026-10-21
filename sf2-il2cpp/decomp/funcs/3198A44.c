// NHHDMAKJECA$$JBPFOJALMPM @ RVA 0x3198A44

void NHHDMAKJECA__JBPFOJALMPM
               (NHHDMAKJECA_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *CJNHFNHJHPE
               ,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (CJNHFNHJHPE->fields).inited;
  uVar2 = *(undefined2 *)&(CJNHFNHJHPE->fields).field_0x12;
  CVar3.fields = (CJNHFNHJHPE->fields).hiddenValueOldByte4.fields;
  fVar4 = (CJNHFNHJHPE->fields).fakeValue;
  iVar5 = (CJNHFNHJHPE->fields).currentCryptoKey;
  iVar6 = (CJNHFNHJHPE->fields).hiddenValue;
  (__this->fields)._KEDHOLLELDG_k__BackingField.fields.fakeValueActive =
       (CJNHFNHJHPE->fields).fakeValueActive;
  (__this->fields)._KEDHOLLELDG_k__BackingField.fields.inited = bVar1;
  *(undefined2 *)&(__this->fields)._KEDHOLLELDG_k__BackingField.fields.field_0x12 = uVar2;
  (__this->fields)._KEDHOLLELDG_k__BackingField.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__this->fields)._KEDHOLLELDG_k__BackingField.fields.fakeValue = fVar4;
  (__this->fields)._KEDHOLLELDG_k__BackingField.fields.currentCryptoKey = iVar5;
  (__this->fields)._KEDHOLLELDG_k__BackingField.fields.hiddenValue = iVar6;
  return;
}

