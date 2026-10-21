// FCJBEKHDLAF$$APPJEJCGIOF @ RVA 0x33F093C

void FCJBEKHDLAF__APPJEJCGIOF
               (FCJBEKHDLAF_o *__this,PJKHAJKEHEL_o *FIJLCCEJANF,PJKHAJKEHEL_o *DIJDCNOLDOK,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  OJHODFIGFMA_o *pOVar4;
  AFFHKININGD_o *pAVar5;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar6;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if (FIJLCCEJANF == (PJKHAJKEHEL_o *)0x0) goto LAB_034f0a50;
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (FIJLCCEJANF->fields).HJPOJOPKEKI.fields,(MethodInfo *)0x0);
  if (bVar1) {
    pAVar5 = (__this->fields).FBFPLEFCDOK;
    if (pAVar5 == (AFFHKININGD_o *)0x0) goto LAB_034f0a50;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pAVar5->fields).NHNNEADDBDB.fields,(MethodInfo *)0x0);
    pNVar6 = (__this->fields).HIBPKNAIPLH;
    if (pNVar6 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f0a50;
    iVar3 = Nekki_SF2_GUI_Fight_PreFight__get_TimeLeft(pNVar6,(MethodInfo *)0x0);
    pNVar6 = (__this->fields).HIBPKNAIPLH;
    if (pNVar6 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f0a50;
    Nekki_SF2_GUI_Fight_PreFight__GetStatistic(pNVar6,0,(MethodInfo *)0x0);
    pOVar4 = (__this->fields).OONKKFFEMAK;
    if (pOVar4 == (OJHODFIGFMA_o *)0x0) goto LAB_034f0a50;
    OJHODFIGFMA__NCENBOMEPBN(pOVar4,iVar2 - iVar3,(MethodInfo *)0x0);
    local_50.fakeValueActive = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_50.inited = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.inited;
    local_50._18_2_ = *(undefined2 *)&(FIJLCCEJANF->fields).JNFNFEJAGGN.fields.field_0x12;
    local_50.hiddenValueOldByte4.fields =
         (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.fakeValue;
    local_50.currentCryptoKey = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_50.hiddenValue = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.hiddenValue;
    CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                             (MethodInfo *)0x0);
    pOVar4 = (__this->fields).OONKKFFEMAK;
    if (pOVar4 == (OJHODFIGFMA_o *)0x0) goto LAB_034f0a50;
    OJHODFIGFMA__CCHHDGCADPF(pOVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((FIJLCCEJANF->fields).BOJAPMNFCGF != false) {
      pOVar4 = (__this->fields).OONKKFFEMAK;
      if (pOVar4 == (OJHODFIGFMA_o *)0x0) goto LAB_034f0a50;
      OJHODFIGFMA__OJJDGIEHKFL(pOVar4,(MethodInfo *)0x0);
    }
    if ((__this->fields).AJLCPFKPBLI != false) {
      pOVar4 = (__this->fields).OONKKFFEMAK;
      if (pOVar4 == (OJHODFIGFMA_o *)0x0) goto LAB_034f0a50;
      OJHODFIGFMA__LACNHPKPDJK(pOVar4,(MethodInfo *)0x0);
    }
  }
  pOVar4 = (__this->fields).OONKKFFEMAK;
  if (pOVar4 != (OJHODFIGFMA_o *)0x0) {
    OJHODFIGFMA__MHKENGKHDKD(pOVar4,(MethodInfo *)0x0);
    return;
  }
LAB_034f0a50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

