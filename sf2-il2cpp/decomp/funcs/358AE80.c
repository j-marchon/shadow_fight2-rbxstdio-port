// EnterScreen$$MuteMusicSequence @ RVA 0x358AE80

DG_Tweening_Sequence_o * EnterScreen__MuteMusicSequence(EnterScreen_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0368ae94 to 0378aebb has its CatchHandler @ 0368b070 */
  if ((DAT_04568d43 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_EnterScreen_DLFIDGMIDHC__);
    FUN_01bab630(&Method_EnterScreen_MLEALBBBJKF__);
    FUN_01bab630(&Method_EnterScreen_NDFOKAPCPLD__);
                    /* try { // try from 0368aef0 to 0378af17 has its CatchHandler @ 0368b068 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568d43 = 1;
    method = extraout_x1;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo,method);
  }
  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  getter = (DG_Tweening_Core_DOGetter_float__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
  DG_Tweening_Core_DOGetter<float>___ctor();
                    /* try { // try from 0368af70 to 0378afb3 has its CatchHandler @ 0368b06c */
  setter = (DG_Tweening_Core_DOSetter_float__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
  DG_Tweening_Core_DOSetter<float>___ctor();
  t = DG_Tweening_DOTween__To(getter,setter,0.0,(__this->fields).fadeTime,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
                    /* try { // try from 0368afb4 to 0378b047 has its CatchHandler @ 0368ad58 */
  callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(s,callback,(MethodInfo *)0x0);
  return s;
}

