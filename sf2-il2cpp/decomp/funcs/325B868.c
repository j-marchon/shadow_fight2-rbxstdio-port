// ILNFICAMFCI$$ABHJLMEPMBF @ RVA 0x325B868

bool ILNFICAMFCI__ABHJLMEPMBF(MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567190 & 1) == 0) {
    FUN_01bab630(&AHHELIMMIED_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567190 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = EOAOCPLIKOI__HKLIPCEAINH((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if ((AHHELIMMIED_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04567209 == '\0') {
      FUN_01bab630(&AHHELIMMIED_TypeInfo);
      DAT_04567209 = '\x01';
    }
    if ((AHHELIMMIED_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = AHHELIMMIED_TypeInfo->static_fields->_NKCCFJEBFAN_k__BackingField != false;
  }
  return bVar1;
}

