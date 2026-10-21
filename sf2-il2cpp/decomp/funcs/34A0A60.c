// CMDDLMAPPMD$$RandomizeObscuredVars @ RVA 0x34A0A60

void CMDDLMAPPMD__RandomizeObscuredVars(CMDDLMAPPMD_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  undefined8 local_20;
  undefined8 uStack_18;
  
  NKPJLEMPIKD__RandomizeObscuredVars((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  uStack_18._0_4_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._GOMOBAPCMOM_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.hiddenValue;
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}

