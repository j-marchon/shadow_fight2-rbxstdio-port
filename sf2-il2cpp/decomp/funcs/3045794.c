// PJKHAJKEHEL$$HHABLIAJECK @ RVA 0x3045794

void PJKHAJKEHEL__HHABLIAJECK
               (PJKHAJKEHEL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields).ALJDGEBLHAF.fields.currentCryptoKey = (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields).ALJDGEBLHAF.fields.hiddenValue = (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields).ALJDGEBLHAF.fields.fakeValue = (int)uVar1;
  (__this->fields).ALJDGEBLHAF.fields.fakeValueActive = (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields).ALJDGEBLHAF.fields.inited = (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields).ALJDGEBLHAF.fields.field_0xe = (short)((ulong)uVar1 >> 0x30);
  return;
}

