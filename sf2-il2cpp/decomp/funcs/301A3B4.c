// ECENNHNBAME$$KGIBBMMAFDN @ RVA 0x301A3B4

int32_t ECENNHNBAME__KGIBBMMAFDN(ECENNHNBAME_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((DAT_04565bf7 & 1) == 0) {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04565bf7 = 1;
    method = extraout_x1;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565c83 == '\0') {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04565c83 = '\x01';
    method = extraout_x1_01;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
  }
  iVar1 = ECENNHNBAME__COFDJFNCJDM(__this,OCMLPCKBHPN_TypeInfo->static_fields->IIFEIAMPOMC,in_x2);
  return iVar1;
}

