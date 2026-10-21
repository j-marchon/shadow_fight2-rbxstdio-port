// PNLFHHJGDLI$$OINCNNMIDEB @ RVA 0x3325590

void PNLFHHJGDLI__OINCNNMIDEB(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567896 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567896 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  ppSVar1 = &PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  PNLFHHJGDLI__DHFILBENKMM(&PNLFHHJGDLI_TypeInfo->static_fields->FHAAJJAKNEJ,method_00);
  return;
}

