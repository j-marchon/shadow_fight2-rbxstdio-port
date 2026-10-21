// CNDPAJOLKFN$$DJOFPNGJPFM @ RVA 0x307BBC4

CNDPAJOLKFN_o *
CNDPAJOLKFN__DJOFPNGJPFM(CNDPAJOLKFN_o *BJCLOGCDNEG,CNDPAJOLKFN_o *JDFOLIMEDCJ,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04565fd6 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd6 = 1;
  }
  if ((BJCLOGCDNEG != (CNDPAJOLKFN_o *)0x0) && (JDFOLIMEDCJ != (CNDPAJOLKFN_o *)0x0)) {
    PVar1 = (BJCLOGCDNEG->fields).super;
    PVar3 = (JDFOLIMEDCJ->fields).super;
    fVar4 = (BJCLOGCDNEG->fields).PPOPAMHBMGG;
    fVar5 = (JDFOLIMEDCJ->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB + PVar3.OHHDBINAJCB;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL + PVar3.JOLEIODMLFL;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = fVar4 + fVar5;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

