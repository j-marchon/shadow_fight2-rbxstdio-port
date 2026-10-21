// KICJDJCJLKJ$$JHEIGLGFONB @ RVA 0x348D55C

void KICJDJCJLKJ__JHEIGLGFONB
               (System_String_o *NONPLOOOOAG,System_String_o *JJBPCFGELPO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *message;
  
  if ((DAT_045683f1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_2088);
    FUN_01bab630(&StringLiteral_15420);
    DAT_045683f1 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(NONPLOOOOAG,(MethodInfo *)0x0);
  if (!bVar1) {
    NONPLOOOOAG = System_String__Concat(StringLiteral_2088,NONPLOOOOAG,(MethodInfo *)0x0);
  }
  message = System_String__Concat(StringLiteral_15420,JJBPCFGELPO,NONPLOOOOAG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

