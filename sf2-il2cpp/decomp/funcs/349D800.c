// NGKBNOEJLPH$$GEMFIOGBGHI @ RVA 0x349D800

void NGKBNOEJLPH__GEMFIOGBGHI(NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  ECENNHNBAME_o **ppEVar1;
  bool bVar2;
  ECENNHNBAME_o *pEVar3;
  OPNFCOGALLI_o *pOVar4;
  
  bVar2 = NGKBNOEJLPH__ABHJLMEPMBF(__this,(MethodInfo *)NLEBDPHNIDI);
  if (bVar2) {
    pOVar4 = (__this->fields).LGJKGLINMGP;
                    /* try { // try from 0359d81c to 0369d843 has its CatchHandler @ 0359db0c */
    if (pOVar4 == (OPNFCOGALLI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) || ((pOVar4->fields).AANDHIFMLHC == false)) {
      (__this->fields).JDEONPMMCEL = (ECENNHNBAME_o *)0x0;
      NLEBDPHNIDI = (ECENNHNBAME_o *)0x0;
    }
    else {
      pEVar3 = (NLEBDPHNIDI->fields).CPCDDBKNDAC;
      ppEVar1 = &(__this->fields).JDEONPMMCEL;
      if (pEVar3 == (ECENNHNBAME_o *)0x0) {
        *ppEVar1 = NLEBDPHNIDI;
      }
      else {
        *ppEVar1 = pEVar3;
        NLEBDPHNIDI = pEVar3;
      }
    }
    thunk_FUN_01c20e04(&(__this->fields).JDEONPMMCEL,NLEBDPHNIDI);
    bVar2 = NGKBNOEJLPH__PDAGBPHALDN(__this,(__this->fields).JDEONPMMCEL,method);
    if (bVar2) {
      (__this->fields).KNGDHCILNLD = 1;
    }
  }
                    /* try { // try from 0359d878 to 0369d8a3 has its CatchHandler @ 0359db08 */
  return;
}

