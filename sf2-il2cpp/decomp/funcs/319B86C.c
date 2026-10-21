// PKHLGDMJPMF$$LJOKBIDEOMJ @ RVA 0x319B86C

bool PKHLGDMJPMF__LJOKBIDEOMJ
               (PKHLGDMJPMF_o *COKCFOBBGLI,PKHLGDMJPMF_o *JEEAGFAHKJF,MethodInfo *method)

{
  bool bVar1;
  
  if (COKCFOBBGLI != JEEAGFAHKJF) {
    bVar1 = true;
    if ((COKCFOBBGLI != (PKHLGDMJPMF_o *)0x0) && (JEEAGFAHKJF != (PKHLGDMJPMF_o *)0x0)) {
      bVar1 = 1e-10 <= ABS((COKCFOBBGLI->fields).OHHDBINAJCB - (JEEAGFAHKJF->fields).OHHDBINAJCB) +
                       ABS((COKCFOBBGLI->fields).JOLEIODMLFL - (JEEAGFAHKJF->fields).JOLEIODMLFL);
    }
    return bVar1;
  }
  return false;
}

