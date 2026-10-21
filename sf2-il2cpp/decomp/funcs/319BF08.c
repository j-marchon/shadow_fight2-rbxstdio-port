// PKHLGDMJPMF$$DJOFPNGJPFM @ RVA 0x319BF08

PKHLGDMJPMF_o *
PKHLGDMJPMF__DJOFPNGJPFM(PKHLGDMJPMF_o *COKCFOBBGLI,PKHLGDMJPMF_o *JEEAGFAHKJF,MethodInfo *method)

{
  PKHLGDMJPMF_o *__this;
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  if ((DAT_04566ab0 & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_04566ab0 = 1;
  }
  if ((COKCFOBBGLI != (PKHLGDMJPMF_o *)0x0) && (JEEAGFAHKJF != (PKHLGDMJPMF_o *)0x0)) {
    PVar1 = COKCFOBBGLI->fields;
    PVar2 = JEEAGFAHKJF->fields;
    __this = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).OHHDBINAJCB = PVar1.OHHDBINAJCB + PVar2.OHHDBINAJCB;
    (__this->fields).JOLEIODMLFL = PVar1.JOLEIODMLFL + PVar2.JOLEIODMLFL;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

