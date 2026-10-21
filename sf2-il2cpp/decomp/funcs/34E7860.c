// OLKKAIFGGAK$$PNFOFDOONHA @ RVA 0x34E7860

void OLKKAIFGGAK__PNFOFDOONHA(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  int iVar1;
  GBJGJEGPHKD_o *pGVar2;
  PFOFJCIOLOG_o *pPVar3;
  float fVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_0456876e & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456876e = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).HMIAFJALFCJ;
  if (pGVar2 != (GBJGJEGPHKD_o *)0x0) {
    if (((pGVar2->fields).FJHAMMNKBPN == false) &&
       (iVar1 = (__this->fields).KECCIJBNKLL, -1 < iVar1)) {
      if (iVar1 == 0) {
        OLKKAIFGGAK__LKAMAOFBKCN(__this,method);
        iVar1 = (__this->fields).KECCIJBNKLL;
      }
      (__this->fields).KECCIJBNKLL = iVar1 + -1;
    }
    fVar5 = (__this->fields).EICLGPGPNKE;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar3 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
    if (pPVar3 != (PFOFJCIOLOG_o *)0x0) {
      local_40.fakeValueActive = (pPVar3->fields).EPHGDGHNALB.fields.fakeValueActive;
      local_40.inited = (pPVar3->fields).EPHGDGHNALB.fields.inited;
      local_40._18_2_ = *(undefined2 *)&(pPVar3->fields).EPHGDGHNALB.fields.field_0x12;
      local_40.hiddenValueOldByte4.fields =
           (pPVar3->fields).EPHGDGHNALB.fields.hiddenValueOldByte4.fields;
      local_40.fakeValue = (pPVar3->fields).EPHGDGHNALB.fields.fakeValue;
      local_40.currentCryptoKey = (pPVar3->fields).EPHGDGHNALB.fields.currentCryptoKey;
      local_40.hiddenValue = (pPVar3->fields).EPHGDGHNALB.fields.hiddenValue;
      fVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                         (MethodInfo *)0x0);
      fVar5 = fVar5 - fVar4;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      (__this->fields).EICLGPGPNKE = fVar5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

