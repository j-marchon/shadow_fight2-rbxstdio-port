// EnterScreen$$PIJGMPKNCHJ @ RVA 0x358ACEC

void EnterScreen__PIJGMPKNCHJ(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  float fVar1;
  
  if ((DAT_04568d3d & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                    /* try { // try from 0368ad18 to 0378ad3f has its CatchHandler @ 0368ad54 */
    DAT_04568d3d = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565f32 == '\0') {
                    /* try { // try from 0368ad40 to 0378ad4b has its CatchHandler @ 0368a9b8 */
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                    /* try { // try from 0368ad4c to 0378ad53 has its CatchHandler @ 0368ad54 */
    DAT_04565f32 = '\x01';
    method = extraout_x1_01;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368ad18 with catch @ 0368ad54
                       catch(type#2 @ 00000000) { ... } // from try @ 0368ad4c with catch @ 0368ad54
                        */
                    /* try { // try from 0368ad58 to 0378ae93 has its CatchHandler @ 0368ad58
                       catch() { ... } // from try @ 0368ad58 with catch @ 0368ad58
                       catch() { ... } // from try @ 0368afb4 with catch @ 0368ad58
                       catch() { ... } // from try @ 0368b04c with catch @ 0368ad58
                       catch() { ... } // from try @ 0368b054 with catch @ 0368ad58
                       catch() { ... } // from try @ 0368b0f4 with catch @ 0368ad58 */
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK == false) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    }
    if (DAT_045677bf == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045677bf = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar1 = PNLFHHJGDLI_TypeInfo->static_fields->AGBNCFPOLOE;
    (__this->fields).JDFNMBMELNK = fVar1;
    (__this->fields).JHNDMAAHCPK = fVar1;
  }
  return;
}

