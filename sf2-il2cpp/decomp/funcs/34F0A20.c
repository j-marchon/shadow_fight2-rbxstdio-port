// OLKKAIFGGAK$$AHDBBOHJFCN @ RVA 0x34F0A20

bool OLKKAIFGGAK__AHDBBOHJFCN(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  MMDPNDAECII_o *__this_00;
  ulong uVar2;
  OLKKAIFGGAK_IOJDLINDBDK_o *pOVar3;
  
  bVar1 = OLKKAIFGGAK__FKONICCMMDK(__this,method);
  if (!bVar1) {
    return bVar1;
  }
  __this_00 = (__this->fields).GJLEPEPAOKD;
  if (__this_00 != (MMDPNDAECII_o *)0x0) {
    if ((__this_00->fields).BNHJIKJAHHF != false) {
      MMDPNDAECII__EABJNHKPJOM(__this_00,(MethodInfo *)0x0);
    }
    pOVar3 = (__this->fields).CGJACALFIKM;
    if (pOVar3 != (OLKKAIFGGAK_IOJDLINDBDK_o *)0x0) {
      uVar2 = (*(__this->klass->vtable)._8_CBGCMJCJJKP.methodPtr)
                        (__this,(pOVar3->fields).BNGDONJEHMH,
                         (ulong)(uint)(pOVar3->fields).HIHFJJOMDBF,
                         (ulong)(pOVar3->fields).FMGLHJDODPA,
                         (ulong)(uint)(pOVar3->fields).JAHFGPMFLGN,
                         (__this->klass->vtable)._8_CBGCMJCJJKP.method);
      if ((uVar2 & 1) != 0) {
        pOVar3 = (__this->fields).CGJACALFIKM;
        if (pOVar3 == (OLKKAIFGGAK_IOJDLINDBDK_o *)0x0) goto LAB_035f0a9c;
        OLKKAIFGGAK_IOJDLINDBDK__NDNPGAKJLHM(pOVar3,(MethodInfo *)0x0);
      }
                    /* try { // try from 035f0a94 to 036f0d2f has its CatchHandler @ 035f0a94
                       catch() { ... } // from try @ 035f0a94 with catch @ 035f0a94
                       catch() { ... } // from try @ 035f0db4 with catch @ 035f0a94
                       catch() { ... } // from try @ 035f0e74 with catch @ 035f0a94
                       catch() { ... } // from try @ 035f1018 with catch @ 035f0a94
                       catch() { ... } // from try @ 035f103c with catch @ 035f0a94
                       catch() { ... } // from try @ 035f1074 with catch @ 035f0a94
                       catch() { ... } // from try @ 035f10a0 with catch @ 035f0a94
                       catch() { ... } // from try @ 035f10d0 with catch @ 035f0a94 */
      return bVar1;
    }
  }
LAB_035f0a9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

