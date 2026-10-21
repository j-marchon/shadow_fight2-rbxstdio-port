// OJOPECLAHNM$$.ctor @ RVA 0x3448F2C

void OJOPECLAHNM___ctor(OJOPECLAHNM_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03548f08 with catch @ 03548f2c */
                    /* try { // try from 03548f34 to 03648f3b has its CatchHandler @ 03548f50 */
                    /* try { // try from 03548f3c to 03648f47 has its CatchHandler @ 03548b8c */
                    /* try { // try from 03548f48 to 03648f4f has its CatchHandler @ 03548f50 */
  if ((DAT_04568254 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03548f34 with catch @ 03548f50
                       catch(type#2 @ 00000000) { ... } // from try @ 03548f48 with catch @ 03548f50
                        */
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04568254 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

