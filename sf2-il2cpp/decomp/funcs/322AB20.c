// LevelPlaySample$$LOKJLKAPLGO @ RVA 0x322AB20

void LevelPlaySample__LOKJLKAPLGO
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
                    /* try { // try from 0332ab2c to 0342ab33 has its CatchHandler @ 0332ad90 */
                    /* try { // try from 0332ab40 to 0342ab4f has its CatchHandler @ 0332ad8c */
  if ((DAT_04566f9c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15534);
    DAT_04566f9c = 1;
  }
  message = System_String__Format(StringLiteral_15534,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0332ab90 to 0342abb3 has its CatchHandler @ 0332ad18 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

