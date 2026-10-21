// PJKHAJKEHEL$$AKJBHHAHMPG @ RVA 0x3041CCC

void PJKHAJKEHEL__AKJBHHAHMPG
               (PJKHAJKEHEL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields).EMHKAKPKLHI.fields.currentCryptoKey = (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields).EMHKAKPKLHI.fields.hiddenValue = (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields).EMHKAKPKLHI.fields.fakeValue = (int)uVar1;
  (__this->fields).EMHKAKPKLHI.fields.fakeValueActive = (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields).EMHKAKPKLHI.fields.inited = (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields).EMHKAKPKLHI.fields.field_0xe = (short)((ulong)uVar1 >> 0x30);
  return;
}

