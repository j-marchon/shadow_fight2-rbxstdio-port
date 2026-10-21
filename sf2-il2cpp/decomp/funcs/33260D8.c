// PNLFHHJGDLI$$OAJGDIIIPPO @ RVA 0x33260D8

void PNLFHHJGDLI__OAJGDIIIPPO(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567879 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567879 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  ppSVar1 = &PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  PNLFHHJGDLI__NAGFLIBNEFO(&PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG,method_00);
  return;
}

