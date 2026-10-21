// IJALENMNAIA$$JHEIGLGFONB @ RVA 0x3174164

void IJALENMNAIA__JHEIGLGFONB
               (System_String_o *NONPLOOOOAG,System_String_o *JJBPCFGELPO,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_0456694a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_2088);
    FUN_01bab630(&StringLiteral_15415);
    DAT_0456694a = 1;
  }
  message = System_String__Concat
                      (StringLiteral_15415,JJBPCFGELPO,StringLiteral_2088,NONPLOOOOAG,
                       (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

