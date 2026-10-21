// FCJBEKHDLAF$$IKKHECKCEJC @ RVA 0x33E7024

bool FCJBEKHDLAF__IKKHECKCEJC
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,float FBJKLOAFMDP,
               MethodInfo *method)

{
  bool bVar1;
  PJKHAJKEHEL_o *pPVar2;
  AFFHKININGD_o *pAVar3;
  
  pAVar3 = (__this->fields).FBFPLEFCDOK;
  if (pAVar3 != (AFFHKININGD_o *)0x0) {
    if ((pAVar3->fields).JDNKKGPNHPB == 0) {
                    /* try { // try from 034e7080 to 035e70b7 has its CatchHandler @ 034e6f30 */
      return false;
    }
    if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__AIGOCIJLPLD(BCKBBGCOMJD,FBJKLOAFMDP,(MethodInfo *)0x0);
      pPVar2 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
                    /* try { // try from 034e7050 to 035e7053 has its CatchHandler @ 034e7060 */
      if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
                    /* try { // try from 034e7054 to 035e7057 has its CatchHandler @ 034e705c */
                    /* try { // try from 034e7058 to 035e707b has its CatchHandler @ 034e6f30 */
        bVar1 = PJKHAJKEHEL__CGACMIEKKNL(pPVar2,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e7054 with catch @ 034e705c
                        */
        if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e7050 with catch @ 034e7060
                        */
          pPVar2 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e6ff8 with catch @ 034e7064
                        */
          if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_034e708c;
          (pPVar2->fields).DLINPBPHMJD = true;
        }
        bVar1 = OLKKAIFGGAK__HBLJCGCBBIC(BCKBBGCOMJD,(MethodInfo *)0x0);
                    /* try { // try from 034e707c to 035e707f has its CatchHandler @ 034e70a8 */
        return !bVar1;
      }
    }
  }
LAB_034e708c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

