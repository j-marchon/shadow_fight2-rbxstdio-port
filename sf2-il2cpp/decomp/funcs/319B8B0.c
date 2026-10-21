// PKHLGDMJPMF$$LCAEEPKOHMN @ RVA 0x319B8B0

bool PKHLGDMJPMF__LCAEEPKOHMN
               (PKHLGDMJPMF_o *INOIMHOFGBG,PKHLGDMJPMF_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  
  if (INOIMHOFGBG != ACNOGKFFDEG) {
    bVar1 = false;
    if ((INOIMHOFGBG != (PKHLGDMJPMF_o *)0x0) && (ACNOGKFFDEG != (PKHLGDMJPMF_o *)0x0)) {
      bVar1 = ABS((INOIMHOFGBG->fields).OHHDBINAJCB - (ACNOGKFFDEG->fields).OHHDBINAJCB) +
              ABS((INOIMHOFGBG->fields).JOLEIODMLFL - (ACNOGKFFDEG->fields).JOLEIODMLFL) < 1e-10;
    }
    return bVar1;
  }
  return true;
}

