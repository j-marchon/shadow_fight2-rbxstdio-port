// MKFPGMBBGIA$$KLOKPLHMGMC @ RVA 0x31D72F8

void MKFPGMBBGIA__KLOKPLHMGMC(MKFPGMBBGIA_o *__this,System_String_o *DKJAOOHIOIN,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04566cf1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_12872);
    FUN_01bab630(&StringLiteral_11157);
    DAT_04566cf1 = 1;
  }
  ppSVar1 = &(__this->fields).DBOPNAKLJAL;
  *ppSVar1 = DKJAOOHIOIN;
  thunk_FUN_01c20e04(ppSVar1,DKJAOOHIOIN);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_12872,(MethodInfo *)0x0);
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__GKDHGKBMPAG(StringLiteral_11157,(MethodInfo *)0x0);
  OCLJMFBDKOA__LELMGKMIGMO(StringLiteral_11157,(MethodInfo *)0x0);
  (__this->fields).GPIIGPOLINL = 0;
  return;
}

