// OLKKAIFGGAK$$AMCNMMFCLEA @ RVA 0x34F181C

void OLKKAIFGGAK__AMCNMMFCLEA(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  PJKHAJKEHEL_o *pPVar3;
  MGNPHCAAEIO_GNBEOEJBMKL_o *pMVar4;
  OLKKAIFGGAK_o *pOVar5;
  FCJBEKHDLAF_o *__this_00;
  FPLCEOJCPOD_o *__this_01;
  float fVar6;
  float fVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  int32_t local_34;
  
  if ((DAT_045687e1 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045687e1 = 1;
    method = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_02;
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 == (FCJBEKHDLAF_o *)0x0) {
    return;
  }
  local_34 = 0;
  pPVar3 = (__this->fields).FAPMJJBOFEF;
  if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
    __this_01 = (pPVar3->fields).ACHJNNOKEDK;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    if (DAT_04568805 == '\0') {
      FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
      DAT_04568805 = '\x01';
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields->NMICOFIAFIC;
    if ((pMVar4 != (MGNPHCAAEIO_GNBEOEJBMKL_o *)0x0) && (__this_01 != (FPLCEOJCPOD_o *)0x0)) {
      bVar2 = FPLCEOJCPOD__KNMENIBLFGF
                        (__this_01,(pMVar4->fields).NHPDFFAIJMF,&local_34,true,false,
                         (MethodInfo *)0x0);
      iVar1 = local_34;
      if ((!bVar2) || ((__this->fields).BPJMMBGIMNC == (OLKKAIFGGAK_o *)0x0)) {
        return;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04568805 == '\0') {
        FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
        DAT_04568805 = '\x01';
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields->NMICOFIAFIC;
      if (pMVar4 != (MGNPHCAAEIO_GNBEOEJBMKL_o *)0x0) {
        local_80.fakeValueActive = (pMVar4->fields).MKANNAKGEEC.fields.fakeValueActive;
        local_80.inited = (pMVar4->fields).MKANNAKGEEC.fields.inited;
        local_80._18_2_ = *(undefined2 *)&(pMVar4->fields).MKANNAKGEEC.fields.field_0x12;
        local_80.hiddenValueOldByte4.fields =
             (pMVar4->fields).MKANNAKGEEC.fields.hiddenValueOldByte4.fields;
        local_80.fakeValue = (pMVar4->fields).MKANNAKGEEC.fields.fakeValue;
        local_80.currentCryptoKey = (pMVar4->fields).MKANNAKGEEC.fields.currentCryptoKey;
        local_80.hiddenValue = (pMVar4->fields).MKANNAKGEEC.fields.hiddenValue;
        fVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                           (MethodInfo *)0x0);
        pOVar5 = (__this->fields).BPJMMBGIMNC;
        if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
          local_60.fakeValueActive = (pOVar5->fields).DMMGOFAPLNK.fields.fakeValueActive;
          local_60.inited = (pOVar5->fields).DMMGOFAPLNK.fields.inited;
          local_60._18_2_ = *(undefined2 *)&(pOVar5->fields).DMMGOFAPLNK.fields.field_0x12;
          local_60.hiddenValueOldByte4.fields =
               (pOVar5->fields).DMMGOFAPLNK.fields.hiddenValueOldByte4.fields;
          local_60.fakeValue = (pOVar5->fields).DMMGOFAPLNK.fields.fakeValue;
          local_60.currentCryptoKey = (pOVar5->fields).DMMGOFAPLNK.fields.currentCryptoKey;
          local_60.hiddenValue = (pOVar5->fields).DMMGOFAPLNK.fields.hiddenValue;
          fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                             (MethodInfo *)0x0);
          fVar7 = fVar6 * (float)iVar1 * fVar7;
          if (fVar7 == 0.0) {
            return;
          }
          if ((fVar7 < 0.0) &&
             (bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                                 (__this->fields).LDJLHMHDJLC.fields,(MethodInfo *)0x0), bVar2)) {
            return;
          }
          FCJBEKHDLAF__IKKHECKCEJC(__this_00,__this,fVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

