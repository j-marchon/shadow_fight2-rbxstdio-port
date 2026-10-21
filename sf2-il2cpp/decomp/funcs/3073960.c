// CNDPAJOLKFN$$LCAEEPKOHMN @ RVA 0x3073960

bool CNDPAJOLKFN__LCAEEPKOHMN
               (CNDPAJOLKFN_o *INOIMHOFGBG,CNDPAJOLKFN_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (INOIMHOFGBG != ACNOGKFFDEG) {
    bVar1 = false;
    if ((INOIMHOFGBG != (CNDPAJOLKFN_o *)0x0) && (ACNOGKFFDEG != (CNDPAJOLKFN_o *)0x0)) {
      PVar2 = (ACNOGKFFDEG->fields).super;
      PVar3 = (INOIMHOFGBG->fields).super;
      bVar1 = ABS(PVar3.OHHDBINAJCB - PVar2.OHHDBINAJCB) +
              ABS(PVar3.JOLEIODMLFL - PVar2.JOLEIODMLFL) +
              ABS((INOIMHOFGBG->fields).PPOPAMHBMGG - (ACNOGKFFDEG->fields).PPOPAMHBMGG) <= 1e-10;
    }
    return bVar1;
  }
  return true;
}

