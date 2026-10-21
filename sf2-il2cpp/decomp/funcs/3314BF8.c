// MKFAKELPPAC$$AJENNDOGPBB @ RVA 0x3314BF8

void MKFAKELPPAC__AJENNDOGPBB(MKFAKELPPAC_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  int32_t value;
  PNLFHHJGDLI_c *pPVar1;
  
  if ((DAT_045677fb & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045677fb = 1;
  }
  (__this->fields).IFHOPILFOGO = CJNHFNHJHPE;
  pPVar1 = PNLFHHJGDLI_TypeInfo;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    pPVar1 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
  }
  if (CJNHFNHJHPE) {
    PNLFHHJGDLI__EAKDFHBCLHC((MethodInfo *)pPVar1);
    value = -1;
  }
  else {
    if (DAT_045678d6 == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045678d6 = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (PNLFHHJGDLI_TypeInfo->static_fields->_AJNAEHPIEAJ_k__BackingField != false) {
      pPVar1 = PNLFHHJGDLI_TypeInfo;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        pPVar1 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__OECHILBBMLF((MethodInfo *)pPVar1);
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    value = EOAOCPLIKOI__ILLKKNOECDO((MethodInfo *)0x0);
  }
  UnityEngine_Screen__set_sleepTimeout(value,(MethodInfo *)0x0);
  return;
}

