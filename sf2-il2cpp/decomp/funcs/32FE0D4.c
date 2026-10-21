// GBKCLIFGIFN$$EPBENPDCBFE @ RVA 0x32FE0D4

bool GBKCLIFGIFN__EPBENPDCBFE(GBKCLIFGIFN_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  NKOIBKNPICN_o *JOIIFEDGBGK;
  NKOIBKNPICN_o **ppNVar2;
  
  if ((AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) &&
     (JOIIFEDGBGK = (AHEFOIOKDOK->fields).FKGFFHPFKHH, JOIIFEDGBGK != (NKOIBKNPICN_o *)0x0)) {
                    /* try { // try from 033fe0f4 to 034fe117 has its CatchHandler @ 033fe15c */
    if (((JOIIFEDGBGK->fields).PBPNNKNICEE == false) && ((AHEFOIOKDOK->fields).FOJEHKCDKFH < 1)) {
                    /* catch() { ... } // from try @ 033fe02c with catch @ 033fe140 */
      ppNVar2 = &(__this->fields).NNGNDJLJJBE;
                    /* catch() { ... } // from try @ 033fe014 with catch @ 033fe144 */
    }
    else {
      ppNVar2 = &(__this->fields).LCDJLCMFMEO;
    }
    if ((AHEFOIOKDOK->fields).BPEIPGJNCLC == false) {
      bVar1 = true;
    }
    else {
      if (*ppNVar2 == (NKOIBKNPICN_o *)0x0) goto LAB_033fe148;
      bVar1 = NKOIBKNPICN__CENALFGNMKJ(*ppNVar2,JOIIFEDGBGK,(MethodInfo *)0x0);
    }
                    /* try { // try from 033fe128 to 034fe12b has its CatchHandler @ 033fe168 */
                    /* try { // try from 033fe12c to 034fe12f has its CatchHandler @ 033fe16c */
                    /* try { // try from 033fe130 to 034fe133 has its CatchHandler @ 033fe170 */
                    /* catch() { ... } // from try @ 033fe068 with catch @ 033fe134
                       try { // try from 033fe134 to 034fe187 has its CatchHandler @ 033fdd94 */
                    /* catch() { ... } // from try @ 033fe050 with catch @ 033fe138 */
                    /* catch() { ... } // from try @ 033fe044 with catch @ 033fe13c */
    return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
  }
LAB_033fe148:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033fe00c with catch @ 033fe148 */
  FUN_01bab8c8();
}

