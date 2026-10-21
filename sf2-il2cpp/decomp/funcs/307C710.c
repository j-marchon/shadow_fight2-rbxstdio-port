// CNDPAJOLKFN$$DPLKDGIBBEL @ RVA 0x307C710

void CNDPAJOLKFN__DPLKDGIBBEL
               (CNDPAJOLKFN_o *FMPJLBLNHMC,CNDPAJOLKFN_o *IHEPHBIPLPM,float OEBANKNLEMN,
               CNDPAJOLKFN_o *JGHPAFEFEFB,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  PKHLGDMJPMF_Fields PVar6;
  
  if (((FMPJLBLNHMC != (CNDPAJOLKFN_o *)0x0) && (IHEPHBIPLPM != (CNDPAJOLKFN_o *)0x0)) &&
     (JGHPAFEFEFB != (CNDPAJOLKFN_o *)0x0)) {
    fVar2 = (FMPJLBLNHMC->fields).super.OHHDBINAJCB;
    fVar4 = (FMPJLBLNHMC->fields).PPOPAMHBMGG;
    fVar5 = (IHEPHBIPLPM->fields).PPOPAMHBMGG;
    PVar6 = (IHEPHBIPLPM->fields).super;
    fVar3 = (FMPJLBLNHMC->fields).super.JOLEIODMLFL;
    PVar1.JOLEIODMLFL = fVar3 + (PVar6.JOLEIODMLFL - fVar3) * OEBANKNLEMN;
    PVar1.OHHDBINAJCB = fVar2 + (PVar6.OHHDBINAJCB - fVar2) * OEBANKNLEMN;
    (JGHPAFEFEFB->fields).super = PVar1;
    (JGHPAFEFEFB->fields).PPOPAMHBMGG = fVar4 + (fVar5 - fVar4) * OEBANKNLEMN;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

