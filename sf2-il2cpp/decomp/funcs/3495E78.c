// NGKBNOEJLPH$$ABHJLMEPMBF @ RVA 0x3495E78

bool NGKBNOEJLPH__ABHJLMEPMBF(NGKBNOEJLPH_o *__this,MethodInfo *method)

{
  bool bVar1;
  PJKHAJKEHEL_o *pPVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568452 & 1) == 0) {
    FUN_01bab630(&NGKBNOEJLPH_TypeInfo);
    auVar3 = FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568452 = 1;
  }
  if (NGKBNOEJLPH_TypeInfo->static_fields->DBLJKOLFBLN == false) {
    bVar1 = false;
  }
  else {
    pPVar2 = (__this->fields).HBGIGFEDLLO;
    if (pPVar2 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
    }
    if ((pPVar2->fields).BLJLIBHLGLI == false) {
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045684c5 == '\0') {
        FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
        DAT_045684c5 = '\x01';
      }
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = OCMLPCKBHPN_TypeInfo->static_fields->NJHNCECPFLF != false;
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}

