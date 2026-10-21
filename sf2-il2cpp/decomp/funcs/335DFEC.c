// NFNBHPOJFNJ$$BEPNDLOGAFK @ RVA 0x335DFEC

void NFNBHPOJFNJ__BEPNDLOGAFK(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_04567a5b & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a5b = 1;
  }
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method_00);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    (pNVar1->fields).PALMKKDPJAB = CJNHFNHJHPE;
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
      NFNBHPOJFNJ__KIBAKBEOOJI(pNVar1,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

