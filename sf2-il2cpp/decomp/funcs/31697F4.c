// AFIEAGJGHGK$$DFBPBPPNIBC @ RVA 0x31697F4

bool AFIEAGJGHGK__DFBPBPPNIBC(AFIEAGJGHGK_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    iVar1 = (LDOOMGABFME->fields).ELCBIMMGAFJ;
    if (iVar1 == 4) {
      (__this->fields).AECJDMDHFAO = false;
      bVar2 = COFFJADEMJF__EFLLMOAINGJ
                        ((COFFJADEMJF_o *)__this,(LDOOMGABFME->fields).CLHGGBABJPG,(MethodInfo *)0x0
                        );
      (__this->fields).DJILDJOHNGE = bVar2;
    }
    else if (iVar1 == 1) {
      if (((__this->fields).DJILDJOHNGE == false) ||
         (bVar2 = AFIEAGJGHGK__ANHKDPEGLLF(__this,(MethodInfo *)LDOOMGABFME), !bVar2)) {
        fVar3 = (__this->fields).GCHDBFJPGFJ + 1.0 / (float)(__this->fields).KKANPDICHBI;
        (__this->fields).GCHDBFJPGFJ = fVar3;
        if (60.0 <= fVar3) {
          iVar1 = (__this->fields).GKGHELAOIBG;
          (__this->fields).GCHDBFJPGFJ = 0.0;
          if (0 < iVar1) {
            (__this->fields).GKGHELAOIBG = iVar1 + -1;
            (__this->fields).CDGJHNFHJDI = true;
          }
        }
      }
      else if ((__this->fields).AECJDMDHFAO == false) {
        (__this->fields).GCHDBFJPGFJ = 0.0;
        (__this->fields).CDGJHNFHJDI = true;
        (__this->fields).GKGHELAOIBG = (__this->fields).PNIFHAMKLFF;
        (__this->fields).AECJDMDHFAO = true;
      }
    }
    return (__this->fields).GKGHELAOIBG < 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

