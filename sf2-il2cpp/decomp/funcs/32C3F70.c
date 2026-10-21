// FEPCHKMAIBL$$DGLJCGNHLIG @ RVA 0x32C3F70

void FEPCHKMAIBL__DGLJCGNHLIG(MethodInfo *method)

{
  HOOAAGABMBL_o **ppHVar1;
  System_Action_o **ppSVar2;
  System_Action_int__int__o **ppSVar3;
  
  if ((DAT_045674e1 & 1) == 0) {
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    DAT_045674e1 = 1;
  }
  if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppHVar1 = &FEPCHKMAIBL_TypeInfo->static_fields->AIGNPODKOAH;
  *ppHVar1 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar1,0);
  ppSVar2 = &FEPCHKMAIBL_TypeInfo->static_fields->OBDBCPILHKI;
  *ppSVar2 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  ppSVar3 = &FEPCHKMAIBL_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar3 = (System_Action_int__int__o *)0x0;
  thunk_FUN_01c20e04(ppSVar3,0);
  return;
}

