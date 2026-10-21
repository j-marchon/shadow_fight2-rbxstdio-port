// PJKHAJKEHEL$$EGNJFOLNHML @ RVA 0x303F920

void PJKHAJKEHEL__EGNJFOLNHML
               (PJKHAJKEHEL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields).DNLFMHBDIIJ.fields.currentCryptoKey = (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields).DNLFMHBDIIJ.fields.hiddenValue = (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields).DNLFMHBDIIJ.fields.fakeValue = (int)uVar1;
  (__this->fields).DNLFMHBDIIJ.fields.fakeValueActive = (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields).DNLFMHBDIIJ.fields.inited = (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields).DNLFMHBDIIJ.fields.field_0xe = (short)((ulong)uVar1 >> 0x30);
  return;
}

