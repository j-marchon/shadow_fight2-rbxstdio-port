// EnterScreen$$ODFHMBHFNJB @ RVA 0x358B114

void EnterScreen__ODFHMBHFNJB(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  float CJNHFNHJHPE;
  
  if ((DAT_04568d42 & 1) == 0) {
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_16290);
    DAT_04568d42 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565f32 == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565f32 = '\x01';
    method = extraout_x1_01;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK != false) {
    return;
  }
  CJNHFNHJHPE = (__this->fields).JDFNMBMELNK;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI__GJBPODCHLNP(CJNHFNHJHPE,(MethodInfo *)0x0);
  PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
  MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG = false;
  MFIKGMIDDIG__DKLEOPOALEN(StringLiteral_16290,false,(MethodInfo *)0x0);
  return;
}

