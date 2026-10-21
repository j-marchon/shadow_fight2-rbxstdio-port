// Nekki.SF2.GUI.Shop.ParameterScrollItem$$NLFAIJPCCLI @ RVA 0x30317B0

float Nekki_SF2_GUI_Shop_ParameterScrollItem__NLFAIJPCCLI
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,float CJNHFNHJHPE,
                MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_StaticFields *pMVar1;
  float fVar2;
  float fVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_04565d06 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565d06 = 1;
    method = extraout_x1;
  }
  fVar2 = Nekki_SF2_GUI_Shop_ParameterScrollItem__get_RightLimit(__this,method);
  if ((__this->fields).NDFDLJPANOL == 0) {
    fVar3 = powf(CJNHFNHJHPE / fVar2,(__this->fields).GMCNKDKMHII);
    fVar2 = 0.0;
    if (fVar3 < 0.0) goto LAB_0313187c;
  }
  else {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
    local_50.fakeValueActive = (pMVar1->EEBCCADECEJ).fields.fakeValueActive;
    local_50.inited = (pMVar1->EEBCCADECEJ).fields.inited;
    local_50._18_2_ = *(undefined2 *)&(pMVar1->EEBCCADECEJ).fields.field_0x12;
    local_50.hiddenValueOldByte4.fields = (pMVar1->EEBCCADECEJ).fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (pMVar1->EEBCCADECEJ).fields.fakeValue;
    local_50.currentCryptoKey = (pMVar1->EEBCCADECEJ).fields.currentCryptoKey;
    local_50.hiddenValue = (pMVar1->EEBCCADECEJ).fields.hiddenValue;
    fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                       (MethodInfo *)0x0);
    fVar3 = exp2f(((CJNHFNHJHPE - fVar2) * (__this->fields).GMCNKDKMHII) / fVar3);
  }
  fVar2 = fVar3;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
LAB_0313187c:
  fVar3 = (__this->fields).CCIKLAFHFAH;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}

