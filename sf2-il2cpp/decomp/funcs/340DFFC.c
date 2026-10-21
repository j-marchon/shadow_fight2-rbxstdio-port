// MGNPHCAAEIO$$OICFOLPIFEB @ RVA 0x340DFFC

void MGNPHCAAEIO__OICFOLPIFEB(float CJNHFNHJHPE,MethodInfo *method)

{
  MGNPHCAAEIO_StaticFields *pMVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_0456805d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456805d = 1;
  }
                    /* try { // try from 0350e044 to 0360e053 has its CatchHandler @ 0350e0b4 */
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
                    /* try { // try from 0350e064 to 0360e097 has its CatchHandler @ 0350e0b0 */
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
  (pMVar1->FKIOCGMDNID).fields.fakeValueActive = local_40.fakeValueActive;
  (pMVar1->FKIOCGMDNID).fields.inited = local_40.inited;
  *(undefined2 *)&(pMVar1->FKIOCGMDNID).fields.field_0x12 = local_40._18_2_;
  (pMVar1->FKIOCGMDNID).fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_40.hiddenValueOldByte4.fields;
  (pMVar1->FKIOCGMDNID).fields.fakeValue = local_40.fakeValue;
  (pMVar1->FKIOCGMDNID).fields.currentCryptoKey = local_40.currentCryptoKey;
  (pMVar1->FKIOCGMDNID).fields.hiddenValue = local_40.hiddenValue;
  return;
}

