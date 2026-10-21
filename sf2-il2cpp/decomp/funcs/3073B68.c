// CNDPAJOLKFN$$CPKBJPIHPCL @ RVA 0x3073B68

void CNDPAJOLKFN__CPKBJPIHPCL
               (CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *FMPJLBLNHMC,CNDPAJOLKFN_o *IHEPHBIPLPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  PKHLGDMJPMF_Fields PVar4;
  
  if ((FMPJLBLNHMC != (CNDPAJOLKFN_o *)0x0) && (IHEPHBIPLPM != (CNDPAJOLKFN_o *)0x0)) {
    fVar2 = (FMPJLBLNHMC->fields).super.OHHDBINAJCB;
    PVar4 = (IHEPHBIPLPM->fields).super;
    fVar3 = (FMPJLBLNHMC->fields).super.JOLEIODMLFL;
    PVar1.JOLEIODMLFL = fVar3 + (PVar4.JOLEIODMLFL - fVar3) * 0.5;
    PVar1.OHHDBINAJCB = fVar2 + (PVar4.OHHDBINAJCB - fVar2) * 0.5;
    (__this->fields).super = PVar1;
    fVar2 = (FMPJLBLNHMC->fields).PPOPAMHBMGG;
    (__this->fields).PPOPAMHBMGG = fVar2 + ((IHEPHBIPLPM->fields).PPOPAMHBMGG - fVar2) * 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

