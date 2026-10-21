// CLFCKIFNGHA.HNHHHMMIDDH$$JIMKPGHMKNN @ RVA 0x345617C

void CLFCKIFNGHA_HNHHHMMIDDH__JIMKPGHMKNN(CLFCKIFNGHA_HNHHHMMIDDH_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *__this_00;
  System_Threading_CancellationToken_o DHAGFGIGPFI;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_string__o *CBDPLOECEOA;
  
                    /* try { // try from 03556188 to 036561ab has its CatchHandler @ 035581a0 */
  if ((DAT_045682ce & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    DAT_045682ce = 1;
    method = extraout_x1;
  }
  CBDPLOECEOA = (__this->fields).p_bundles;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo,method);
                    /* try { // try from 035561c4 to 036561cf has its CatchHandler @ 035580c4 */
  }
  __this_00 = CLFCKIFNGHA_TypeInfo->static_fields->CNINFEKICMA;
  if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
                    /* try { // try from 035561d4 to 036561db has its CatchHandler @ 035580c0 */
    DHAGFGIGPFI = System_Threading_CancellationTokenSource__get_Token(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 035561ec to 036561f3 has its CatchHandler @ 035580bc */
    CLFCKIFNGHA__NHPECIMNMBM(CBDPLOECEOA,DHAGFGIGPFI,(__this->fields).p_onCheckEnd,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

