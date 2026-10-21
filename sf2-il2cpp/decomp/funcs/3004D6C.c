// PHGEMMOPIFJ$$EPBENPDCBFE @ RVA 0x3004D6C

bool PHGEMMOPIFJ__EPBENPDCBFE(PHGEMMOPIFJ_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = 0;
  if ((AHEFOIOKDOK->fields).LMKHOJFOPEB == false) goto LAB_03104dec;
  iVar1 = (__this->fields).JBNGADJBDHB;
  if (iVar1 == 0) {
LAB_03104da8:
    iVar1 = (__this->fields).ABLHFFFHAMP;
    if (iVar1 == 0) {
LAB_03104de0:
      bVar3 = 1;
      goto LAB_03104dec;
    }
    switch((AHEFOIOKDOK->fields).KNDEADMMCPO) {
    case 2:
    case 3:
    case 4:
    case 5:
      if (iVar1 == 1) goto LAB_03104de0;
    }
  }
  else {
    bVar2 = iVar1 == 2;
    if ((AHEFOIOKDOK->fields).DONKDCJLBPN != false) {
      bVar2 = iVar1 == 1;
    }
    if (bVar2) goto LAB_03104da8;
  }
  bVar3 = 0;
LAB_03104dec:
  return (bool)(bVar3 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

