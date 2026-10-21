// BCAEBMNHBAN$$AIHNLLGNBLC @ RVA 0x34E568C

BCAEBMNHBAN_o * BCAEBMNHBAN__AIHNLLGNBLC(MethodInfo *method)

{
  BCAEBMNHBAN_o *pBVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_0456875c & 1) == 0) {
    FUN_01bab630(&BCAEBMNHBAN_TypeInfo);
    DAT_0456875c = 1;
  }
  pBVar1 = BCAEBMNHBAN_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pBVar1 == (BCAEBMNHBAN_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pBVar1 = auVar2._0_8_;
    BCAEBMNHBAN___ctor(pBVar1,auVar2._8_8_);
    BCAEBMNHBAN_TypeInfo->static_fields->CBDMFFMCJBK = pBVar1;
    thunk_FUN_01c20e04(BCAEBMNHBAN_TypeInfo->static_fields,pBVar1);
    pBVar1 = BCAEBMNHBAN_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pBVar1;
}

