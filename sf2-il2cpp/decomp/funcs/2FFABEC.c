// JMDPBFOCHHP.FNILDHLJBBJ$$PCPJDHIAAHO @ RVA 0x2FFABEC

System_String_o *
JMDPBFOCHHP_FNILDHLJBBJ__PCPJDHIAAHO
          (JMDPBFOCHHP_FNILDHLJBBJ_o *__this,bool JIDOAJBMKPL,MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  System_String_o **ppSVar2;
  
  if ((DAT_04565ac8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04565ac8 = 1;
  }
  if (JIDOAJBMKPL) {
    ppSVar2 = &(__this->fields).KDHKFELBFJN;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar2,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_030fac70;
    ppSVar2 = &(__this->fields).BDDKNEAEOEI;
    CJNHFNHJHPE = *ppSVar2;
  }
  else {
    ppSVar2 = &(__this->fields).MOPLJNDDFGC;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar2,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_030fac70;
    ppSVar2 = &(__this->fields).LAOIKCJBELO;
    CJNHFNHJHPE = *ppSVar2;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = (System_String_o **)&StringLiteral_1;
  }
LAB_030fac70:
  return *ppSVar2;
}

