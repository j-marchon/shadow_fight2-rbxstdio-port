// OLKKAIFGGAK$$DAEJHAGFLAA @ RVA 0x34E6FA0

float OLKKAIFGGAK__DAEJHAGFLAA(OLKKAIFGGAK_o *__this,bool JECKCMKCNCH,MethodInfo *method)

{
  MethodInfo *in_x3;
  MGNPHCAAEIO_GNBEOEJBMKL_o *pMVar1;
  System_String_o *NFIICLCMEHI;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_04568788 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568788 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_0456812c == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456812c = '\x01';
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields->NMHCNBDHLLL;
  if (pMVar1 != (MGNPHCAAEIO_GNBEOEJBMKL_o *)0x0) {
    local_50.fakeValueActive = (pMVar1->fields).MKANNAKGEEC.fields.fakeValueActive;
    local_50.inited = (pMVar1->fields).MKANNAKGEEC.fields.inited;
    local_50._18_2_ = *(undefined2 *)&(pMVar1->fields).MKANNAKGEEC.fields.field_0x12;
    local_50.hiddenValueOldByte4.fields =
         (pMVar1->fields).MKANNAKGEEC.fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (pMVar1->fields).MKANNAKGEEC.fields.fakeValue;
    local_50.currentCryptoKey = (pMVar1->fields).MKANNAKGEEC.fields.currentCryptoKey;
    local_50.hiddenValue = (pMVar1->fields).MKANNAKGEEC.fields.hiddenValue;
    NFIICLCMEHI = (pMVar1->fields).NHPDFFAIJMF;
    fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                       (MethodInfo *)0x0);
    fVar2 = OLKKAIFGGAK__EAOLDIFFJJL(__this,JECKCMKCNCH,NFIICLCMEHI,fVar2,in_x3);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

