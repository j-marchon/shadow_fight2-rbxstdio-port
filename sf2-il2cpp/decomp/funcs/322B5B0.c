// LevelPlaySample$$BOLHJFFPLPD @ RVA 0x322B5B0

void LevelPlaySample__BOLHJFFPLPD
               (LevelPlaySample_o *__this,
               Unity_Services_LevelPlay_LevelPlayConfiguration_o *PCMFDDODKED,MethodInfo *method)

{
  System_String_o *message;
  MethodInfo *method_00;
  
  if ((DAT_04566fac & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15535);
    DAT_04566fac = 1;
  }
  message = System_String__Format(StringLiteral_15535,(Il2CppObject *)PCMFDDODKED,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  LevelPlaySample__BIGMGPLIEOD(__this,method_00);
  (__this->fields).PCCCPJKDLJC = true;
  return;
}

