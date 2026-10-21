// Nekki.SF2.GUI.Fight.PlayerLifeBar$$DefineLevelNumber @ RVA 0x351FA3C

int32_t Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber
                  (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (__this->fields).PACENOHGIGO;
                    /* try { // try from 0361fa54 to 0371fa57 has its CatchHandler @ 0361faa8 */
                    /* try { // try from 0361fa58 to 0371fa5b has its CatchHandler @ 0361faa4 */
  if ((0 < iVar1) && (0 < (__this->fields).AFHDCNAMJMP)) {
                    /* try { // try from 0361fa5c to 0371fa63 has its CatchHandler @ 0361fa98 */
    fVar3 = (__this->fields).AIGDHMHBAFN;
                    /* try { // try from 0361fa64 to 0371fa67 has its CatchHandler @ 0361fa8c */
                    /* try { // try from 0361fa68 to 0371fa6b has its CatchHandler @ 0361f568 */
                    /* try { // try from 0361fa6c to 0371fa6f has its CatchHandler @ 0361fa84 */
                    /* try { // try from 0361fa70 to 0371fac7 has its CatchHandler @ 0361f568 */
    fVar4 = CJNHFNHJHPE / fVar3 + 1.0;
                    /* catch() { ... } // from try @ 0361f924 with catch @ 0361fa78 */
    iVar2 = -0x80000000;
    if (fVar4 != INFINITY) {
      iVar2 = (int)fVar4;
    }
                    /* catch() { ... } // from try @ 0361fa6c with catch @ 0361fa84 */
                    /* catch() { ... } // from try @ 0361f8e0 with catch @ 0361fa88 */
                    /* catch() { ... } // from try @ 0361fa64 with catch @ 0361fa8c */
    fVar3 = fmodf(CJNHFNHJHPE,fVar3);
                    /* catch() { ... } // from try @ 0361f8d4 with catch @ 0361fa90 */
                    /* catch() { ... } // from try @ 0361f8c0 with catch @ 0361fa94 */
                    /* catch() { ... } // from try @ 0361fa5c with catch @ 0361fa98 */
                    /* catch() { ... } // from try @ 0361f714 with catch @ 0361fa9c */
    iVar2 = iVar2 - (uint)(CJNHFNHJHPE != 0.0 && fVar3 == 0.0);
                    /* catch() { ... } // from try @ 0361f728 with catch @ 0361faa0 */
                    /* catch() { ... } // from try @ 0361fa58 with catch @ 0361faa4 */
    if (0 < iVar2) goto LAB_0361faac;
  }
                    /* catch() { ... } // from try @ 0361fa54 with catch @ 0361faa8 */
  iVar2 = 1;
LAB_0361faac:
                    /* catch() { ... } // from try @ 0361f6a8 with catch @ 0361faac */
                    /* catch() { ... } // from try @ 0361f64c with catch @ 0361fab0 */
                    /* catch() { ... } // from try @ 0361fa20 with catch @ 0361fab4 */
  if (iVar1 < 1 || iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
                    /* catch() { ... } // from try @ 0361f83c with catch @ 0361fab8 */
  return iVar1;
}

