// MGNPHCAAEIO$$JNMJPCHFHDM @ RVA 0x3408068

float MGNPHCAAEIO__JNMJPCHFHDM(MethodInfo *method)

{
  MGNPHCAAEIO_StaticFields *pMVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04568021 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568021 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
  local_40.fakeValueActive = (pMVar1->FEFCMJMGDEC).fields.fakeValueActive;
  local_40.inited = (pMVar1->FEFCMJMGDEC).fields.inited;
  local_40._18_2_ = *(undefined2 *)&(pMVar1->FEFCMJMGDEC).fields.field_0x12;
  local_40.hiddenValueOldByte4.fields = (pMVar1->FEFCMJMGDEC).fields.hiddenValueOldByte4.fields;
  local_40.fakeValue = (pMVar1->FEFCMJMGDEC).fields.fakeValue;
  local_40.currentCryptoKey = (pMVar1->FEFCMJMGDEC).fields.currentCryptoKey;
  local_40.hiddenValue = (pMVar1->FEFCMJMGDEC).fields.hiddenValue;
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                     (MethodInfo *)0x0);
  return fVar2;
}

