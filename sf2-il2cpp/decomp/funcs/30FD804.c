// EJALJLHMDHM$$PBGAFPHPJCP @ RVA 0x30FD804

bool EJALJLHMDHM__PBGAFPHPJCP(EJALJLHMDHM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int32_t ACCIHBHMFPN;
  bool bVar1;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  
  if ((DAT_045664a3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045664a3 = 1;
  }
  IKKAMAMLIKA = EJALJLHMDHM__DHKCDPPAFFC(__this,AAJBIMFNMBB,method);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    ACCIHBHMFPN = (__this->fields).ONHENDPPLDI;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = NLPJLHOEAOE__PBGAFPHPJCP(IKKAMAMLIKA,ACCIHBHMFPN,1,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

