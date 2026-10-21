// NFNBHPOJFNJ$$FKKODNPKIIG @ RVA 0x335F504

int32_t NFNBHPOJFNJ__FKKODNPKIIG(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_00;
  
  if ((DAT_04567a6e & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a6e = 1;
  }
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    (pNVar1->fields).BHDIODFMGPD = (pNVar1->fields).BHDIODFMGPD + 1;
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
      NFNBHPOJFNJ__KIBAKBEOOJI(pNVar1,method_00);
      pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
        return (pNVar1->fields).BHDIODFMGPD;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

