// Nekki.SF2.GUI.Map.ContentToggle$$JOICELFGBLC @ RVA 0x33B2D14

void Nekki_SF2_GUI_Map_ContentToggle__JOICELFGBLC
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,DG_Tweening_Sequence_o *OCBEBGEKOIA,
               DG_Tweening_Core_DOGetter_float__o *DPFAFGCKEJH,
               DG_Tweening_Core_DOSetter_float__o *ABLMELPONIJ,
               DG_Tweening_Core_DOGetter_float__o *AHKPHMEGKPH,
               DG_Tweening_Core_DOSetter_float__o *EBDJIEAJIGK,MethodInfo *method)

{
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar1;
  DG_Tweening_Tween_o *pDVar2;
  ulong uVar3;
  DG_Tweening_TweenCallback_o *callback;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar4;
  float duration;
  
                    /* try { // try from 034b2d18 to 035b2d1f has its CatchHandler @ 034b49f0 */
                    /* try { // try from 034b2d24 to 035b2d2b has its CatchHandler @ 034b49e0 */
                    /* try { // try from 034b2d44 to 035b2d47 has its CatchHandler @ 034b469c */
                    /* try { // try from 034b2d48 to 035b2d53 has its CatchHandler @ 034b46c8 */
  if ((DAT_04567d5b & 1) == 0) {
                    /* try { // try from 034b2d58 to 035b2d63 has its CatchHandler @ 034b46fc */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_KOHGFFDLHFM__);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
                    /* try { // try from 034b2d7c to 035b2d7f has its CatchHandler @ 034b4690 */
                    /* try { // try from 034b2d80 to 035b2d87 has its CatchHandler @ 034b46ac */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 034b2d88 to 035b2d93 has its CatchHandler @ 034b46a8 */
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04567d5b = 1;
  }
                    /* try { // try from 034b2da0 to 035b2da7 has its CatchHandler @ 034b49d4 */
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
  if (pMVar4 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                    /* try { // try from 034b2dc0 to 035b2dd7 has its CatchHandler @ 034b4a8c */
    DG_Tweening_TweenSettingsExtensions__AppendInterval
              (OCBEBGEKOIA,(pMVar4->fields).NJOJKEKJIDC,(MethodInfo *)0x0);
    pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
    if (pMVar4 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                    /* try { // try from 034b2de4 to 035b2deb has its CatchHandler @ 034b494c */
      duration = (pMVar4->fields).OJILDEBJODL;
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034b2dfc to 035b2e03 has its CatchHandler @ 034b495c */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034b2e04 to 035b2e1f has its CatchHandler @ 034b4a88 */
      pDVar1 = DG_Tweening_DOTween__To(DPFAFGCKEJH,ABLMELPONIJ,0.0,duration,(MethodInfo *)0x0);
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)pDVar1,9,
                          Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                         );
                    /* try { // try from 034b2e2c to 035b2e33 has its CatchHandler @ 034b49c8 */
      DG_Tweening_TweenSettingsExtensions__Append(OCBEBGEKOIA,pDVar2,(MethodInfo *)0x0);
      pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
      if (pMVar4 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                    /* try { // try from 034b2e44 to 035b2e4b has its CatchHandler @ 034b49d0 */
                    /* try { // try from 034b2e4c to 035b2e57 has its CatchHandler @ 034b4988 */
                    /* try { // try from 034b2e68 to 035b2e6f has its CatchHandler @ 034b49e4 */
        pDVar1 = DG_Tweening_DOTween__To
                           (AHKPHMEGKPH,EBDJIEAJIGK,1.0,(pMVar4->fields).OJILDEBJODL,
                            (MethodInfo *)0x0);
        pDVar2 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)pDVar1,8,
                            Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                           );
                    /* try { // try from 034b2e80 to 035b2e87 has its CatchHandler @ 034b4954 */
                    /* try { // try from 034b2e88 to 035b2e93 has its CatchHandler @ 034b496c */
        uVar3 = (*(__this->klass->vtable)._4_unknown.methodPtr)
                          (__this,(__this->klass->vtable)._4_unknown.method);
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 034b2ea4 to 035b2eab has its CatchHandler @ 034b4984 */
          DG_Tweening_TweenSettingsExtensions__Append(OCBEBGEKOIA,pDVar2,(MethodInfo *)0x0);
        }
        else {
          DG_Tweening_TweenSettingsExtensions__Join(OCBEBGEKOIA,pDVar2,(MethodInfo *)0x0);
        }
        callback = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 034b2ebc to 035b2ec3 has its CatchHandler @ 034b49ac */
                    /* try { // try from 034b2ec4 to 035b2edf has its CatchHandler @ 034b4a6c */
        DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 034b2eec to 035b2ef3 has its CatchHandler @ 034b49e8 */
        DG_Tweening_TweenSettingsExtensions__AppendCallback(OCBEBGEKOIA,callback,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

