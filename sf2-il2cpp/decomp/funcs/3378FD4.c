// LLDOMGIEPNE$$EOHMFJFFFIN @ RVA 0x3378FD4

void LLDOMGIEPNE__EOHMFJFFFIN(MethodInfo *method)

{
  LLDOMGIEPNE_o *pLVar1;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04567b65 & 1) == 0) {
    FUN_01bab630(&LLDOMGIEPNE_TypeInfo);
    DAT_04567b65 = 1;
  }
                    /* try { // try from 03479004 to 0357902b has its CatchHandler @ 03479bb4 */
  if (LLDOMGIEPNE_TypeInfo->static_fields->CBDMFFMCJBK != (LLDOMGIEPNE_o *)0x0) {
    return;
  }
  auVar2 = thunk_FUN_01bda818();
  pLVar1 = auVar2._0_8_;
  LLDOMGIEPNE___ctor(pLVar1,auVar2._8_8_);
  LLDOMGIEPNE_TypeInfo->static_fields->CBDMFFMCJBK = pLVar1;
  thunk_FUN_01c20e04(LLDOMGIEPNE_TypeInfo->static_fields,pLVar1);
  pLVar1 = LLDOMGIEPNE_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pLVar1 != (LLDOMGIEPNE_o *)0x0) {
                    /* try { // try from 03479060 to 0357908b has its CatchHandler @ 03479ba0 */
    LLDOMGIEPNE__GIMAJOGGBHM(pLVar1,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

