// CNDPAJOLKFN$$NALMKBHIHHJ @ RVA 0x307B77C

void CNDPAJOLKFN__NALMKBHIHHJ
               (CNDPAJOLKFN_o *COKCFOBBGLI,CNDPAJOLKFN_o *JEEAGFAHKJF,CNDPAJOLKFN_o *LKFALEIFDIO,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  PKHLGDMJPMF_Fields PVar4;
  
  if (((COKCFOBBGLI != (CNDPAJOLKFN_o *)0x0) && (JEEAGFAHKJF != (CNDPAJOLKFN_o *)0x0)) &&
     (LKFALEIFDIO != (CNDPAJOLKFN_o *)0x0)) {
    fVar2 = (COKCFOBBGLI->fields).super.OHHDBINAJCB;
    PVar4 = (JEEAGFAHKJF->fields).super;
    fVar3 = (COKCFOBBGLI->fields).super.JOLEIODMLFL;
    PVar1.JOLEIODMLFL = fVar3 + (PVar4.JOLEIODMLFL - fVar3) * 0.5;
    PVar1.OHHDBINAJCB = fVar2 + (PVar4.OHHDBINAJCB - fVar2) * 0.5;
    (LKFALEIFDIO->fields).super = PVar1;
    fVar2 = (COKCFOBBGLI->fields).PPOPAMHBMGG;
    (LKFALEIFDIO->fields).PPOPAMHBMGG = fVar2 + ((JEEAGFAHKJF->fields).PPOPAMHBMGG - fVar2) * 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

