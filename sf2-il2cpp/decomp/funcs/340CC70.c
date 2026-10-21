// MGNPHCAAEIO$$BCJKFABJAJN @ RVA 0x340CC70

float MGNPHCAAEIO__BCJKFABJAJN(MethodInfo *method)

{
  MGNPHCAAEIO_StaticFields *pMVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04568047 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568047 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
  local_40.fakeValueActive = (pMVar1->DKAHJLOEDPH).fields.fakeValueActive;
  local_40.inited = (pMVar1->DKAHJLOEDPH).fields.inited;
  local_40._18_2_ = *(undefined2 *)&(pMVar1->DKAHJLOEDPH).fields.field_0x12;
  local_40.hiddenValueOldByte4.fields = (pMVar1->DKAHJLOEDPH).fields.hiddenValueOldByte4.fields;
  local_40.fakeValue = (pMVar1->DKAHJLOEDPH).fields.fakeValue;
  local_40.currentCryptoKey = (pMVar1->DKAHJLOEDPH).fields.currentCryptoKey;
  local_40.hiddenValue = (pMVar1->DKAHJLOEDPH).fields.hiddenValue;
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                     (MethodInfo *)0x0);
  return fVar2;
}

