// LevelPlaySample$$Start @ RVA 0x322AD84

void LevelPlaySample__Start(LevelPlaySample_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_LevelPlayConfiguration__o *value;
  System_Action_LevelPlayInitError__o *value_00;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 0332ad00 with catch @ 0332ad84
                       try { // try from 0332ad84 to 0342ada7 has its CatchHandler @ 0332a7c8 */
                    /* catch() { ... } // from try @ 0332ad08 with catch @ 0332ad88 */
                    /* catch() { ... } // from try @ 0332ab40 with catch @ 0332ad8c */
                    /* catch() { ... } // from try @ 0332ab2c with catch @ 0332ad90 */
                    /* try { // try from 0332ada8 to 0342adab has its CatchHandler @ 0332add4 */
                    /* try { // try from 0332adac to 0342ade3 has its CatchHandler @ 0332a7c8 */
  if ((DAT_04566fa0 & 1) == 0) {
    FUN_01bab630(&System_Action<LevelPlayConfiguration>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayInitError>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 0332ada8 with catch @ 0332add4 */
    FUN_01bab630(&Method_LevelPlaySample_BOLHJFFPLPD__);
                    /* try { // try from 0332ade4 to 0342adf7 has its CatchHandler @ 0332ae6c */
    FUN_01bab630(&Method_LevelPlaySample_HGLONFMHCLC__);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
                    /* catch() { ... } // from try @ 0332a978 with catch @ 0332adf8
                       try { // try from 0332adf8 to 0342ae13 has its CatchHandler @ 0332a7c8 */
                    /* catch() { ... } // from try @ 0332a98c with catch @ 0332adfc */
    FUN_01bab630(&StringLiteral_15506);
    FUN_01bab630(&StringLiteral_15542);
                    /* try { // try from 0332ae14 to 0342ae17 has its CatchHandler @ 0332ae40 */
                    /* try { // try from 0332ae18 to 0342ae4f has its CatchHandler @ 0332a7c8 */
    FUN_01bab630(&StringLiteral_15505);
    FUN_01bab630(&StringLiteral_15537);
    DAT_04566fa0 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0332ae14 with catch @ 0332ae40 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
                    /* try { // try from 0332ae50 to 0342ae57 has its CatchHandler @ 0332ae6c */
                    /* try { // try from 0332ae58 to 0342ae63 has its CatchHandler @ 0332a7c8 */
                    /* try { // try from 0332ae64 to 0342ae6b has its CatchHandler @ 0332ae6c */
                    /* catch() { ... } // from try @ 0332ad70 with catch @ 0332ae6c
                       catch() { ... } // from try @ 0332ade4 with catch @ 0332ae6c
                       catch() { ... } // from try @ 0332ae50 with catch @ 0332ae6c
                       catch() { ... } // from try @ 0332ae64 with catch @ 0332ae6c */
  UnityEngine_Debug__Log(StringLiteral_15506,(MethodInfo *)0x0);
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__ValidateIntegration((MethodInfo *)0x0);
  pSVar1 = Unity_Services_LevelPlay_LevelPlay__get_UnityVersion((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_15542,pSVar1,(MethodInfo *)0x0);
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  UnityEngine_Debug__Log(StringLiteral_15537,(MethodInfo *)0x0);
  value = (System_Action_LevelPlayConfiguration__o *)
          thunk_FUN_01bda818(System_Action<LevelPlayConfiguration>_TypeInfo);
  System_Action<object>___ctor();
  Unity_Services_LevelPlay_LevelPlay__add_OnInitSuccess(value,(MethodInfo *)0x0);
  value_00 = (System_Action_LevelPlayInitError__o *)
             thunk_FUN_01bda818(System_Action<LevelPlayInitError>_TypeInfo);
  System_Action<object>___ctor();
  Unity_Services_LevelPlay_LevelPlay__add_OnInitFailed(value_00,(MethodInfo *)0x0);
  UnityEngine_Debug__Log(StringLiteral_15505,(MethodInfo *)0x0);
  pSVar1 = BEIKKEJHIAD__CHOBMKAKAOP((MethodInfo *)0x0);
  Unity_Services_LevelPlay_LevelPlay__Init(pSVar1,(System_String_o *)0x0,(MethodInfo *)0x0);
  return;
}

