// CNDPAJOLKFN$$GPDMMIIPDAB @ RVA 0x307BD94

CNDPAJOLKFN_o *
CNDPAJOLKFN__GPDMMIIPDAB(CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04565fe0 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fe0 = 1;
  }
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    fVar3 = (PHCOHKNFGLE->fields).super.JOLEIODMLFL;
    fVar1 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    fVar5 = (__this->fields).super.JOLEIODMLFL;
    fVar2 = (__this->fields).PPOPAMHBMGG;
    fVar4 = (PHCOHKNFGLE->fields).super.OHHDBINAJCB;
    fVar6 = (__this->fields).super.OHHDBINAJCB;
    __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this_00,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).super.OHHDBINAJCB = fVar5 * fVar1 - fVar2 * fVar3;
    (__this_00->fields).super.JOLEIODMLFL = fVar2 * fVar4 - fVar1 * fVar6;
    (__this_00->fields).PPOPAMHBMGG = fVar3 * fVar6 - fVar5 * fVar4;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

