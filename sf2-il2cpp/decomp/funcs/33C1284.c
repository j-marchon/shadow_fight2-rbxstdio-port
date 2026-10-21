// CUDLR.Server$$Update @ RVA 0x33C1284

void CUDLR_Server__Update(CUDLR_Server_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dcc & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
                    /* try { // try from 034c12b0 to 035c12b7 has its CatchHandler @ 034c12ec */
    DAT_04567dcc = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034c12b8 to 035c12bb has its CatchHandler @ 034c12d0 */
                    /* try { // try from 034c12bc to 035c12bf has its CatchHandler @ 034c0d7c */
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034c12c0 to 035c12c3 has its CatchHandler @ 034c12cc */
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
                    /* try { // try from 034c12c4 to 035c1303 has its CatchHandler @ 034c0d7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c12c0 with catch @ 034c12cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c12b8 with catch @ 034c12d0
                        */
  CFEANGJDHEE__LLCONNGHGKD((MethodInfo *)0x0);
  return;
}

