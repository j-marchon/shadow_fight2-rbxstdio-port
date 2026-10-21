// MGNPHCAAEIO$$NADKBDJLFIL @ RVA 0x3403084

float MGNPHCAAEIO__NADKBDJLFIL(float FPLCPINIJKI,MethodInfo *method)

{
  MGNPHCAAEIO_StaticFields *pMVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_0456803d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456803d = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
  local_40.fakeValueActive = (pMVar1->EEBCCADECEJ).fields.fakeValueActive;
  local_40.inited = (pMVar1->EEBCCADECEJ).fields.inited;
  local_40._18_2_ = *(undefined2 *)&(pMVar1->EEBCCADECEJ).fields.field_0x12;
  local_40.hiddenValueOldByte4.fields = (pMVar1->EEBCCADECEJ).fields.hiddenValueOldByte4.fields;
  local_40.fakeValue = (pMVar1->EEBCCADECEJ).fields.fakeValue;
  local_40.currentCryptoKey = (pMVar1->EEBCCADECEJ).fields.currentCryptoKey;
  local_40.hiddenValue = (pMVar1->EEBCCADECEJ).fields.hiddenValue;
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                     (MethodInfo *)0x0);
  fVar2 = exp2f(FPLCPINIJKI / fVar2);
  return fVar2;
}

