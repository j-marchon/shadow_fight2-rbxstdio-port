// CKCJCNFBOLB$$.ctor @ RVA 0x31869D0

void CKCJCNFBOLB___ctor(CKCJCNFBOLB_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045669d8 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_045669d8 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03286a04 to 03386a0b has its CatchHandler @ 03286a50 */
                    /* try { // try from 03286a0c to 03386a0f has its CatchHandler @ 03286a3c */
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03286a10 to 03386a13 has its CatchHandler @ 03286a28 */
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
                    /* try { // try from 03286a14 to 03386a17 has its CatchHandler @ 032866b4 */
                    /* try { // try from 03286a18 to 03386a1b has its CatchHandler @ 03286a24 */
                    /* try { // try from 03286a1c to 03386a67 has its CatchHandler @ 032866b4 */
                    /* catch() { ... } // from try @ 03286a18 with catch @ 03286a24 */
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

