// HBOAEOEEDEN$$NJIDENMIPAC @ RVA 0x311F494

void HBOAEOEEDEN__NJIDENMIPAC(HBOAEOEEDEN_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar2;
  DG_Tweening_Tween_o **ppDVar3;
  
  if ((DAT_04566615 & 1) == 0) {
    FUN_01bab630(&Method_HBOAEOEEDEN_HPJPLNJKEOC__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    DAT_04566615 = 1;
  }
  ppDVar3 = &(__this->fields).BHAEECGJBLB;
  bVar1 = DG_Tweening_TweenExtensions__IsActive(*ppDVar3,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  t = DG_Tweening_DOTweenModuleSprite__DOFade
                ((__this->fields).PBFDBGBMIKF,0.0,2.0,(MethodInfo *)0x0);
  action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  t_00 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                   ((Il2CppObject *)t,action,
                    Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Color,_Color,_ColorOptions>>__
                   );
  pDVar2 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                     (t_00,2,
                      Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Color,_Color,_ColorOptions>>__
                     );
  (__this->fields).BHAEECGJBLB = pDVar2;
  thunk_FUN_01c20e04(ppDVar3,pDVar2);
  return;
}

