// PKHLGDMJPMF$$PHJLLEGNFPK @ RVA 0x319B6E0

void PKHLGDMJPMF__PHJLLEGNFPK
               (CNDPAJOLKFN_o *FCPALKBOIFD,CNDPAJOLKFN_o *KMCNNACKBFO,FDHJDNACICH_o *NFNEMDPDIDP,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = PKHLGDMJPMF__PAMPGOGMIJN
                    (FCPALKBOIFD,(PKHLGDMJPMF_o *)KMCNNACKBFO,(MethodInfo *)NFNEMDPDIDP);
  if (((FCPALKBOIFD != (CNDPAJOLKFN_o *)0x0) && (KMCNNACKBFO != (CNDPAJOLKFN_o *)0x0)) &&
     (NFNEMDPDIDP != (FDHJDNACICH_o *)0x0)) {
    fVar2 = (FCPALKBOIFD->fields).super.JOLEIODMLFL;
    fVar3 = (fVar2 - (KMCNNACKBFO->fields).super.JOLEIODMLFL) / fVar1;
    (NFNEMDPDIDP->fields).FMPJLBLNHMC = fVar3;
    fVar4 = (FCPALKBOIFD->fields).super.OHHDBINAJCB;
    fVar1 = ((KMCNNACKBFO->fields).super.OHHDBINAJCB - fVar4) / fVar1;
    (NFNEMDPDIDP->fields).IHEPHBIPLPM = fVar1;
    (NFNEMDPDIDP->fields).CJDCMKEBBNK = -(fVar3 * fVar4 + fVar2 * fVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

