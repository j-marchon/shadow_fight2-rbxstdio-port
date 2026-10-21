// OLKKAIFGGAK$$JCIJNPBKMOF @ RVA 0x34F3950

void OLKKAIFGGAK__JCIJNPBKMOF(OLKKAIFGGAK_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  NGKBNOEJLPH_o *pNVar1;
  PJKHAJKEHEL_o *pPVar2;
  OLKKAIFGGAK_o *KPBAFNBAEAB;
  
  if ((DAT_045687bf & 1) == 0) {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_045687bf = 1;
  }
  KPBAFNBAEAB = (__this->fields).BPJMMBGIMNC;
  if (KPBAFNBAEAB == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  pPVar2 = (__this->fields).FAPMJJBOFEF;
  if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_035f3ad8;
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
    if (OCMLPCKBHPN_TypeInfo->static_fields->NJHNCECPFLF != false) goto LAB_035f39f4;
    pNVar1 = (__this->fields).ADGFKAPOIFN;
    if (pNVar1 == (NGKBNOEJLPH_o *)0x0) goto LAB_035f3ad8;
    NGKBNOEJLPH__KKMCNGDFKFK(pNVar1,KPBAFNBAEAB,(MethodInfo *)0x0);
  }
  else {
LAB_035f39f4:
    pNVar1 = (__this->fields).ADGFKAPOIFN;
    if (pNVar1 == (NGKBNOEJLPH_o *)0x0) goto LAB_035f3ad8;
    NGKBNOEJLPH__FAPDGNLOHIC(pNVar1,KPBAFNBAEAB,(MethodInfo *)0x0);
  }
  pPVar2 = (KPBAFNBAEAB->fields).FAPMJJBOFEF;
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
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
      if (OCMLPCKBHPN_TypeInfo->static_fields->NJHNCECPFLF == false) {
        pNVar1 = (KPBAFNBAEAB->fields).ADGFKAPOIFN;
        if (pNVar1 != (NGKBNOEJLPH_o *)0x0) {
          NGKBNOEJLPH__KKMCNGDFKFK(pNVar1,KPBAFNBAEAB,(MethodInfo *)0x0);
          return;
        }
        goto LAB_035f3ad8;
      }
    }
    pNVar1 = (KPBAFNBAEAB->fields).ADGFKAPOIFN;
    if (pNVar1 != (NGKBNOEJLPH_o *)0x0) {
      NGKBNOEJLPH__GEMFIOGBGHI(pNVar1,NLEBDPHNIDI,(MethodInfo *)0x0);
      return;
    }
  }
LAB_035f3ad8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

