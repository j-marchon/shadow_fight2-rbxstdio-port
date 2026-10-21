// EMJLNDCPOHB$$HEIDMALEOJE @ RVA 0x31ECA04

void EMJLNDCPOHB__HEIDMALEOJE
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *__return_storage_ptr__,
               EMJLNDCPOHB_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (__this->fields)._HDNCLNAMICF_k__BackingField.fields.inited;
  uVar2 = *(undefined2 *)&(__this->fields)._HDNCLNAMICF_k__BackingField.fields.field_0x12;
  CVar3.fields = (__this->fields)._HDNCLNAMICF_k__BackingField.fields.hiddenValueOldByte4.fields;
  fVar4 = (__this->fields)._HDNCLNAMICF_k__BackingField.fields.fakeValue;
  iVar5 = (__this->fields)._HDNCLNAMICF_k__BackingField.fields.currentCryptoKey;
  iVar6 = (__this->fields)._HDNCLNAMICF_k__BackingField.fields.hiddenValue;
  (__return_storage_ptr__->fields).fakeValueActive =
       (__this->fields)._HDNCLNAMICF_k__BackingField.fields.fakeValueActive;
  (__return_storage_ptr__->fields).inited = bVar1;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0x12 = uVar2;
  (__return_storage_ptr__->fields).hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__return_storage_ptr__->fields).fakeValue = fVar4;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).hiddenValue = iVar6;
  return;
}

