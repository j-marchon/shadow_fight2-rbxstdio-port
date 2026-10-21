// NFNBHPOJFNJ$$MNLKJHBKMPB @ RVA 0x335F89C

int32_t NFNBHPOJFNJ__MNLKJHBKMPB(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_00;
  
  if ((DAT_04567a73 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a73 = 1;
  }
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    (pNVar1->fields).ONEHIOEMIHA = (pNVar1->fields).ONEHIOEMIHA + 1;
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
      NFNBHPOJFNJ__KIBAKBEOOJI(pNVar1,method_00);
      pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
        return (pNVar1->fields).ONEHIOEMIHA;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

