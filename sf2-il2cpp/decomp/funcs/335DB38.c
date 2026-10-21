// NFNBHPOJFNJ$$LMIKJOOBAPI @ RVA 0x335DB38

System_Collections_IEnumerator_o *
NFNBHPOJFNJ__LMIKJOOBAPI(NFNBHPOJFNJ_o *__this,System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  NFNBHPOJFNJ_LNEDLDJNGPA_o *__this_00;
  System_Action_o **ppSVar1;
  
  if ((DAT_04567a5a & 1) == 0) {
    FUN_01bab630(&NFNBHPOJFNJ_LNEDLDJNGPA_TypeInfo);
                    /* try { // try from 0345db64 to 0355db67 has its CatchHandler @ 0345dbd0 */
                    /* try { // try from 0345db68 to 0355db6b has its CatchHandler @ 0345dbd4 */
    DAT_04567a5a = 1;
  }
                    /* try { // try from 0345db6c to 0355db6f has its CatchHandler @ 0345dbb0 */
                    /* try { // try from 0345db70 to 0355db73 has its CatchHandler @ 0345dbd4 */
  __this_00 = (NFNBHPOJFNJ_LNEDLDJNGPA_o *)thunk_FUN_01bda818(NFNBHPOJFNJ_LNEDLDJNGPA_TypeInfo);
                    /* try { // try from 0345db74 to 0355db83 has its CatchHandler @ 0345dbcc */
  NFNBHPOJFNJ_LNEDLDJNGPA___ctor(__this_00,0,(MethodInfo *)0x0);
                    /* try { // try from 0345db84 to 0355db8f has its CatchHandler @ 0345dbd4 */
  if (__this_00 != (NFNBHPOJFNJ_LNEDLDJNGPA_o *)0x0) {
    ppSVar1 = &(__this_00->fields).action;
    *ppSVar1 = CPECAEHDDDB;
                    /* try { // try from 0345db90 to 0355db9b has its CatchHandler @ 0345dbd0 */
    thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
                    /* try { // try from 0345db9c to 0355dbef has its CatchHandler @ 0345d810 */
                    /* catch() { ... } // from try @ 0345db20 with catch @ 0345dba0 */
                    /* catch() { ... } // from try @ 0345da08 with catch @ 0345dba4 */
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0345d9f8 with catch @ 0345dba8 */
  FUN_01bab8c8();
}

