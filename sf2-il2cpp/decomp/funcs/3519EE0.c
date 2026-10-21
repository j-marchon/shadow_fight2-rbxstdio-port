// FKGKLILLOBG$$PPOKEOHAHFG @ RVA 0x3519EE0

float FKGKLILLOBG__PPOKEOHAHFG(FKGKLILLOBG_o *__this,bool FOFCAILEKJD,MethodInfo *method)

{
  BMMAPANJCEC_o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields *CJNHFNHJHPE;
  FCJBEKHDLAF_o *pFVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  CJNHFNHJHPE = &local_70;
  if ((DAT_0456896d & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_0456896d = 1;
  }
  if ((__this->fields).KDMIGIGGEON == false) {
    local_70.fakeValueActive = (__this->fields).PCNEDMAJMOJ.fields.fakeValueActive;
    local_70.inited = (__this->fields).PCNEDMAJMOJ.fields.inited;
    local_70._18_2_ = *(undefined2 *)&(__this->fields).PCNEDMAJMOJ.fields.field_0x12;
    local_70.hiddenValueOldByte4.fields =
         (__this->fields).PCNEDMAJMOJ.fields.hiddenValueOldByte4.fields;
    local_70.fakeValue = (__this->fields).PCNEDMAJMOJ.fields.fakeValue;
    local_70.currentCryptoKey = (__this->fields).PCNEDMAJMOJ.fields.currentCryptoKey;
    local_70.hiddenValue = (__this->fields).PCNEDMAJMOJ.fields.hiddenValue;
  }
  else {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if (pFVar1 != (FCJBEKHDLAF_o *)0x0) {
      __this_00 = (pFVar1->fields).HBMCNPFFCHJ;
      if (__this_00 != (BMMAPANJCEC_o *)0x0) {
        fVar2 = BMMAPANJCEC__KNMENIBLFGF
                          (__this_00,FOFCAILEKJD,(__this->fields).LKDFNDOEIDD,(MethodInfo *)0x0);
        return fVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03619fb8 to 0371a157 has its CatchHandler @ 03619fb8
                       catch() { ... } // from try @ 03619fb8 with catch @ 03619fb8
                       catch() { ... } // from try @ 0361a27c with catch @ 03619fb8
                       catch() { ... } // from try @ 0361a314 with catch @ 03619fb8
                       catch() { ... } // from try @ 0361a31c with catch @ 03619fb8
                       catch() { ... } // from try @ 0361a3d0 with catch @ 03619fb8 */
    local_50.fakeValueActive = (__this->fields).PCNEDMAJMOJ.fields.fakeValueActive;
    local_50.inited = (__this->fields).PCNEDMAJMOJ.fields.inited;
    local_50._18_2_ = *(undefined2 *)&(__this->fields).PCNEDMAJMOJ.fields.field_0x12;
    local_50.hiddenValueOldByte4.fields =
         (__this->fields).PCNEDMAJMOJ.fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (__this->fields).PCNEDMAJMOJ.fields.fakeValue;
    local_50.currentCryptoKey = (__this->fields).PCNEDMAJMOJ.fields.currentCryptoKey;
    local_50.hiddenValue = (__this->fields).PCNEDMAJMOJ.fields.hiddenValue;
    CJNHFNHJHPE = &local_50;
  }
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)CJNHFNHJHPE,
                     (MethodInfo *)0x0);
  return fVar2;
}

