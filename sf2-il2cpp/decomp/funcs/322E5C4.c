// DEKKGJNMFEB$$AIHNLLGNBLC @ RVA 0x322E5C4

DEKKGJNMFEB_o * DEKKGJNMFEB__AIHNLLGNBLC(MethodInfo *method)

{
  DEKKGJNMFEB_o *__this;
  DEKKGJNMFEB_o **ppDVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04566fc1 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    DAT_04566fc1 = 1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DEKKGJNMFEB_TypeInfo->static_fields->KNOHKIKFEBL == (DEKKGJNMFEB_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    __this = auVar2._0_8_;
    DEKKGJNMFEB___ctor(__this,auVar2._8_8_);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppDVar1 = &DEKKGJNMFEB_TypeInfo->static_fields->KNOHKIKFEBL;
    *ppDVar1 = __this;
    thunk_FUN_01c20e04(ppDVar1,__this);
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DEKKGJNMFEB_TypeInfo->static_fields->KNOHKIKFEBL;
}

