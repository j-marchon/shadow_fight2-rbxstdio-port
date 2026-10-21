// PJKHAJKEHEL$$ILKFDEIGFBO @ RVA 0x3040EDC

void PJKHAJKEHEL__ILKFDEIGFBO
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *__return_storage_ptr__,
               PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (__this->fields).JNFNFEJAGGN.fields.inited;
  uVar2 = *(undefined2 *)&(__this->fields).JNFNFEJAGGN.fields.field_0x12;
  CVar3.fields = (__this->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
  fVar4 = (__this->fields).JNFNFEJAGGN.fields.fakeValue;
  iVar5 = (__this->fields).JNFNFEJAGGN.fields.currentCryptoKey;
  iVar6 = (__this->fields).JNFNFEJAGGN.fields.hiddenValue;
  (__return_storage_ptr__->fields).fakeValueActive =
       (__this->fields).JNFNFEJAGGN.fields.fakeValueActive;
  (__return_storage_ptr__->fields).inited = bVar1;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0x12 = uVar2;
  (__return_storage_ptr__->fields).hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__return_storage_ptr__->fields).fakeValue = fVar4;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).hiddenValue = iVar6;
  return;
}

