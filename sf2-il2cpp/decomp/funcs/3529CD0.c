// MNKGBNEMPCI$$PPOKEOHAHFG @ RVA 0x3529CD0

int32_t MNKGBNEMPCI__PPOKEOHAHFG
                  (MNKGBNEMPCI_o *__this,double NMMIKGIINDF,int32_t JLAFGLDIFOC,int32_t HGDNFDIMIOP,
                  double HIANAMIFFLJ,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *pCVar1;
  int32_t iVar2;
  float fVar3;
  double dVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
  if ((DAT_04568a15 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568a15 = 1;
  }
  dVar4 = (NMMIKGIINDF - (double)(HGDNFDIMIOP * JLAFGLDIFOC)) / HIANAMIFFLJ;
  pCVar1 = &(__this->fields).DHDPEBOFPPN;
  if (0.0 <= dVar4) {
    local_60.fakeValueActive = (__this->fields).DHDPEBOFPPN.fields.fakeValueActive;
    local_60.inited = (__this->fields).DHDPEBOFPPN.fields.inited;
    local_60._18_2_ = *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12;
    local_60.hiddenValueOldByte4.fields =
         (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4.fields;
    local_60.fakeValue = (__this->fields).DHDPEBOFPPN.fields.fakeValue;
    local_60.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_60.hiddenValue = (pCVar1->fields).hiddenValue;
    fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                       (MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar4 = System_Math__Pow(2.0,-dVar4,(MethodInfo *)0x0);
    dVar4 = 2.0 - dVar4;
  }
  else {
    local_80.fakeValueActive = (__this->fields).DHDPEBOFPPN.fields.fakeValueActive;
    local_80.inited = (__this->fields).DHDPEBOFPPN.fields.inited;
    local_80._18_2_ = *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12;
    local_80.hiddenValueOldByte4.fields =
         (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4.fields;
    local_80.fakeValue = (__this->fields).DHDPEBOFPPN.fields.fakeValue;
    local_80.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_80.hiddenValue = (pCVar1->fields).hiddenValue;
    fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                       (MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar4 = System_Math__Pow(2.0,dVar4,(MethodInfo *)0x0);
  }
  iVar2 = -0x80000000;
  if (dVar4 * (double)fVar3 != INFINITY) {
    iVar2 = (int)(dVar4 * (double)fVar3);
  }
  return iVar2;
}

