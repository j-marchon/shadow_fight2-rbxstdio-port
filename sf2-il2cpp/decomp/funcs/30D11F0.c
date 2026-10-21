// Nekki.SF2.GUI.ItemsScroll$$MGGKMCMKAPB @ RVA 0x30D11F0

void Nekki_SF2_GUI_ItemsScroll__MGGKMCMKAPB
               (Nekki_SF2_GUI_ItemsScroll_o *__this,UnityEngine_Vector2_o EMPKHNEPHPO,
               float PNEIGGOFIOA,MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *pDVar1;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  DG_Tweening_Tween_o *t;
  
  if ((DAT_04566303 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_GFLOBMPEFEI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_JCANALKPKAB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_MDIDNJLOKNC__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Tween>__);
    DAT_04566303 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_ItemsScroll__CCPABLFBFFA(__this,method);
  getter = (DG_Tweening_Core_DOGetter_Vector2__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
  DG_Tweening_Core_DOGetter<Vector2>___ctor();
  setter = (DG_Tweening_Core_DOSetter_Vector2__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
  DG_Tweening_Core_DOSetter<Vector2>___ctor();
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__To(getter,setter,EMPKHNEPHPO,PNEIGGOFIOA,(MethodInfo *)0x0);
  (__this->fields).OGBOMAHLDKN = (DG_Tweening_Tween_o *)pDVar1;
  thunk_FUN_01c20e04(&(__this->fields).OGBOMAHLDKN);
  t = (__this->fields).OGBOMAHLDKN;
  action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__OnComplete<object>
            ((Il2CppObject *)t,action,Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Tween>__
            );
  return;
}

