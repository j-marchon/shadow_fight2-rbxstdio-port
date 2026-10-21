// ACBCKKIEOCE$$KFJHHLPBEAO @ RVA 0x35837D0

void ACBCKKIEOCE__KFJHHLPBEAO(ACBCKKIEOCE_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HBOAEOEEDEN_o *pHVar4;
  FFJHOBJFOLI_o *pFVar5;
  
  pFVar5 = (__this->fields).FFBMBKHHLPO;
  iVar1 = (__this->fields).EKEJMKEFJIO + 1;
  (__this->fields).EKEJMKEFJIO = iVar1;
  if (pFVar5 == (FFJHOBJFOLI_o *)0x0) goto LAB_036838ac;
  iVar2 = (pFVar5->fields).FNHHIEKCLPI;
  iVar3 = iVar1 - iVar2;
  if (iVar3 == 0 || iVar1 < iVar2) {
    if ((__this->fields).NBGPKFHLCOG == false) {
      (__this->fields).EKEJMKEFJIO = 0;
    }
    (__this->fields).JAAGMIKHEPA = 0.0;
LAB_03683840:
    (__this->fields).EPBLDDIIKFF = false;
  }
  else if ((pFVar5->fields).IAEPIMJNGNJ < iVar1) {
    iVar2 = (pFVar5->fields).BADGBPKKAMP;
    iVar3 = iVar1 - iVar2;
    if (iVar3 == 0 || iVar1 < iVar2) {
      (__this->fields).JAAGMIKHEPA = 255.0;
      (__this->fields).EPBLDDIIKFF = true;
    }
    else {
      if (iVar1 <= (pFVar5->fields).MJDFEDKPMOP) {
        (__this->fields).JAAGMIKHEPA = 255.0 - (__this->fields).JGIBNAHJPGC * (float)iVar3;
        goto LAB_03683840;
      }
      (__this->fields).EKEJMKEFJIO = 0;
      (__this->fields).JAAGMIKHEPA = 0.0;
      (__this->fields).EPBLDDIIKFF = false;
      ACBCKKIEOCE__HDDCMANACEF(__this,method);
    }
  }
  else {
    (__this->fields).EPBLDDIIKFF = true;
    (__this->fields).JAAGMIKHEPA = (__this->fields).PJDAFHGHKIE * (float)iVar3;
  }
  pHVar4 = (__this->fields).CFFCMDGCPOC;
  if (pHVar4 != (HBOAEOEEDEN_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03683888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pHVar4->klass->vtable)._4_LLCONNGHGKD.methodPtr)
              (pHVar4,(pHVar4->klass->vtable)._4_LLCONNGHGKD.method);
    return;
  }
LAB_036838ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

