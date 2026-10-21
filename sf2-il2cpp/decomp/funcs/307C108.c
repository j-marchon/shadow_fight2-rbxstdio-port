// CNDPAJOLKFN$$LFENGGKOJDO @ RVA 0x307C108

void CNDPAJOLKFN__LFENGGKOJDO
               (CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,float KBJAJGBMEPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    PVar3 = (__this->fields).super;
    PVar2.OHHDBINAJCB = PVar3.OHHDBINAJCB + PVar1.OHHDBINAJCB * KBJAJGBMEPM;
    PVar2.JOLEIODMLFL = PVar3.JOLEIODMLFL + PVar1.JOLEIODMLFL * KBJAJGBMEPM;
    (__this->fields).super = PVar2;
    (__this->fields).PPOPAMHBMGG =
         (__this->fields).PPOPAMHBMGG + (PHCOHKNFGLE->fields).PPOPAMHBMGG * KBJAJGBMEPM;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

