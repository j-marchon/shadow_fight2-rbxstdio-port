// MGNPHCAAEIO$$MMGENECCIOA @ RVA 0x33FE9B0

void MGNPHCAAEIO__MMGENECCIOA(float CJNHFNHJHPE,MethodInfo *method)

{
  MGNPHCAAEIO_StaticFields *pMVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04567fd2 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567fd2 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_58,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  local_40.hiddenValueOldByte4.fields = local_58.hiddenValueOldByte4.fields;
  local_40.fakeValue = local_58.fakeValue;
  local_40.currentCryptoKey = local_58.currentCryptoKey;
  local_40.hiddenValue = local_58.hiddenValue;
  local_40.fakeValueActive = local_58.fakeValueActive;
  local_40.inited = local_58.inited;
  local_40._18_2_ = local_58._18_2_;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
  (pMVar1->DKAHJLOEDPH).fields.fakeValueActive = local_40.fakeValueActive;
  (pMVar1->DKAHJLOEDPH).fields.inited = local_40.inited;
  *(undefined2 *)&(pMVar1->DKAHJLOEDPH).fields.field_0x12 = local_40._18_2_;
  (pMVar1->DKAHJLOEDPH).fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_40.hiddenValueOldByte4.fields;
  (pMVar1->DKAHJLOEDPH).fields.fakeValue = local_40.fakeValue;
  (pMVar1->DKAHJLOEDPH).fields.currentCryptoKey = local_40.currentCryptoKey;
  (pMVar1->DKAHJLOEDPH).fields.hiddenValue = local_40.hiddenValue;
  return;
}

