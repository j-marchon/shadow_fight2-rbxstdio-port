// FEPCHKMAIBL$$EFDGBPJANAC @ RVA 0x32C4578

void FEPCHKMAIBL__EFDGBPJANAC(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  FEPCHKMAIBL_c *method_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674e3 & 1) == 0) {
                    /* catch() { ... } // from try @ 033c456c with catch @ 033c4594 */
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
                    /* try { // try from 033c459c to 034c45a3 has its CatchHandler @ 033c45b8 */
    DAT_045674e3 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033c45a4 to 034c45af has its CatchHandler @ 033c439c */
  if (BKFOLMBMFNP == 10) {
                    /* try { // try from 033c45b0 to 034c45b7 has its CatchHandler @ 033c45b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c459c with catch @ 033c45b8
                       catch(type#2 @ 00000000) { ... } // from try @ 033c45b0 with catch @ 033c45b8
                        */
    method_00 = FEPCHKMAIBL_TypeInfo;
    if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (FEPCHKMAIBL_c *)thunk_FUN_01ba7564(FEPCHKMAIBL_TypeInfo,method);
    }
    FEPCHKMAIBL__MBLOPJIFOMC((MethodInfo *)method_00);
    return;
  }
  return;
}

