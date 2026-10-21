// PADDODJLLFJ$$DFBPBPPNIBC @ RVA 0x358BC4C

bool PADDODJLLFJ__DFBPBPPNIBC(PADDODJLLFJ_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  
  if (LDOOMGABFME == (JMIFGHKOLCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (LDOOMGABFME->fields).ELCBIMMGAFJ;
  if (iVar1 != 1) {
    if (iVar1 == 7) {
      bVar2 = true;
    }
    else {
      if (iVar1 != 4) {
        return false;
      }
      bVar2 = COFFJADEMJF__EFLLMOAINGJ
                        ((COFFJADEMJF_o *)__this,(LDOOMGABFME->fields).CLHGGBABJPG,(MethodInfo *)0x0
                        );
      LDOOMGABFME = (JMIFGHKOLCL_o *)extraout_x1;
    }
    (__this->fields).LNEKPOAMMDK = bVar2;
  }
  bVar2 = PADDODJLLFJ__BCEJCCGFMOP(__this,(MethodInfo *)LDOOMGABFME);
  return bVar2;
}

