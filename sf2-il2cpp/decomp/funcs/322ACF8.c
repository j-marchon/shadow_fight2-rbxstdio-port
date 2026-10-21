// LevelPlaySample$$KECEJEPBMFI @ RVA 0x322ACF8

void LevelPlaySample__KECEJEPBMFI
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
                    /* try { // try from 0332ad00 to 0342ad03 has its CatchHandler @ 0332ad84 */
                    /* try { // try from 0332ad04 to 0342ad07 has its CatchHandler @ 0332a7c8 */
                    /* try { // try from 0332ad08 to 0342ad0f has its CatchHandler @ 0332ad88 */
                    /* try { // try from 0332ad10 to 0342ad33 has its CatchHandler @ 0332a7c8 */
                    /* catch() { ... } // from try @ 0332ac7c with catch @ 0332ad14 */
                    /* catch() { ... } // from try @ 0332ab90 with catch @ 0332ad18 */
                    /* catch() { ... } // from try @ 0332ac8c with catch @ 0332ad1c */
  if ((DAT_04566f9f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0332ad34 to 0342ad37 has its CatchHandler @ 0332ad60 */
                    /* try { // try from 0332ad38 to 0342ad6f has its CatchHandler @ 0332a7c8 */
    FUN_01bab630(&StringLiteral_15517);
    DAT_04566f9f = 1;
  }
  message = System_String__Format(StringLiteral_15517,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
                    /* catch() { ... } // from try @ 0332ad34 with catch @ 0332ad60 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 0332ad70 to 0342ad83 has its CatchHandler @ 0332ae6c */
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

