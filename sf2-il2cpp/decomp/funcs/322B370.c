// LevelPlaySample$$JGPGLINODDI @ RVA 0x322B370

void LevelPlaySample__JGPGLINODDI
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdError_o *EHKEOHNBLCK,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15532);
    DAT_04566fa8 = 1;
  }
  message = System_String__Format(StringLiteral_15532,(Il2CppObject *)EHKEOHNBLCK,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

