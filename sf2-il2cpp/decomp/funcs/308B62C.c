// IEFEBEDLHNN$$RandomizeObscuredVars @ RVA 0x308B62C

void IEFEBEDLHNN__RandomizeObscuredVars(IEFEBEDLHNN_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_03;
  undefined8 local_50;
  undefined4 local_48;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04566056 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04566056 = 1;
    method = extraout_x1;
  }
  local_48 = 0;
  local_50 = 0;
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo,method);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__GPJJDLBJOAL
            (&(__this->fields).OGPJAABGEHE,(MethodInfo *)0x0);
  local_40.fakeValueActive = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive;
  local_40.inited = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.inited;
  local_40._18_2_ = *(undefined2 *)&(__this->fields)._MGNABGCCFCJ_k__BackingField.fields.field_0x12;
  local_40.hiddenValueOldByte4.fields =
       (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4.fields;
  local_40.fakeValue = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue;
  local_40.currentCryptoKey = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey;
  local_40.hiddenValue = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).DNPEHJEILDN,(MethodInfo *)0x0);
  __this_00.fields.fakeValue = false;
  __this_00.fields.inited = false;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields._11_1_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).DOMBDCPDKMD;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_00,in_x2);
  local_50._0_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.currentCryptoKey;
  local_50._1_3_ = *(undefined3 *)&(__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0x1;
  local_50._4_4_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.hiddenValue;
  local_48._0_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValue;
  local_48._1_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.inited;
  local_48._2_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValueActive;
  local_48._3_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0xb;
  __this_01.fields.fakeValue = false;
  __this_01.fields.inited = false;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields._11_1_ = 0;
  __this_01.fields._0_8_ = &local_50;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_01,in_x2);
  __this_02.fields.fakeValue = false;
  __this_02.fields.inited = false;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields._11_1_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).FOPNIADHENP;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = false;
  __this_03.fields.inited = false;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields._11_1_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).MKNHLACCLLP;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_03,in_x2);
  return;
}

