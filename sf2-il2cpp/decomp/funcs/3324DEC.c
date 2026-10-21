// PNLFHHJGDLI$$JCMBFGCBBAK @ RVA 0x3324DEC

void PNLFHHJGDLI__JCMBFGCBBAK(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456786b & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456786b = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  ppSVar1 = &PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  return;
}

