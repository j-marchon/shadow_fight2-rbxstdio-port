// CNDPAJOLKFN$$IMINLGEKHIH @ RVA 0x307BE54

CNDPAJOLKFN_o * CNDPAJOLKFN__IMINLGEKHIH(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  PKHLGDMJPMF_Fields PVar3;
  PKHLGDMJPMF_Fields PVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (__this->fields).super.OHHDBINAJCB;
  fVar5 = (__this->fields).super.JOLEIODMLFL;
  fVar6 = (__this->fields).PPOPAMHBMGG;
  fVar2 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar6 * fVar6);
  bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).super.OHHDBINAJCB = 1.0;
    (__this->fields).super.JOLEIODMLFL = 0.0;
    fVar2 = 0.0;
  }
  else {
    PVar3 = (__this->fields).super;
    fVar2 = 1.0 / fVar2;
    PVar4.OHHDBINAJCB = PVar3.OHHDBINAJCB * fVar2;
    PVar4.JOLEIODMLFL = PVar3.JOLEIODMLFL * fVar2;
    (__this->fields).super = PVar4;
    fVar2 = fVar2 * (__this->fields).PPOPAMHBMGG;
  }
  (__this->fields).PPOPAMHBMGG = fVar2;
  return __this;
}

