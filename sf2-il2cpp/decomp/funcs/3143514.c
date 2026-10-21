// IPPEHAJADOO.GHFEMFCMBEJ$$LLCONNGHGKD @ RVA 0x3143514

void IPPEHAJADOO_GHFEMFCMBEJ__LLCONNGHGKD(IPPEHAJADOO_GHFEMFCMBEJ_o *__this,MethodInfo *method)

{
  int PKDBOMAHGHC;
  bool bVar1;
  IIMNGGHGKOD_o *pIVar2;
  
  pIVar2 = (__this->fields).OFJCBIEADON;
  PKDBOMAHGHC = (__this->fields).PFOGLMGBICJ + 1;
  (__this->fields).PFOGLMGBICJ = PKDBOMAHGHC;
  if (pIVar2 != (IIMNGGHGKOD_o *)0x0) {
    bVar1 = IIMNGGHGKOD__KOLIFGAJOHA(pIVar2,PKDBOMAHGHC,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = (__this->fields).OFJCBIEADON;
      if (pIVar2 == (IIMNGGHGKOD_o *)0x0) goto LAB_03243564;
      (*(pIVar2->klass->vtable)._6_DPGIIHOJJDE.methodPtr)
                (pIVar2,(__this->fields).PDKOKGEECDC,(pIVar2->klass->vtable)._6_DPGIIHOJJDE.method);
      (__this->fields).COJOJNLJBDO = true;
    }
    return;
  }
LAB_03243564:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

