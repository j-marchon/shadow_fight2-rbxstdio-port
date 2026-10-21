// LLKDCCJMFLE$$LIHIMKCJCKO @ RVA 0x3522AA4

System_String_o * LLKDCCJMFLE__LIHIMKCJCKO(MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_045689e8 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045689e8 = 1;
  }
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__op_Equality
                    (LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB,StringLiteral_1,
                     (MethodInfo *)0x0);
  if (bVar1) {
    method_00 = LLKDCCJMFLE_TypeInfo;
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
    }
    pSVar2 = LLKDCCJMFLE__ENIGDNLDIMK((MethodInfo *)method_00);
    LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB = pSVar2;
                    /* try { // try from 03622b3c to 03722b43 has its CatchHandler @ 03622bb0 */
    thunk_FUN_01c20e04(LLKDCCJMFLE_TypeInfo->static_fields,pSVar2);
  }
                    /* try { // try from 03622b44 to 03722b47 has its CatchHandler @ 03622b9c */
                    /* try { // try from 03622b48 to 03722b4b has its CatchHandler @ 03622bb0 */
                    /* try { // try from 03622b4c to 03722b4f has its CatchHandler @ 03622b94 */
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03622b50 to 03722b53 has its CatchHandler @ 03622b88 */
    thunk_FUN_01ba7564();
                    /* try { // try from 03622b54 to 03722b57 has its CatchHandler @ 03622b84 */
  }
                    /* try { // try from 03622b58 to 03722b5b has its CatchHandler @ 03622b74 */
                    /* try { // try from 03622b5c to 03722b5f has its CatchHandler @ 03622590 */
                    /* try { // try from 03622b60 to 03722b63 has its CatchHandler @ 03622b6c */
                    /* try { // try from 03622b64 to 03722bcf has its CatchHandler @ 03622590 */
  return LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB;
}

