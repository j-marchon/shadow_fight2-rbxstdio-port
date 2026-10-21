// EFPOGFPCBNE$$EPBENPDCBFE @ RVA 0x33AC040

bool EFPOGFPCBNE__EPBENPDCBFE(EFPOGFPCBNE_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  
                    /* try { // try from 034ac044 to 035ac04f has its CatchHandler @ 034acc98 */
  fVar2 = (__this->fields).AKPNOPAEKEF;
  if (fVar2 == -1.0) {
LAB_034ac068:
    fVar2 = (__this->fields).HFBHMJBLLOI;
    if (fVar2 != -1.0) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_034ac0ac:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034ac080 to 035ac087 has its CatchHandler @ 034acc68 */
      if (fVar2 < (float)(AHEFOIOKDOK->fields).AFMOEMAGCBO) goto LAB_034ac088;
    }
    bVar1 = 1;
  }
  else {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_034ac0ac;
                    /* try { // try from 034ac060 to 035ac06f has its CatchHandler @ 034acc94 */
    if (fVar2 <= (float)(AHEFOIOKDOK->fields).AFMOEMAGCBO) goto LAB_034ac068;
LAB_034ac088:
    bVar1 = 0;
  }
                    /* try { // try from 034ac098 to 035ac09f has its CatchHandler @ 034acc5c */
                    /* try { // try from 034ac0a0 to 035ac0bf has its CatchHandler @ 034acc90 */
  return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

