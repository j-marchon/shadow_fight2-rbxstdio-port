// OLKKAIFGGAK$$DMCLJEHHEFE @ RVA 0x34F67BC

bool OLKKAIFGGAK__DMCLJEHHEFE(OLKKAIFGGAK_o *__this,bool JGBNEAKJCIO,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  PJKHAJKEHEL_o *pPVar2;
  OPNFCOGALLI_o *pOVar3;
  MMDPNDAECII_o *pMVar4;
  
                    /* try { // try from 035f67bc to 036f67c3 has its CatchHandler @ 035f67d8 */
                    /* try { // try from 035f67c4 to 036f67cf has its CatchHandler @ 035f6458 */
  bVar1 = OLKKAIFGGAK__MANLGCCEMGC(__this,(MethodInfo *)(ulong)JGBNEAKJCIO);
                    /* try { // try from 035f67d0 to 036f67d7 has its CatchHandler @ 035f67d8 */
  if (bVar1) {
    pPVar2 = (__this->fields).FAPMJJBOFEF;
                    /* catch() { ... } // from try @ 035f6724 with catch @ 035f67d8
                       catch() { ... } // from try @ 035f67bc with catch @ 035f67d8
                       catch() { ... } // from try @ 035f67d0 with catch @ 035f67d8 */
    if (pPVar2 == (PJKHAJKEHEL_o *)0x0) {
LAB_035f682c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pPVar2->fields).LMKHOJFOPEB == false) {
      pOVar3 = (__this->fields).OAKOFJJIOFF;
      if (pOVar3 == (OPNFCOGALLI_o *)0x0) goto LAB_035f682c;
      if ((pOVar3->fields).NDBPNFLAKDL != (ECENNHNBAME_o *)0x0) {
        pMVar4 = (__this->fields).GJLEPEPAOKD;
        if (pMVar4 == (MMDPNDAECII_o *)0x0) goto LAB_035f682c;
        if ((pMVar4->fields).BNHJIKJAHHF == false) {
          bVar1 = OLKKAIFGGAK__DJIFEKKEMGN(__this,(__this->fields).BPJMMBGIMNC,JGBNEAKJCIO,in_x3);
          return bVar1;
        }
      }
    }
  }
  return false;
}

