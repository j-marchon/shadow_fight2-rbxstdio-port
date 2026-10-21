// CNDPAJOLKFN$$DPLKDGIBBEL @ RVA 0x307C184

CNDPAJOLKFN_o *
CNDPAJOLKFN__DPLKDGIBBEL
          (CNDPAJOLKFN_o *FMPJLBLNHMC,CNDPAJOLKFN_o *IHEPHBIPLPM,float OEBANKNLEMN,
          MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  float fVar1;
  float fVar2;
  PKHLGDMJPMF_Fields PVar3;
  PKHLGDMJPMF_Fields PVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04565fd9 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd9 = 1;
  }
  if ((FMPJLBLNHMC != (CNDPAJOLKFN_o *)0x0) && (IHEPHBIPLPM != (CNDPAJOLKFN_o *)0x0)) {
    PVar3 = (IHEPHBIPLPM->fields).super;
    PVar4 = (FMPJLBLNHMC->fields).super;
    fVar5 = (FMPJLBLNHMC->fields).PPOPAMHBMGG;
    fVar6 = (IHEPHBIPLPM->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    fVar1 = PVar4.OHHDBINAJCB;
    fVar2 = PVar4.JOLEIODMLFL;
    PVar4.OHHDBINAJCB = fVar1 + (PVar3.OHHDBINAJCB - fVar1) * OEBANKNLEMN;
    PVar4.JOLEIODMLFL = fVar2 + (PVar3.JOLEIODMLFL - fVar2) * OEBANKNLEMN;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar4;
    (__this->fields).PPOPAMHBMGG = fVar5 + (fVar6 - fVar5) * OEBANKNLEMN;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

