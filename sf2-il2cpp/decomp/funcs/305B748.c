// ACHLOMELAJE$$FNLFKFPFDKM @ RVA 0x305B748

DNELIPCHKLK_o * ACHLOMELAJE__FNLFKFPFDKM(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  DNELIPCHKLK_o *pDVar2;
  
  if ((DAT_04565e84 & 1) == 0) {
    FUN_01bab630(&StringLiteral_15260);
    DAT_04565e84 = 1;
  }
  pDVar2 = (__this->fields).PFHAMCJEBGJ;
  if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
    bVar1 = DNELIPCHKLK__JBCKLNNLKMG(pDVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pDVar2 = (__this->fields).PFHAMCJEBGJ;
      if (pDVar2 == (DNELIPCHKLK_o *)0x0) goto LAB_0315b7b4;
      DNELIPCHKLK__LGOFNFEIKFB(pDVar2,StringLiteral_15260,(MethodInfo *)0x0);
    }
    return (__this->fields).PFHAMCJEBGJ;
  }
LAB_0315b7b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

