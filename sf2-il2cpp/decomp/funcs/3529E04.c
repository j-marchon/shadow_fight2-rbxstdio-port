// MNKGBNEMPCI$$.ctor @ RVA 0x3529E04

void MNKGBNEMPCI___ctor(MNKGBNEMPCI_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04568a16 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a16 = 1;
  }
  (__this->fields).DEKCPPOJFEH = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).NEFMLODIKPE = StringLiteral_1;
  thunk_FUN_01c20e04();
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_58,0.0,(MethodInfo *)0x0);
  local_40.fakeValueActive = local_58.fakeValueActive;
  local_40.inited = local_58.inited;
  local_40._18_2_ = local_58._18_2_;
  local_40.hiddenValueOldByte4.fields = local_58.hiddenValueOldByte4.fields;
  local_40.fakeValue = local_58.fakeValue;
  local_40.currentCryptoKey = local_58.currentCryptoKey;
  local_40.hiddenValue = local_58.hiddenValue;
  (__this->fields).DHDPEBOFPPN.fields.fakeValueActive = local_58.fakeValueActive;
  (__this->fields).DHDPEBOFPPN.fields.inited = local_58.inited;
  *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12 = local_58._18_2_;
  (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58.hiddenValueOldByte4.fields;
  (__this->fields).DHDPEBOFPPN.fields.fakeValue = local_58.fakeValue;
  (__this->fields).DHDPEBOFPPN.fields.currentCryptoKey = local_58.currentCryptoKey;
  (__this->fields).DHDPEBOFPPN.fields.hiddenValue = local_58.hiddenValue;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

