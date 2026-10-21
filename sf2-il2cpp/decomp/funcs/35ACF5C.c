// GEBHIBIEAJE$$DOCFNLBLJFO @ RVA 0x35ACF5C

void GEBHIBIEAJE__DOCFNLBLJFO(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  IEFEBEDLHNN_o *pIVar2;
  CNDPAJOLKFN_o *JDFOLIMEDCJ;
  CNDPAJOLKFN_o *BJCLOGCDNEG;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float IKADKIPIIMD;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
  pIVar1 = (__this->fields)._HDEPMIOPNAJ_k__BackingField;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    if ((pIVar1->fields).EKMNMODEKKP == false) {
      pIVar2 = (__this->fields)._GNLFCODFOOM_k__BackingField;
      if (pIVar2 == (IEFEBEDLHNN_o *)0x0) goto LAB_036ad0dc;
      if ((pIVar2->fields).EKMNMODEKKP == false) {
        return;
      }
    }
    fVar3 = IEFEBEDLHNN__NODBECJPBDC(pIVar1,(MethodInfo *)0x0);
    pIVar1 = (__this->fields)._GNLFCODFOOM_k__BackingField;
    if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
      fVar4 = IEFEBEDLHNN__NODBECJPBDC(pIVar1,(MethodInfo *)0x0);
      pIVar1 = (__this->fields)._HDEPMIOPNAJ_k__BackingField;
      if ((pIVar1 != (IEFEBEDLHNN_o *)0x0) &&
         (pIVar2 = (__this->fields)._GNLFCODFOOM_k__BackingField, pIVar2 != (IEFEBEDLHNN_o *)0x0)) {
        BJCLOGCDNEG = (pIVar1->fields).CNMHHKAMGPI;
        local_60.fakeValueActive = (__this->fields).DMFJKKCCEFD.fields.fakeValueActive;
        local_60.inited = (__this->fields).DMFJKKCCEFD.fields.inited;
        local_60._18_2_ = *(undefined2 *)&(__this->fields).DMFJKKCCEFD.fields.field_0x12;
        local_60.hiddenValueOldByte4.fields =
             (__this->fields).DMFJKKCCEFD.fields.hiddenValueOldByte4.fields;
        local_60.fakeValue = (__this->fields).DMFJKKCCEFD.fields.fakeValue;
        local_60.currentCryptoKey = (__this->fields).DMFJKKCCEFD.fields.currentCryptoKey;
        local_60.hiddenValue = (__this->fields).DMFJKKCCEFD.fields.hiddenValue;
        JDFOLIMEDCJ = (pIVar2->fields).CNMHHKAMGPI;
        fVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                           (MethodInfo *)0x0);
        fVar6 = CNDPAJOLKFN__FCEAFPLBNGE(BJCLOGCDNEG,JDFOLIMEDCJ,(MethodInfo *)0x0);
        if ((BJCLOGCDNEG != (CNDPAJOLKFN_o *)0x0) &&
           ((JDFOLIMEDCJ != (CNDPAJOLKFN_o *)0x0 &&
            (pIVar1 = (__this->fields)._HDEPMIOPNAJ_k__BackingField, pIVar1 != (IEFEBEDLHNN_o *)0x0)
            ))) {
          fVar5 = fVar5 / fVar6;
          fVar6 = (1.0 - fVar5) / (fVar3 + fVar4);
          fVar3 = fVar3 * fVar6;
          fVar4 = fVar4 * fVar6;
          IKADKIPIIMD = fVar3 * (BJCLOGCDNEG->fields).super.OHHDBINAJCB +
                        fVar4 * (JDFOLIMEDCJ->fields).super.OHHDBINAJCB;
          fVar6 = fVar3 * (BJCLOGCDNEG->fields).super.JOLEIODMLFL +
                  fVar4 * (JDFOLIMEDCJ->fields).super.JOLEIODMLFL;
          fVar3 = fVar3 * (BJCLOGCDNEG->fields).PPOPAMHBMGG +
                  fVar4 * (JDFOLIMEDCJ->fields).PPOPAMHBMGG;
          if ((pIVar1->fields).EKMNMODEKKP != false) {
            CNDPAJOLKFN__PGLILPKGILI(BJCLOGCDNEG,fVar5,(MethodInfo *)0x0);
            CNDPAJOLKFN__LFENGGKOJDO(BJCLOGCDNEG,IKADKIPIIMD,fVar6,fVar3,(MethodInfo *)0x0);
          }
          pIVar1 = (__this->fields)._GNLFCODFOOM_k__BackingField;
          if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
            if ((pIVar1->fields).EKMNMODEKKP != false) {
              CNDPAJOLKFN__PGLILPKGILI(JDFOLIMEDCJ,fVar5,(MethodInfo *)0x0);
              CNDPAJOLKFN__LFENGGKOJDO(JDFOLIMEDCJ,IKADKIPIIMD,fVar6,fVar3,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
LAB_036ad0dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

