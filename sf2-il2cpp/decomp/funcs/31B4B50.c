// AJAMDCEKAFE$$OFAELFKHOND @ RVA 0x31B4B50

System_String_o * AJAMDCEKAFE__OFAELFKHOND(System_String_o *ALHDMEKMLPH,MethodInfo *method)

{
  System_DateTime_o OLFIPBLKDAH;
  int64_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  System_String_c *local_28;
  
  if ((DAT_04566ba7 & 1) == 0) {
    FUN_01bab630(&AJAMDCEKAFE_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&StringLiteral_1574);
    FUN_01bab630(&StringLiteral_13781);
    DAT_04566ba7 = 1;
    method = extraout_x1;
  }
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_DateTime_TypeInfo,method);
  }
  OLFIPBLKDAH = System_DateTime__get_Now((MethodInfo *)0x0);
  iVar1 = DPNBGNOIKEJ__FAJDJBBKNIG(OLFIPBLKDAH,(MethodInfo *)0x0);
  local_28 = (System_String_c *)
             ((double)(iVar1 - AJAMDCEKAFE_TypeInfo->static_fields->CEONKIEGMEB) / 1000.0);
  pSVar2 = System_Double__ToString((double)local_28,(System_String_o *)&local_28,StringLiteral_1574)
  ;
  pSVar2 = System_String__Concat(ALHDMEKMLPH,StringLiteral_13781,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}

