// CEJLHKFNEDB$$CGHDMDIPCOO @ RVA 0x334C774

void CEJLHKFNEDB__CGHDMDIPCOO(uint32_t IIOHCNMJPCO,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a08 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567a08 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI_TypeInfo->static_fields->BLMPLPPHAGO = IIOHCNMJPCO;
  return;
}

