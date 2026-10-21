// BGFNOPDHEOM$$DGJLLOKIIMA @ RVA 0x32AB250

int32_t BGFNOPDHEOM__DGJLLOKIIMA(int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,MethodInfo *method)

{
  NLIDHEAMLMC_o *pNVar1;
  NLIDHEAMLMC_Fields *pNVar2;
  
  if ((DAT_04567438 & 1) == 0) {
                    /* try { // try from 033ab278 to 034ab32b has its CatchHandler @ 033ab278
                       catch() { ... } // from try @ 033ab278 with catch @ 033ab278
                       catch() { ... } // from try @ 033ab334 with catch @ 033ab278
                       catch() { ... } // from try @ 033ab384 with catch @ 033ab278
                       catch() { ... } // from try @ 033ab3a8 with catch @ 033ab278
                       catch() { ... } // from try @ 033ab3e8 with catch @ 033ab278 */
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_04567438 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = BGFNOPDHEOM__BGDJFKHKHDK(NAIJBCMHBFK,OPHMGAKOJLP,method);
  if (pNVar1 == (NLIDHEAMLMC_o *)0x0) {
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = (NLIDHEAMLMC_Fields *)&BGFNOPDHEOM_TypeInfo->static_fields->JPDBJAEDIEM;
  }
  else {
    pNVar2 = &pNVar1->fields;
  }
  return pNVar2->NJCMGCGNCLJ;
}

