// NGKBNOEJLPH$$BIGKNJFGPGB @ RVA 0x349CBD0

void NGKBNOEJLPH__BIGKNJFGPGB(NGKBNOEJLPH_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568452 & 1) == 0) {
    FUN_01bab630(&NGKBNOEJLPH_TypeInfo);
    auVar2 = FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568452 = 1;
  }
  if (NGKBNOEJLPH_TypeInfo->static_fields->DBLJKOLFBLN != false) {
    pPVar1 = (__this->fields).HBGIGFEDLLO;
    if (pPVar1 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
    }
    if ((pPVar1->fields).BLJLIBHLGLI == false) {
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
    }
  }
  return;
}

