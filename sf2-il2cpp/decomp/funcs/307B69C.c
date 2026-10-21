// CNDPAJOLKFN$$DJOFPNGJPFM @ RVA 0x307B69C

CNDPAJOLKFN_o *
CNDPAJOLKFN__DJOFPNGJPFM(CNDPAJOLKFN_o *PHCOHKNFGLE,float OOGPLJBADCD,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHCOHKNFGLE;
  if ((DAT_04565fd2 & 1) == 0) {
    auVar4 = FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fd2 = 1;
  }
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    fVar3 = (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB + OOGPLJBADCD;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL + OOGPLJBADCD;
    PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = fVar3 + OOGPLJBADCD;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

