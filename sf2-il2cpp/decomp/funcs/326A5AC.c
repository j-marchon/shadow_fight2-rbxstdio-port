// BDGDJDGHMJI$$IGMDDJFPIJL @ RVA 0x326A5AC

System_String_o * BDGDJDGHMJI__IGMDDJFPIJL(BDGDJDGHMJI_o *__this,MethodInfo *method)

{
  BDGDJDGHMJI_c *method_00;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045671d7 & 1) == 0) {
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    DAT_045671d7 = 1;
    method = extraout_x1;
  }
  method_00 = BDGDJDGHMJI_TypeInfo;
  if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BDGDJDGHMJI_c *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo,method);
  }
  pSVar1 = BDGDJDGHMJI__HDDPPDKDAKG((MethodInfo *)method_00);
  return pSVar1;
}

