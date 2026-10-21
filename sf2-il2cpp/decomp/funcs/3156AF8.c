// MGICPMNIAMM$$.ctor @ RVA 0x3156AF8

void MGICPMNIAMM___ctor(MGICPMNIAMM_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03256b10 to 03356b13 has its CatchHandler @ 03256b18 */
                    /* try { // try from 03256b14 to 03356b37 has its CatchHandler @ 03256a10 */
  if ((DAT_04566842 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03256b10 with catch @ 03256b18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03256abc with catch @ 03256b1c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03256aa8 with catch @ 03256b20
                        */
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04566842 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03256b38 to 03356b3b has its CatchHandler @ 03256b64 */
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
                    /* try { // try from 03256b3c to 03356b73 has its CatchHandler @ 03256a10 */
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

