// OLKKAIFGGAK$$HCOPGAIEFDB @ RVA 0x34E8980

bool OLKKAIFGGAK__HCOPGAIEFDB(OLKKAIFGGAK_o *__this,float LINBBAKAFCP,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  GBJGJEGPHKD_o *pGVar1;
  PFOFJCIOLOG_o *pPVar2;
  float fVar3;
  float fVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04568775 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568775 = 1;
    method = extraout_x1;
  }
  pGVar1 = (__this->fields).HMIAFJALFCJ;
  fVar4 = (__this->fields).EICLGPGPNKE + LINBBAKAFCP;
  (__this->fields).EICLGPGPNKE = fVar4;
  if (pGVar1 != (GBJGJEGPHKD_o *)0x0) {
    if ((pGVar1->fields).FJHAMMNKBPN == false) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      }
      pPVar2 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
      if (pPVar2 == (PFOFJCIOLOG_o *)0x0) goto LAB_035e8a40;
      local_40.fakeValueActive = (pPVar2->fields).NDBJNNEIOLC.fields.fakeValueActive;
      local_40.inited = (pPVar2->fields).NDBJNNEIOLC.fields.inited;
      local_40._18_2_ = *(undefined2 *)&(pPVar2->fields).NDBJNNEIOLC.fields.field_0x12;
      local_40.hiddenValueOldByte4.fields =
           (pPVar2->fields).NDBJNNEIOLC.fields.hiddenValueOldByte4.fields;
      local_40.fakeValue = (pPVar2->fields).NDBJNNEIOLC.fields.fakeValue;
      local_40.currentCryptoKey = (pPVar2->fields).NDBJNNEIOLC.fields.currentCryptoKey;
      local_40.hiddenValue = (pPVar2->fields).NDBJNNEIOLC.fields.hiddenValue;
      fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                         (MethodInfo *)0x0);
      if (fVar3 < fVar4) {
        return true;
      }
    }
    return false;
  }
LAB_035e8a40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

