// Original name: .LevelPlaySample  (obfuscated LevelPlaySample)
// TypeDefIndex 253
// Namespace: 
// public class LevelPlaySample : MonoBehaviour
// Fields:
//   private Texture2D lpLogo; // 0x20
//   private LevelPlayBannerAd KIAJDAOCCHI; // 0x28
//   private LevelPlayInterstitialAd AFFAMBLJIDN; // 0x30
//   private LevelPlayRewardedAd MHBAPJBAHKL; // 0x38
//   private bool PCCCPJKDLJC; // 0x40

// ===== private void AAFFIBOCFFH(LevelPlayAdError EHKEOHNBLCK)  [RVA 0x322A864]
// LevelPlaySample$$AAFFIBOCFFH @ RVA 0x322A864

void LevelPlaySample__AAFFIBOCFFH
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdError_o *EHKEOHNBLCK,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566f97 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15525/*"[LevelPlaySample] Received InterstitialOnAdLoadFailedEvent With Error: {0}"*/);
    DAT_04566f97 = 1;
  }
  message = System_String__Format(StringLiteral_15525/*"[LevelPlaySample] Received InterstitialOnAdLoadFailedEvent With Error: {0}"*/,(Il2CppObject *)EHKEOHNBLCK,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void DJCJNGBFGBG(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322A8F0]
// LevelPlaySample$$DJCJNGBFGBG @ RVA 0x322A8F0

void LevelPlaySample__DJCJNGBFGBG
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566f98 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15514/*"[LevelPlaySample] Received BannerOnAdExpandedEvent With AdInfo: {0}"*/);
    DAT_04566f98 = 1;
  }
  message = System_String__Format(StringLiteral_15514/*"[LevelPlaySample] Received BannerOnAdExpandedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 0332a978 to 0342a97f has its CatchHandler @ 0332adf8 */
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void ONLFONNJBPG(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322A97C]
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
    FUN_01bab630(&StringLiteral_15523/*"[LevelPlaySample] Received InterstitialOnAdDisplayedEvent With AdInfo: {0}"*/);
    DAT_04566f99 = 1;
  }
  message = System_String__Format(StringLiteral_15523/*"[LevelPlaySample] Received InterstitialOnAdDisplayedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void BDEGEMGKPMB(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322AA08]
// LevelPlaySample$$BDEGEMGKPMB @ RVA 0x322AA08

void LevelPlaySample__BDEGEMGKPMB
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566f9a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15527/*"[LevelPlaySample] Received RewardedVideoOnAdClickedEvent With AdInfo: {0}"*/);
    DAT_04566f9a = 1;
  }
  message = System_String__Format(StringLiteral_15527/*"[LevelPlaySample] Received RewardedVideoOnAdClickedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void NHFCBFMKMEF(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322AA94]
// LevelPlaySample$$NHFCBFMKMEF @ RVA 0x322AA94

void LevelPlaySample__NHFCBFMKMEF
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566f9b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15510/*"[LevelPlaySample] Received BannerOnAdClickedEvent With AdInfo: {0}"*/);
    DAT_04566f9b = 1;
  }
  message = System_String__Format(StringLiteral_15510/*"[LevelPlaySample] Received BannerOnAdClickedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void LOKJLKAPLGO(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322AB20]
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
    FUN_01bab630(&StringLiteral_15534/*"[LevelPlaySample] Received RewardedVideoOnLoadedEvent With AdInfo: {0}"*/);
    DAT_04566f9c = 1;
  }
  message = System_String__Format(StringLiteral_15534/*"[LevelPlaySample] Received RewardedVideoOnLoadedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0332ab90 to 0342abb3 has its CatchHandler @ 0332ad18 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void ECILFFHDDAJ(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322ABAC]
// LevelPlaySample$$ECILFFHDDAJ @ RVA 0x322ABAC

void LevelPlaySample__ECILFFHDDAJ
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
                    /* try { // try from 0332abb4 to 0342ac7b has its CatchHandler @ 0332a7c8 */
  if ((DAT_04566f9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15515/*"[LevelPlaySample] Received BannerOnAdLeftApplicationEvent With AdInfo: {0}"*/);
    DAT_04566f9d = 1;
  }
  message = System_String__Format(StringLiteral_15515/*"[LevelPlaySample] Received BannerOnAdLeftApplicationEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void DCKMGPNJNIC(LevelPlayImpressionData CAIHANIEHPM)  [RVA 0x322AC38]
// LevelPlaySample$$DCKMGPNJNIC @ RVA 0x322AC38

void LevelPlaySample__DCKMGPNJNIC
               (LevelPlaySample_o *__this,
               Unity_Services_LevelPlay_LevelPlayImpressionData_o *CAIHANIEHPM,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566f9e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15519/*"[LevelPlaySample] Received ImpressionDataReadyEvent allData: "*/);
                    /* try { // try from 0332ac7c to 0342ac83 has its CatchHandler @ 0332ad14 */
    FUN_01bab630(&StringLiteral_15518/*"[LevelPlaySample] Received ImpressionDataReadyEvent ToString(): {0}"*/);
                    /* try { // try from 0332ac8c to 0342acb7 has its CatchHandler @ 0332ad1c */
    DAT_04566f9e = 1;
  }
  pSVar1 = System_String__Format(StringLiteral_15518/*"[LevelPlaySample] Received ImpressionDataReadyEvent ToString(): {0}"*/,(Il2CppObject *)CAIHANIEHPM,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 0332acb8 to 0342acff has its CatchHandler @ 0332a7c8 */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (CAIHANIEHPM != (Unity_Services_LevelPlay_LevelPlayImpressionData_o *)0x0) {
    pSVar1 = System_String__Concat
                       (StringLiteral_15519/*"[LevelPlaySample] Received ImpressionDataReadyEvent allData: "*/,(CAIHANIEHPM->fields)._AllData_k__BackingField,
                        (MethodInfo *)0x0);
    UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KECEJEPBMFI(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322ACF8]
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
    FUN_01bab630(&StringLiteral_15517/*"[LevelPlaySample] Received BannerOnAdLoadedEvent With AdInfo: {0}"*/);
    DAT_04566f9f = 1;
  }
  message = System_String__Format(StringLiteral_15517/*"[LevelPlaySample] Received BannerOnAdLoadedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
                    /* catch() { ... } // from try @ 0332ad34 with catch @ 0332ad60 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 0332ad70 to 0342ad83 has its CatchHandler @ 0332ae6c */
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== public void Start()  [RVA 0x322AD84]
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
    FUN_01bab630(&StringLiteral_15506/*"[LevelPlaySample] LevelPlay.ValidateIntegration"*/);
    FUN_01bab630(&StringLiteral_15542/*"[LevelPlaySample] Unity version "*/);
                    /* try { // try from 0332ae14 to 0342ae17 has its CatchHandler @ 0332ae40 */
                    /* try { // try from 0332ae18 to 0342ae4f has its CatchHandler @ 0332a7c8 */
    FUN_01bab630(&StringLiteral_15505/*"[LevelPlaySample] LevelPlay SDK initialization"*/);
    FUN_01bab630(&StringLiteral_15537/*"[LevelPlaySample] Register initialization callbacks"*/);
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
  UnityEngine_Debug__Log(StringLiteral_15506/*"[LevelPlaySample] LevelPlay.ValidateIntegration"*/,(MethodInfo *)0x0);
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__ValidateIntegration((MethodInfo *)0x0);
  pSVar1 = Unity_Services_LevelPlay_LevelPlay__get_UnityVersion((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_15542/*"[LevelPlaySample] Unity version "*/,pSVar1,(MethodInfo *)0x0);
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  UnityEngine_Debug__Log(StringLiteral_15537/*"[LevelPlaySample] Register initialization callbacks"*/,(MethodInfo *)0x0);
  value = (System_Action_LevelPlayConfiguration__o *)
          thunk_FUN_01bda818(System_Action<LevelPlayConfiguration>_TypeInfo);
  System_Action<object>___ctor();
  Unity_Services_LevelPlay_LevelPlay__add_OnInitSuccess(value,(MethodInfo *)0x0);
  value_00 = (System_Action_LevelPlayInitError__o *)
             thunk_FUN_01bda818(System_Action<LevelPlayInitError>_TypeInfo);
  System_Action<object>___ctor();
  Unity_Services_LevelPlay_LevelPlay__add_OnInitFailed(value_00,(MethodInfo *)0x0);
  UnityEngine_Debug__Log(StringLiteral_15505/*"[LevelPlaySample] LevelPlay SDK initialization"*/,(MethodInfo *)0x0);
  pSVar1 = BEIKKEJHIAD__CHOBMKAKAOP((MethodInfo *)0x0);
  Unity_Services_LevelPlay_LevelPlay__Init(pSVar1,(System_String_o *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== private void JMEFCAAMCCI(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322AF60]
// LevelPlaySample$$JMEFCAAMCCI @ RVA 0x322AF60

void LevelPlaySample__JMEFCAAMCCI
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15528/*"[LevelPlaySample] Received RewardedVideoOnAdClosedEvent With AdInfo: {0}"*/);
    DAT_04566fa1 = 1;
  }
  message = System_String__Format(StringLiteral_15528/*"[LevelPlaySample] Received RewardedVideoOnAdClosedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void EPINKADNGPC(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322AFEC]
// LevelPlaySample$$EPINKADNGPC @ RVA 0x322AFEC

void LevelPlaySample__EPINKADNGPC
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15531/*"[LevelPlaySample] Received RewardedVideoOnAdInfoChangedEvent With AdInfo {0}"*/);
    DAT_04566fa2 = 1;
  }
  message = System_String__Format(StringLiteral_15531/*"[LevelPlaySample] Received RewardedVideoOnAdInfoChangedEvent With AdInfo {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void NJGIPCEMDAB(LevelPlayAdInfo HFGGOHIPLKB, LevelPlayAdError EHKEOHNBLCK)  [RVA 0x322B078]
// LevelPlaySample$$NJGIPCEMDAB @ RVA 0x322B078

void LevelPlaySample__NJGIPCEMDAB
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               Unity_Services_LevelPlay_LevelPlayAdError_o *EHKEOHNBLCK,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15530/*"[LevelPlaySample] Received RewardedVideoOnAdDisplayedFailedEvent With AdInfo: {0} and Error: {1}"*/);
    DAT_04566fa3 = 1;
  }
  message = System_String__Format
                      (StringLiteral_15530/*"[LevelPlaySample] Received RewardedVideoOnAdDisplayedFailedEvent With AdInfo: {0} and Error: {1}"*/,(Il2CppObject *)HFGGOHIPLKB,(Il2CppObject *)EHKEOHNBLCK,
                       (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void ADFENJGLAGA(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322B10C]
// LevelPlaySample$$ADFENJGLAGA @ RVA 0x322B10C

void LevelPlaySample__ADFENJGLAGA
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15513/*"[LevelPlaySample] Received BannerOnAdDisplayedEvent With AdInfo: {0}"*/);
    DAT_04566fa4 = 1;
  }
  message = System_String__Format(StringLiteral_15513/*"[LevelPlaySample] Received BannerOnAdDisplayedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void GDHOCPPOOIF(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322B198]
// LevelPlaySample$$GDHOCPPOOIF @ RVA 0x322B198

void LevelPlaySample__GDHOCPPOOIF
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15526/*"[LevelPlaySample] Received InterstitialOnAdLoadedEvent With AdInfo: {0}"*/);
    DAT_04566fa5 = 1;
  }
  message = System_String__Format(StringLiteral_15526/*"[LevelPlaySample] Received InterstitialOnAdLoadedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDisable()  [RVA 0x322B224]
// LevelPlaySample$$OnDisable @ RVA 0x322B224

void LevelPlaySample__OnDisable(LevelPlaySample_o *__this,MethodInfo *method)

{
  Unity_Services_LevelPlay_LevelPlayBannerAd_o *__this_00;
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *__this_01;
  
  __this_00 = (__this->fields).KIAJDAOCCHI;
  if (__this_00 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
    Unity_Services_LevelPlay_LevelPlayBannerAd__DestroyAd(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).AFFAMBLJIDN;
  if (__this_01 != (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)0x0) {
    Unity_Services_LevelPlay_LevelPlayInterstitialAd__DestroyAd(__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void JLGCDMMAGKG(LevelPlayAdError EHKEOHNBLCK)  [RVA 0x322B258]
// LevelPlaySample$$JLGCDMMAGKG @ RVA 0x322B258

void LevelPlaySample__JLGCDMMAGKG
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdError_o *EHKEOHNBLCK,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15516/*"[LevelPlaySample] Received BannerOnAdLoadFailedEvent With Error: {0}"*/);
    DAT_04566fa6 = 1;
  }
  message = System_String__Format(StringLiteral_15516/*"[LevelPlaySample] Received BannerOnAdLoadFailedEvent With Error: {0}"*/,(Il2CppObject *)EHKEOHNBLCK,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void ACADPALBDLH(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322B2E4]
// LevelPlaySample$$ACADPALBDLH @ RVA 0x322B2E4

void LevelPlaySample__ACADPALBDLH
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15511/*"[LevelPlaySample] Received BannerOnAdCollapsedEvent With AdInfo: {0}"*/);
    DAT_04566fa7 = 1;
  }
  message = System_String__Format(StringLiteral_15511/*"[LevelPlaySample] Received BannerOnAdCollapsedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void JGPGLINODDI(LevelPlayAdError EHKEOHNBLCK)  [RVA 0x322B370]
// LevelPlaySample$$JGPGLINODDI @ RVA 0x322B370

void LevelPlaySample__JGPGLINODDI
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdError_o *EHKEOHNBLCK,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15532/*"[LevelPlaySample] Received RewardedVideoOnAdLoadFailedEvent With Error: {0}"*/);
    DAT_04566fa8 = 1;
  }
  message = System_String__Format(StringLiteral_15532/*"[LevelPlaySample] Received RewardedVideoOnAdLoadFailedEvent With Error: {0}"*/,(Il2CppObject *)EHKEOHNBLCK,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void ENJIFGNBJLM(LevelPlayAdInfo HFGGOHIPLKB, LevelPlayReward COPNBALDNLF)  [RVA 0x322B3FC]
// LevelPlaySample$$ENJIFGNBJLM @ RVA 0x322B3FC

void LevelPlaySample__ENJIFGNBJLM
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               Unity_Services_LevelPlay_LevelPlayReward_o *COPNBALDNLF,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fa9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15533/*"[LevelPlaySample] Received RewardedVideoOnAdRewardedEvent With AdInfo: {0} and Reward: {1}"*/);
    DAT_04566fa9 = 1;
  }
  message = System_String__Format
                      (StringLiteral_15533/*"[LevelPlaySample] Received RewardedVideoOnAdRewardedEvent With AdInfo: {0} and Reward: {1}"*/,(Il2CppObject *)HFGGOHIPLKB,(Il2CppObject *)COPNBALDNLF,
                       (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void AKEBGKFCHLO(LevelPlayAdInfo HFGGOHIPLKB, LevelPlayAdError EHKEOHNBLCK)  [RVA 0x322B490]
// LevelPlaySample$$AKEBGKFCHLO @ RVA 0x322B490

void LevelPlaySample__AKEBGKFCHLO
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               Unity_Services_LevelPlay_LevelPlayAdError_o *EHKEOHNBLCK,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566faa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15512/*"[LevelPlaySample] Received BannerOnAdDisplayFailedEvent With AdInfo: {0} and Error: {1}"*/);
    DAT_04566faa = 1;
  }
  message = System_String__Format
                      (StringLiteral_15512/*"[LevelPlaySample] Received BannerOnAdDisplayFailedEvent With AdInfo: {0} and Error: {1}"*/,(Il2CppObject *)HFGGOHIPLKB,(Il2CppObject *)EHKEOHNBLCK,
                       (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void HGLONFMHCLC(LevelPlayInitError EHKEOHNBLCK)  [RVA 0x322B524]
// LevelPlaySample$$HGLONFMHCLC @ RVA 0x322B524

void LevelPlaySample__HGLONFMHCLC
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayInitError_o *EHKEOHNBLCK
               ,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fab & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15536/*"[LevelPlaySample] Received SdkInitializationFailedEvent with Error: {0}"*/);
    DAT_04566fab = 1;
  }
  message = System_String__Format(StringLiteral_15536/*"[LevelPlaySample] Received SdkInitializationFailedEvent with Error: {0}"*/,(Il2CppObject *)EHKEOHNBLCK,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void BOLHJFFPLPD(LevelPlayConfiguration PCMFDDODKED)  [RVA 0x322B5B0]
// LevelPlaySample$$BOLHJFFPLPD @ RVA 0x322B5B0

void LevelPlaySample__BOLHJFFPLPD
               (LevelPlaySample_o *__this,
               Unity_Services_LevelPlay_LevelPlayConfiguration_o *PCMFDDODKED,MethodInfo *method)

{
  System_String_o *message;
  MethodInfo *method_00;
  
  if ((DAT_04566fac & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15535/*"[LevelPlaySample] Received SdkInitializationCompletedEvent with Config: {0}"*/);
    DAT_04566fac = 1;
  }
  message = System_String__Format(StringLiteral_15535/*"[LevelPlaySample] Received SdkInitializationCompletedEvent with Config: {0}"*/,(Il2CppObject *)PCMFDDODKED,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  LevelPlaySample__BIGMGPLIEOD(__this,method_00);
  (__this->fields).PCCCPJKDLJC = true;
  return;
}


// ===== public void .ctor()  [RVA 0x322BED0]
// LevelPlaySample$$.ctor @ RVA 0x322BED0

void LevelPlaySample___ctor(LevelPlaySample_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void OnGUI()  [RVA 0x322BED8]
// LevelPlaySample$$OnGUI @ RVA 0x322BED8

void LevelPlaySample__OnGUI(LevelPlaySample_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GUISkin_o *__this_00;
  UnityEngine_GUIStyle_o *__this_01;
  Unity_Services_LevelPlay_LevelPlayRewardedAd_o *pUVar4;
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *pUVar5;
  Unity_Services_LevelPlay_LevelPlayBannerAd_o *pUVar6;
  MethodInfo *extraout_x1;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Texture_o *image;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o position;
  UnityEngine_Rect_o position_00;
  UnityEngine_Rect_o position_01;
  UnityEngine_Rect_o position_02;
  UnityEngine_Rect_o position_03;
  UnityEngine_Rect_o position_04;
  
  if ((DAT_04566fad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_GUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15502/*"[LevelPlaySample] HideBannerButtonClicked"*/);
    FUN_01bab630(&StringLiteral_8523/*"Load Banner"*/);
    FUN_01bab630(&StringLiteral_8526/*"Load Rewarded Video"*/);
    FUN_01bab630(&StringLiteral_12069/*"Show Interstitial"*/);
    FUN_01bab630(&StringLiteral_15538/*"[LevelPlaySample] ShowInterstitialButtonClicked"*/);
    FUN_01bab630(&StringLiteral_8524/*"Load Interstitial"*/);
    FUN_01bab630(&StringLiteral_15509/*"[LevelPlaySample] LoadRewardedVideoButtonClicked"*/);
    FUN_01bab630(&StringLiteral_7093/*"Hide Banner"*/);
    FUN_01bab630(&StringLiteral_15504/*"[LevelPlaySample] LevelPlay Rewarded Video Ad is not ready"*/);
    FUN_01bab630(&StringLiteral_15507/*"[LevelPlaySample] LoadBannerButtonClicked"*/);
    FUN_01bab630(&StringLiteral_15540/*"[LevelPlaySample] Showing Interstitial Ad"*/);
    FUN_01bab630(&StringLiteral_15541/*"[LevelPlaySample] Showing Rewarded Video Ad"*/);
    FUN_01bab630(&StringLiteral_12071/*"Show Rewarded Video"*/);
    FUN_01bab630(&StringLiteral_15539/*"[LevelPlaySample] ShowRewardedVideoButtonClicked"*/);
    FUN_01bab630(&StringLiteral_15508/*"[LevelPlaySample] LoadInterstitialButtonClicked"*/);
    FUN_01bab630(&StringLiteral_15503/*"[LevelPlaySample] LevelPlay Interstital Ad is not ready"*/);
    DAT_04566fad = 1;
    method = extraout_x1;
  }
  bVar1 = (__this->fields).PCCCPJKDLJC;
  if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_GUI_TypeInfo,method);
  }
  UnityEngine_GUI__set_enabled(bVar1 != false,(MethodInfo *)0x0);
  UVar11 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  position.fields.m_XMin = UVar11.fields.m_XMin;
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UVar11 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  UVar12 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  position.fields.m_Width = UVar12.fields.m_Width;
  UVar12 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  position.fields.m_Height = UVar12.fields.m_Height;
  UnityEngine_GUI__set_backgroundColor
            ((UnityEngine_Color_o)(ZEXT816(0x3f8000003f800000) << 0x40),(MethodInfo *)0x0);
  __this_00 = UnityEngine_GUI__get_skin((MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GUISkin_o *)0x0) &&
     (__this_01 = UnityEngine_GUISkin__get_button(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GUIStyle_o *)0x0)) {
    UnityEngine_GUIStyle__set_fontSize(__this_01,0x28,(MethodInfo *)0x0);
    position.fields.m_YMin = (float)iVar3 - (UVar11.fields.m_Height + UVar11.fields.m_YMin);
    UnityEngine_GUI__BeginGroup(position,(MethodInfo *)0x0);
    x = (__this->fields).lpLogo;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      image = (UnityEngine_Texture_o *)(__this->fields).lpLogo;
      if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UVar11.fields.m_YMin = 20.0;
      UVar11.fields.m_XMin = (position.fields.m_Width + -500.0) * 0.5;
      UVar11.fields.m_Width = 500.0;
      UVar11.fields.m_Height = 100.0;
      UnityEngine_GUI__DrawTexture(UVar11,image,2,(MethodInfo *)0x0);
    }
    fVar9 = position.fields.m_Width * 0.05;
    fVar8 = position.fields.m_Width * 0.4;
    fVar7 = position.fields.m_Height * 0.08;
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UVar12.fields.m_YMin = position.fields.m_Height * 0.15;
    UVar12.fields.m_XMin = fVar9;
    UVar12.fields.m_Height = fVar7;
    UVar12.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(UVar12,StringLiteral_8526/*"Load Rewarded Video"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15509/*"[LevelPlaySample] LoadRewardedVideoButtonClicked"*/,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).MHBAPJBAHKL;
      if (pUVar4 == (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) goto LAB_0332c540;
      Unity_Services_LevelPlay_LevelPlayRewardedAd__LoadAd(pUVar4,(MethodInfo *)0x0);
    }
    fVar10 = position.fields.m_Width * 0.55;
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_00.fields.m_YMin = position.fields.m_Height * 0.15;
    position_00.fields.m_XMin = fVar10;
    position_00.fields.m_Height = fVar7;
    position_00.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_00,StringLiteral_12071/*"Show Rewarded Video"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15539/*"[LevelPlaySample] ShowRewardedVideoButtonClicked"*/,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).MHBAPJBAHKL;
      if (pUVar4 == (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) goto LAB_0332c540;
      bVar2 = Unity_Services_LevelPlay_LevelPlayRewardedAd__IsAdReady(pUVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      if (bVar2) {
        UnityEngine_Debug__Log(StringLiteral_15541/*"[LevelPlaySample] Showing Rewarded Video Ad"*/,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).MHBAPJBAHKL;
        if (pUVar4 == (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) goto LAB_0332c540;
        Unity_Services_LevelPlay_LevelPlayRewardedAd__ShowAd
                  (pUVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Debug__Log(StringLiteral_15504/*"[LevelPlaySample] LevelPlay Rewarded Video Ad is not ready"*/,(MethodInfo *)0x0);
      }
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_01.fields.m_YMin = position.fields.m_Height * 0.25;
    position_01.fields.m_XMin = fVar9;
    position_01.fields.m_Height = fVar7;
    position_01.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_01,StringLiteral_8524/*"Load Interstitial"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15508/*"[LevelPlaySample] LoadInterstitialButtonClicked"*/,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).AFFAMBLJIDN;
      if (pUVar5 == (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)0x0) goto LAB_0332c540;
      Unity_Services_LevelPlay_LevelPlayInterstitialAd__LoadAd(pUVar5,(MethodInfo *)0x0);
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_02.fields.m_YMin = position.fields.m_Height * 0.25;
    position_02.fields.m_XMin = fVar10;
    position_02.fields.m_Height = fVar7;
    position_02.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_02,StringLiteral_12069/*"Show Interstitial"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15538/*"[LevelPlaySample] ShowInterstitialButtonClicked"*/,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).AFFAMBLJIDN;
      if (pUVar5 == (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)0x0) goto LAB_0332c540;
      bVar2 = Unity_Services_LevelPlay_LevelPlayInterstitialAd__IsAdReady(pUVar5,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      if (bVar2) {
        UnityEngine_Debug__Log(StringLiteral_15540/*"[LevelPlaySample] Showing Interstitial Ad"*/,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).AFFAMBLJIDN;
        if (pUVar5 == (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)0x0) goto LAB_0332c540;
        Unity_Services_LevelPlay_LevelPlayInterstitialAd__ShowAd
                  (pUVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Debug__Log(StringLiteral_15503/*"[LevelPlaySample] LevelPlay Interstital Ad is not ready"*/,(MethodInfo *)0x0);
      }
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_03.fields.m_YMin = position.fields.m_Height * 0.35;
    position_03.fields.m_XMin = fVar9;
    position_03.fields.m_Height = fVar7;
    position_03.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_03,StringLiteral_8523/*"Load Banner"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15507/*"[LevelPlaySample] LoadBannerButtonClicked"*/,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).KIAJDAOCCHI;
      if (pUVar6 == (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) goto LAB_0332c540;
      Unity_Services_LevelPlay_LevelPlayBannerAd__LoadAd(pUVar6,(MethodInfo *)0x0);
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_04.fields.m_YMin = position.fields.m_Height * 0.35;
    position_04.fields.m_XMin = fVar10;
    position_04.fields.m_Height = fVar7;
    position_04.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_04,StringLiteral_7093/*"Hide Banner"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15502/*"[LevelPlaySample] HideBannerButtonClicked"*/,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).KIAJDAOCCHI;
      if (pUVar6 == (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) goto LAB_0332c540;
      Unity_Services_LevelPlay_LevelPlayBannerAd__HideAd(pUVar6,(MethodInfo *)0x0);
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_GUI__EndGroup((MethodInfo *)0x0);
    return;
  }
LAB_0332c540:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KONLJJGHAIG(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322C544]
// LevelPlaySample$$KONLJJGHAIG @ RVA 0x322C544

void LevelPlaySample__KONLJJGHAIG
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fae & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15529/*"[LevelPlaySample] Received RewardedVideoOnAdDisplayedEvent With AdInfo: {0}"*/);
    DAT_04566fae = 1;
  }
  message = System_String__Format(StringLiteral_15529/*"[LevelPlaySample] Received RewardedVideoOnAdDisplayedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void LDAEIMDIBFD(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322C5D0]
// LevelPlaySample$$LDAEIMDIBFD @ RVA 0x322C5D0

void LevelPlaySample__LDAEIMDIBFD
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566faf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15521/*"[LevelPlaySample] Received InterstitialOnAdClosedEvent With AdInfo: {0}"*/);
    DAT_04566faf = 1;
  }
  message = System_String__Format(StringLiteral_15521/*"[LevelPlaySample] Received InterstitialOnAdClosedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void EELEPPJJMFH(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322C65C]
// LevelPlaySample$$EELEPPJJMFH @ RVA 0x322C65C

void LevelPlaySample__EELEPPJJMFH
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fb0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15520/*"[LevelPlaySample] Received InterstitialOnAdClickedEvent With AdInfo: {0}"*/);
    DAT_04566fb0 = 1;
  }
  message = System_String__Format(StringLiteral_15520/*"[LevelPlaySample] Received InterstitialOnAdClickedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void LDBINAOFDCP(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x322C6E8]
// LevelPlaySample$$LDBINAOFDCP @ RVA 0x322C6E8

void LevelPlaySample__LDBINAOFDCP
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fb1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15524/*"[LevelPlaySample] Received InterstitialOnAdInfoChangedEvent With AdInfo: {0}"*/);
    DAT_04566fb1 = 1;
  }
  message = System_String__Format(StringLiteral_15524/*"[LevelPlaySample] Received InterstitialOnAdInfoChangedEvent With AdInfo: {0}"*/,(Il2CppObject *)HFGGOHIPLKB,(MethodInfo *)0x0)
  ;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== private void BIGMGPLIEOD()  [RVA 0x322B654]
// LevelPlaySample$$BIGMGPLIEOD @ RVA 0x322B654

void LevelPlaySample__BIGMGPLIEOD(LevelPlaySample_o *__this,MethodInfo *method)

{
  System_Action_LevelPlayImpressionData__o *value;
  System_String_o *pSVar1;
  Unity_Services_LevelPlay_LevelPlayRewardedAd_o *pUVar2;
  System_Action_LevelPlayAdInfo__o *pSVar3;
  System_Action_LevelPlayAdError__o *pSVar4;
  System_Action_LevelPlayAdInfo__LevelPlayAdError__o *pSVar5;
  System_Action_LevelPlayAdInfo__LevelPlayReward__o *value_00;
  Unity_Services_LevelPlay_LevelPlayBannerAd_o *pUVar6;
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *pUVar7;
  MethodInfo *extraout_x1;
  Unity_Services_LevelPlay_LevelPlayRewardedAd_o **ppUVar8;
  Unity_Services_LevelPlay_LevelPlayBannerAd_o **ppUVar9;
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o **ppUVar10;
  
  if ((DAT_04566fb2 & 1) == 0) {
    FUN_01bab630(&System_Action<LevelPlayAdError>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayImpressionData>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo,_LevelPlayReward>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayBannerAd_TypeInfo);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayInterstitialAd_TypeInfo);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayRewardedAd_TypeInfo);
    FUN_01bab630(&Method_LevelPlaySample_AAFFIBOCFFH__);
    FUN_01bab630(&Method_LevelPlaySample_ACADPALBDLH__);
    FUN_01bab630(&Method_LevelPlaySample_ADFENJGLAGA__);
    FUN_01bab630(&Method_LevelPlaySample_AKEBGKFCHLO__);
    FUN_01bab630(&Method_LevelPlaySample_BDEGEMGKPMB__);
    FUN_01bab630(&Method_LevelPlaySample_DCKMGPNJNIC__);
    FUN_01bab630(&Method_LevelPlaySample_DJCJNGBFGBG__);
    FUN_01bab630(&Method_LevelPlaySample_ECILFFHDDAJ__);
    FUN_01bab630(&Method_LevelPlaySample_EELEPPJJMFH__);
    FUN_01bab630(&Method_LevelPlaySample_ENJIFGNBJLM__);
    FUN_01bab630(&Method_LevelPlaySample_EPINKADNGPC__);
    FUN_01bab630(&Method_LevelPlaySample_GDHOCPPOOIF__);
    FUN_01bab630(&Method_LevelPlaySample_JGPGLINODDI__);
    FUN_01bab630(&Method_LevelPlaySample_JLGCDMMAGKG__);
    FUN_01bab630(&Method_LevelPlaySample_JMEFCAAMCCI__);
    FUN_01bab630(&Method_LevelPlaySample_KECEJEPBMFI__);
    FUN_01bab630(&Method_LevelPlaySample_KONLJJGHAIG__);
    FUN_01bab630(&Method_LevelPlaySample_LDAEIMDIBFD__);
    FUN_01bab630(&Method_LevelPlaySample_LDBINAOFDCP__);
    FUN_01bab630(&Method_LevelPlaySample_LOKJLKAPLGO__);
    FUN_01bab630(&Method_LevelPlaySample_NHFCBFMKMEF__);
    FUN_01bab630(&Method_LevelPlaySample_NJGIPCEMDAB__);
    FUN_01bab630(&Method_LevelPlaySample_NMDMFDPKILG__);
    FUN_01bab630(&Method_LevelPlaySample_ONLFONNJBPG__);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566fb2 = 1;
    method = extraout_x1;
  }
  value = (System_Action_LevelPlayImpressionData__o *)
          thunk_FUN_01bda818(System_Action<LevelPlayImpressionData>_TypeInfo,method);
  System_Action<object>___ctor();
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__add_OnImpressionDataReady(value,(MethodInfo *)0x0);
  pSVar1 = BEIKKEJHIAD__OMBKMANDPBN((MethodInfo *)0x0);
  pUVar2 = (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)
           thunk_FUN_01bda818(Unity_Services_LevelPlay_LevelPlayRewardedAd_TypeInfo);
  Unity_Services_LevelPlay_LevelPlayRewardedAd___ctor
            (pUVar2,pSVar1,(Unity_Services_LevelPlay_LevelPlayRewardedAd_Config_o *)0x0,
             (MethodInfo *)0x0);
  ppUVar8 = &(__this->fields).MHBAPJBAHKL;
  *ppUVar8 = pUVar2;
  thunk_FUN_01c20e04(ppUVar8,pUVar2);
  pUVar2 = *ppUVar8;
  pSVar3 = (System_Action_LevelPlayAdInfo__o *)
           thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
  System_Action<object>___ctor();
  if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
    Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdLoaded(pUVar2,pSVar3,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).MHBAPJBAHKL;
    pSVar4 = (System_Action_LevelPlayAdError__o *)
             thunk_FUN_01bda818(System_Action<LevelPlayAdError>_TypeInfo);
    System_Action<object>___ctor();
    if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
      Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdLoadFailed
                (pUVar2,pSVar4,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).MHBAPJBAHKL;
      pSVar3 = (System_Action_LevelPlayAdInfo__o *)
               thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
      System_Action<object>___ctor();
      if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
        Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdDisplayed
                  (pUVar2,pSVar3,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).MHBAPJBAHKL;
        pSVar5 = (System_Action_LevelPlayAdInfo__LevelPlayAdError__o *)
                 thunk_FUN_01bda818(System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo);
        System_Action<object,_object>___ctor();
        if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
          Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdDisplayFailed
                    (pUVar2,pSVar5,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).MHBAPJBAHKL;
          value_00 = (System_Action_LevelPlayAdInfo__LevelPlayReward__o *)
                     thunk_FUN_01bda818(System_Action<LevelPlayAdInfo,_LevelPlayReward>_TypeInfo);
          System_Action<object,_object>___ctor();
          if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
            Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdRewarded
                      (pUVar2,value_00,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).MHBAPJBAHKL;
            pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                     thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
            System_Action<object>___ctor();
            if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
              Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdClicked
                        (pUVar2,pSVar3,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).MHBAPJBAHKL;
              pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                       thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
              System_Action<object>___ctor();
              if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
                Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdClosed
                          (pUVar2,pSVar3,(MethodInfo *)0x0);
                pUVar2 = (__this->fields).MHBAPJBAHKL;
                pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                         thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                System_Action<object>___ctor();
                if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
                  Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdInfoChanged
                            (pUVar2,pSVar3,(MethodInfo *)0x0);
                  pSVar1 = BEIKKEJHIAD__KADBPNJNAND((MethodInfo *)0x0);
                  pUVar6 = (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)
                           thunk_FUN_01bda818(Unity_Services_LevelPlay_LevelPlayBannerAd_TypeInfo);
                  Unity_Services_LevelPlay_LevelPlayBannerAd___ctor
                            (pUVar6,pSVar1,
                             (Unity_Services_LevelPlay_LevelPlayBannerAd_Config_o *)0x0,
                             (MethodInfo *)0x0);
                  ppUVar9 = &(__this->fields).KIAJDAOCCHI;
                  *ppUVar9 = pUVar6;
                  thunk_FUN_01c20e04(ppUVar9,pUVar6);
                  pUVar6 = *ppUVar9;
                  pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                           thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                    Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdLoaded
                              (pUVar6,pSVar3,(MethodInfo *)0x0);
                    pUVar6 = (__this->fields).KIAJDAOCCHI;
                    pSVar4 = (System_Action_LevelPlayAdError__o *)
                             thunk_FUN_01bda818(System_Action<LevelPlayAdError>_TypeInfo);
                    System_Action<object>___ctor();
                    if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                      Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdLoadFailed
                                (pUVar6,pSVar4,(MethodInfo *)0x0);
                      pUVar6 = (__this->fields).KIAJDAOCCHI;
                      pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                               thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                        Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdDisplayed
                                  (pUVar6,pSVar3,(MethodInfo *)0x0);
                        pUVar6 = (__this->fields).KIAJDAOCCHI;
                        pSVar5 = (System_Action_LevelPlayAdInfo__LevelPlayAdError__o *)
                                 thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo
                                                  );
                        System_Action<object,_object>___ctor();
                        if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                          Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdDisplayFailed
                                    (pUVar6,pSVar5,(MethodInfo *)0x0);
                          pUVar6 = (__this->fields).KIAJDAOCCHI;
                          pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                   thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                          System_Action<object>___ctor();
                          if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                            Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdClicked
                                      (pUVar6,pSVar3,(MethodInfo *)0x0);
                            pUVar6 = (__this->fields).KIAJDAOCCHI;
                            pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                     thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                            System_Action<object>___ctor();
                            if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                              Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdCollapsed
                                        (pUVar6,pSVar3,(MethodInfo *)0x0);
                              pUVar6 = (__this->fields).KIAJDAOCCHI;
                              pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                       thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                              System_Action<object>___ctor();
                              if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                                Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdLeftApplication
                                          (pUVar6,pSVar3,(MethodInfo *)0x0);
                                pUVar6 = (__this->fields).KIAJDAOCCHI;
                                pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                         thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo)
                                ;
                                System_Action<object>___ctor();
                                if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                                  Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdExpanded
                                            (pUVar6,pSVar3,(MethodInfo *)0x0);
                                  pSVar1 = BEIKKEJHIAD__DFNGIMBJFED((MethodInfo *)0x0);
                                  pUVar7 = (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)
                                           thunk_FUN_01bda818(
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_TypeInfo
                                                  );
                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd___ctor
                                            (pUVar7,pSVar1,
                                             (Unity_Services_LevelPlay_LevelPlayInterstitialAd_Config_o
                                              *)0x0,(MethodInfo *)0x0);
                                  ppUVar10 = &(__this->fields).AFFAMBLJIDN;
                                  *ppUVar10 = pUVar7;
                                  thunk_FUN_01c20e04(ppUVar10,pUVar7);
                                  pUVar7 = *ppUVar10;
                                  pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                           thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                  System_Action<object>___ctor();
                                  if (pUVar7 != (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                 *)0x0) {
                                    Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdLoaded
                                              (pUVar7,pSVar3,(MethodInfo *)0x0);
                                    pUVar7 = (__this->fields).AFFAMBLJIDN;
                                    pSVar4 = (System_Action_LevelPlayAdError__o *)
                                             thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdError>_TypeInfo);
                                    System_Action<object>___ctor();
                                    if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                      Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdLoadFailed
                                                (pUVar7,pSVar4,(MethodInfo *)0x0);
                                      pUVar7 = (__this->fields).AFFAMBLJIDN;
                                      pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                               thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                      System_Action<object>___ctor();
                                      if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                        Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdDisplayed
                                                  (pUVar7,pSVar3,(MethodInfo *)0x0);
                                        pUVar7 = (__this->fields).AFFAMBLJIDN;
                                        pSVar5 = (System_Action_LevelPlayAdInfo__LevelPlayAdError__o
                                                  *)thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo
                                                  );
                                        System_Action<object,_object>___ctor();
                                        if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                          Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdDisplayFailed
                                                    (pUVar7,pSVar5,(MethodInfo *)0x0);
                                          pUVar7 = (__this->fields).AFFAMBLJIDN;
                                          pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                                   thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                          System_Action<object>___ctor();
                                          if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                            Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdClicked
                                                      (pUVar7,pSVar3,(MethodInfo *)0x0);
                                            pUVar7 = (__this->fields).AFFAMBLJIDN;
                                            pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                                     thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                            System_Action<object>___ctor();
                                            if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                              Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdClosed
                                                        (pUVar7,pSVar3,(MethodInfo *)0x0);
                                              pUVar7 = (__this->fields).AFFAMBLJIDN;
                                              pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                                       thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                              System_Action<object>___ctor();
                                              if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                                Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdInfoChanged
                                                          (pUVar7,pSVar3,(MethodInfo *)0x0);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NMDMFDPKILG(LevelPlayAdInfo HFGGOHIPLKB, LevelPlayAdError EHKEOHNBLCK)  [RVA 0x322C774]
// LevelPlaySample$$NMDMFDPKILG @ RVA 0x322C774

void LevelPlaySample__NMDMFDPKILG
               (LevelPlaySample_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               Unity_Services_LevelPlay_LevelPlayAdError_o *EHKEOHNBLCK,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04566fb3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15522/*"[LevelPlaySample] Received InterstitialOnAdDisplayFailedEvent With AdInfo: {0} and Error: {1}"*/);
    DAT_04566fb3 = 1;
  }
  message = System_String__Format
                      (StringLiteral_15522/*"[LevelPlaySample] Received InterstitialOnAdDisplayFailedEvent With AdInfo: {0} and Error: {1}"*/,(Il2CppObject *)HFGGOHIPLKB,(Il2CppObject *)EHKEOHNBLCK,
                       (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

