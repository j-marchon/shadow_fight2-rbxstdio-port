// CNDPAJOLKFN$$GPDMMIIPDAB @ RVA 0x307C518

CNDPAJOLKFN_o *
CNDPAJOLKFN__GPDMMIIPDAB
          (CNDPAJOLKFN_o *COKCFOBBGLI,CNDPAJOLKFN_o *JEEAGFAHKJF,CNDPAJOLKFN_o *JFIFAPEAPCF,
          CNDPAJOLKFN_o *DHAMLEJHOPI,MethodInfo *method)

{
  bool bVar1;
  CNDPAJOLKFN_o *__this;
  float fVar2;
  float fVar3;
  float fVar4;
  PKHLGDMJPMF_Fields PVar5;
  PKHLGDMJPMF_Fields PVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_04565fdd & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fdd = 1;
  }
  if ((((JEEAGFAHKJF != (CNDPAJOLKFN_o *)0x0) && (COKCFOBBGLI != (CNDPAJOLKFN_o *)0x0)) &&
      (JFIFAPEAPCF != (CNDPAJOLKFN_o *)0x0)) && (DHAMLEJHOPI != (CNDPAJOLKFN_o *)0x0)) {
    fVar7 = (COKCFOBBGLI->fields).super.OHHDBINAJCB;
    fVar3 = (COKCFOBBGLI->fields).super.JOLEIODMLFL;
    fVar11 = (JFIFAPEAPCF->fields).super.OHHDBINAJCB;
    fVar12 = (JFIFAPEAPCF->fields).super.JOLEIODMLFL;
    fVar8 = (JEEAGFAHKJF->fields).super.JOLEIODMLFL - fVar3;
    fVar9 = fVar11 - (DHAMLEJHOPI->fields).super.OHHDBINAJCB;
    fVar10 = fVar12 - (DHAMLEJHOPI->fields).super.JOLEIODMLFL;
    fVar4 = (JEEAGFAHKJF->fields).super.OHHDBINAJCB - fVar7;
    fVar2 = fVar8 * fVar9 - fVar10 * fVar4;
    bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
    __this = (CNDPAJOLKFN_o *)0x0;
    if (!bVar1) {
      fVar11 = fVar11 - fVar7;
      fVar12 = fVar12 - fVar3;
      fVar3 = fVar8 * fVar11 - fVar12 * fVar4;
      fVar11 = fVar9 * fVar12 - fVar10 * fVar11;
      if (ABS(fVar11) + ABS(fVar2) + ABS(fVar3) < 1e-10) {
        __this = (CNDPAJOLKFN_o *)0x0;
      }
      else {
        bVar1 = Util__BKJNEKOBKED(fVar3 / fVar2,0.0,1.0,(MethodInfo *)0x0);
        __this = (CNDPAJOLKFN_o *)0x0;
        if (bVar1) {
          fVar11 = fVar11 / fVar2;
          bVar1 = Util__BKJNEKOBKED(fVar11,0.0,1.0,(MethodInfo *)0x0);
          __this = (CNDPAJOLKFN_o *)0x0;
          if (bVar1) {
            PVar5 = (COKCFOBBGLI->fields).super;
            PVar6 = (JEEAGFAHKJF->fields).super;
            __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
            fVar2 = PVar5.OHHDBINAJCB;
            fVar12 = PVar5.JOLEIODMLFL;
            PVar5.OHHDBINAJCB = fVar2 + (PVar6.OHHDBINAJCB - fVar2) * fVar11;
            PVar5.JOLEIODMLFL = fVar12 + (PVar6.JOLEIODMLFL - fVar12) * fVar11;
            PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
            (__this->fields).super = PVar5;
            (__this->fields).PPOPAMHBMGG = 0.0;
          }
        }
      }
    }
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

