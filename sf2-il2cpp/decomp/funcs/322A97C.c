// LevelPlaySample$$ONLFONNJBPG @ RVA 0x322A97C

void LevelPlaySample__ONLFONNJBPG
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
                    /* try { // try from 0332a98c to 0342a9b7 has its CatchHandler @ 0332adfc */
  if ((DAT_04566f99 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0332a9b8 to 0342ab2b has its CatchHandler @ 0332a7c8 */
    FUN_01bab630(&StringLiteral_15523);
    DAT_04566f99 = 1;
  }
  message = System_String__Format(StringLiteral_15523,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

