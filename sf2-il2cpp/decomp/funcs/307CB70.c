// CNDPAJOLKFN$$GHHOKPBPCJI @ RVA 0x307CB70

void CNDPAJOLKFN__GHHOKPBPCJI(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  float fVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar4;
  ulong uVar3;
  float fVar5;
  float fVar6;
  
  PVar2 = (__this->fields).super;
  fVar6 = (__this->fields).PPOPAMHBMGG;
  fVar1 = PVar2.OHHDBINAJCB;
  fVar4 = PVar2.JOLEIODMLFL;
  uVar3 = NEON_scvtf(CONCAT44((int)fVar4,(int)fVar1),4);
  fVar5 = -2.1474836e+09;
  if (fVar6 != INFINITY) {
    fVar5 = (float)(int)fVar6;
  }
  (__this->fields).super =
       (PKHLGDMJPMF_Fields)
       (uVar3 ^ (uVar3 ^ 0xcf000000cf000000) &
                CONCAT44(-(uint)(fVar4 == INFINITY),-(uint)(fVar1 == INFINITY)));
  (__this->fields).PPOPAMHBMGG = fVar5;
  return;
}

