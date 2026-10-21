// EDIHAKCJAMI$$DFBPBPPNIBC @ RVA 0x31D8824

bool EDIHAKCJAMI__DFBPBPPNIBC(EDIHAKCJAMI_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FFJHOBJFOLI_o *pFVar4;
  float fVar5;
  
  pFVar4 = (__this->fields).KGDFAPCDMPE;
  iVar1 = (__this->fields).EKEJMKEFJIO + 1;
  (__this->fields).EKEJMKEFJIO = iVar1;
  if (pFVar4 == (FFJHOBJFOLI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = (pFVar4->fields).FNHHIEKCLPI;
  iVar3 = iVar1 - iVar2;
  if (iVar3 == 0 || iVar1 < iVar2) {
    fVar5 = 0.0;
    if ((__this->fields).NBGPKFHLCOG != false) goto LAB_032d88c0;
  }
  else {
    if (iVar1 <= (pFVar4->fields).IAEPIMJNGNJ) {
      fVar5 = (__this->fields).PJDAFHGHKIE * (float)iVar3;
      goto LAB_032d88c0;
    }
    iVar2 = (pFVar4->fields).BADGBPKKAMP;
    iVar3 = iVar1 - iVar2;
    if (iVar3 == 0 || iVar1 < iVar2) {
      fVar5 = 255.0;
      goto LAB_032d88c0;
    }
    if (iVar1 <= (pFVar4->fields).MJDFEDKPMOP) {
      fVar5 = 255.0 - (__this->fields).JGIBNAHJPGC * (float)iVar3;
      goto LAB_032d88c0;
    }
  }
  fVar5 = 0.0;
  (__this->fields).EKEJMKEFJIO = 0;
LAB_032d88c0:
  (__this->fields).JAAGMIKHEPA = fVar5;
  return true;
}

