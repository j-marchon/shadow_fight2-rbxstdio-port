// PJKHAJKEHEL$$IKKHECKCEJC @ RVA 0x303F1A4

bool PJKHAJKEHEL__IKKHECKCEJC(PJKHAJKEHEL_o *__this,float JNMNOKMIFJG,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  PJKHAJKEHEL__AGEFBLEDMBG(__this,JNMNOKMIFJG,method);
  local_30.fakeValueActive = (__this->fields).JNFNFEJAGGN.fields.fakeValueActive;
  local_30.inited = (__this->fields).JNFNFEJAGGN.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).JNFNFEJAGGN.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).JNFNFEJAGGN.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).JNFNFEJAGGN.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).JNFNFEJAGGN.fields.hiddenValue;
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                     (MethodInfo *)0x0);
  if (fVar2 <= 0.0) {
    bVar1 = true;
    (__this->fields).DLINPBPHMJD = true;
  }
  else {
    bVar1 = (__this->fields).DLINPBPHMJD != false;
  }
  return bVar1;
}

