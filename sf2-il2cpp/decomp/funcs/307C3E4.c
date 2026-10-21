// CNDPAJOLKFN$$LFENGGKOJDO @ RVA 0x307C3E4

CNDPAJOLKFN_o *
CNDPAJOLKFN__LFENGGKOJDO(CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (__this->fields).super;
    PVar3 = (PHCOHKNFGLE->fields).super;
    PVar2.OHHDBINAJCB = PVar1.OHHDBINAJCB + PVar3.OHHDBINAJCB;
    PVar2.JOLEIODMLFL = PVar1.JOLEIODMLFL + PVar3.JOLEIODMLFL;
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG = (__this->fields).PPOPAMHBMGG + (PHCOHKNFGLE->fields).PPOPAMHBMGG;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

