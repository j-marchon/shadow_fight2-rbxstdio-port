// MGNPHCAAEIO$$NEOLDJIJDFP @ RVA 0x3402658

float MGNPHCAAEIO__NEOLDJIJDFP(MethodInfo *method)

{
  MGNPHCAAEIO_StaticFields *pMVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04567ffe & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567ffe = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
  local_40.fakeValueActive = (pMVar1->FKIOCGMDNID).fields.fakeValueActive;
  local_40.inited = (pMVar1->FKIOCGMDNID).fields.inited;
  local_40._18_2_ = *(undefined2 *)&(pMVar1->FKIOCGMDNID).fields.field_0x12;
  local_40.hiddenValueOldByte4.fields = (pMVar1->FKIOCGMDNID).fields.hiddenValueOldByte4.fields;
  local_40.fakeValue = (pMVar1->FKIOCGMDNID).fields.fakeValue;
  local_40.currentCryptoKey = (pMVar1->FKIOCGMDNID).fields.currentCryptoKey;
  local_40.hiddenValue = (pMVar1->FKIOCGMDNID).fields.hiddenValue;
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                     (MethodInfo *)0x0);
  return fVar2;
}

