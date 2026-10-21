// Nekki.SF2.GUI.Profile.ProfileScene$$BAOFPAIAGIO @ RVA 0x3395CCC

void Nekki_SF2_GUI_Profile_ProfileScene__BAOFPAIAGIO
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **LKJHINHIIHD;
  UnityEngine_CanvasGroup_o *pUVar1;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_00;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *pNVar3;
  
  if ((DAT_04567c51 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_JAJMCAAJCDE__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04567c51 = 1;
  }
  pUVar1 = (__this->fields)._ProfileUIGroup;
  if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,true,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).GJIPOBCNEPG;
    if ((pNVar3 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) &&
       (pUVar1 = (pNVar3->fields)._CanvasGroup, pUVar1 != (UnityEngine_CanvasGroup_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,true,(MethodInfo *)0x0);
      LKJHINHIIHD = &(__this->fields).KPIIFJBPODO;
      Nekki_SF2_GUI_Profile_ProfileScene__CCPABLFBFFA(__this_00,LKJHINHIIHD,method_00);
      t = DG_Tweening_DOTweenModuleUI__DOFade
                    ((__this->fields)._ProfileUIGroup,1.0,0.5,(MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                         ((Il2CppObject *)t,action,
                          Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                         );
      (__this->fields).KPIIFJBPODO = pDVar2;
      thunk_FUN_01c20e04(LKJHINHIIHD,pDVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

