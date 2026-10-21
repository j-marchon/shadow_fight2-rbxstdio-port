// NFNBHPOJFNJ$$MBHIKFMIDAO @ RVA 0x3359C78

NFNBHPOJFNJ_o * NFNBHPOJFNJ__MBHIKFMIDAO(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04567a66 & 1) == 0) {
    FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a66 = 1;
  }
  pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
  if (pNVar1 == (NFNBHPOJFNJ_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pNVar1 = auVar2._0_8_;
    NFNBHPOJFNJ___ctor(pNVar1,auVar2._8_8_);
    NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI = pNVar1;
    thunk_FUN_01c20e04(NFNBHPOJFNJ_TypeInfo->static_fields,pNVar1);
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
  }
  return pNVar1;
}

