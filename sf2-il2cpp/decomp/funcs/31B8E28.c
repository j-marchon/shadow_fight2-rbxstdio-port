// IFKFDFGNMMN$$JPNNAPGPLDH @ RVA 0x31B8E28

void IFKFDFGNMMN__JPNNAPGPLDH(IFKFDFGNMMN_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  BNAIBAODKAK_o *__this_00;
  BNAIBAODKAK_array *pBVar3;
  uint uVar4;
  
  pBVar3 = (__this->fields).OFNAAFHJIOB;
  if (pBVar3 != (BNAIBAODKAK_array *)0x0) {
                    /* try { // try from 032b8e3c to 033b8e43 has its CatchHandler @ 032b8ea8 */
    uVar1 = (uint)pBVar3->max_length;
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032b8e98 to 033b8ebf has its CatchHandler @ 032b8d48 */
          FUN_01bab8d0();
        }
                    /* try { // try from 032b8e58 to 033b8e63 has its CatchHandler @ 032b8ea4 */
        __this_00 = pBVar3->m_Items[(int)uVar4];
        if (__this_00 == (BNAIBAODKAK_o *)0x0) goto LAB_032b8e9c;
                    /* try { // try from 032b8e64 to 033b8e8f has its CatchHandler @ 032b8d48 */
        bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(__this_00,(MethodInfo *)0x0);
        if (!bVar2) {
          (__this_00->fields).JFAEKJELFFN = true;
        }
        uVar1 = (uint)pBVar3->max_length;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
                    /* try { // try from 032b8e90 to 033b8e93 has its CatchHandler @ 032b8ea0 */
                    /* try { // try from 032b8e94 to 033b8e97 has its CatchHandler @ 032b8e9c */
    return;
  }
LAB_032b8e9c:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b8e94 with catch @ 032b8e9c
                        */
  FUN_01bab8c8();
}

