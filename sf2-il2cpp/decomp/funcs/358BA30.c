// EnterScreen$$NDFOKAPCPLD @ RVA 0x358BA30

void EnterScreen__NDFOKAPCPLD(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float CJNHFNHJHPE;
  
  if ((DAT_04568d41 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04568d41 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (__this->fields).JDFNMBMELNK;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI__GJBPODCHLNP(CJNHFNHJHPE,(MethodInfo *)0x0);
  PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
  return;
}

