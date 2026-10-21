// CNDPAJOLKFN$$HIALHOGCAEE @ RVA 0x307B9B4

void CNDPAJOLKFN__HIALHOGCAEE
               (CNDPAJOLKFN_o *__this,CNDPAJOLKFN_o *PHCOHKNFGLE,float KBJAJGBMEPM,
               MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  PKHLGDMJPMF_Fields PVar3;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar2 = (PHCOHKNFGLE->fields).super;
    PVar3 = (__this->fields).super;
    PVar1.JOLEIODMLFL = PVar3.JOLEIODMLFL + PVar2.JOLEIODMLFL * KBJAJGBMEPM;
    PVar1.OHHDBINAJCB = PVar3.OHHDBINAJCB + PVar2.OHHDBINAJCB * KBJAJGBMEPM;
    (__this->fields).super = PVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

