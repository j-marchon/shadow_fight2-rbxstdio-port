// KAMBBJFPLGM$$MKICELHALEL @ RVA 0x311AC98

bool KAMBBJFPLGM__MKICELHALEL(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  int iVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  
  pEVar2 = (__this->fields).FLAFELDNABC;
  if ((pEVar2 != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
    iVar1 = (pGVar3->fields).PFJPLCAIGJH;
    if (iVar1 == 3) {
      return true;
    }
    return iVar1 - 1U < 2;
  }
  return false;
}

