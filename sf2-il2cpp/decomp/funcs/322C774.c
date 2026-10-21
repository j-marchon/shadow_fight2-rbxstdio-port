// LevelPlaySample$$NMDMFDPKILG @ RVA 0x322C774

void LevelPlaySample__NMDMFDPKILG
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               Unity_Services_LevelPlay_LevelPlayAdError_o *EHKEOHNBLCK,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fb3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15522);
    DAT_04566fb3 = 1;
  }
  message = System_String__Format
                      (StringLiteral_15522,(Il2CppObject *)HFGGOHIPLKB,(Il2CppObject *)EHKEOHNBLCK,
                       (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

